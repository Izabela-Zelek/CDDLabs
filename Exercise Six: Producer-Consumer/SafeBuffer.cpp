#include "SafeBuffer.h"

void SafeBuffer::consume()
{
    items->Wait();
    std::unique_lock<std::mutex> lock(m_mutex);
    localEvent.Remove(e.consumeEvent());
    spaces->Signal();
    std::unique_lock<std:::mutex> unlock(m_mutex);
}

void SafeBuffer::put(Event e)
{
    spaces->Wait();
    std::unique_lock<std::mutex> lock(m_mutex);
    localEvent.Add(e);
    items->Signal();
    std::unique_lock<std::mutex> unlock(m_mutex);
}
