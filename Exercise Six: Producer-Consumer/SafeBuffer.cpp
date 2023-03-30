#include "SafeBuffer.h"

void SafeBuffer::consume()
{
    mutex->Wait();
    localEvent.consumeEvent();
    items->Signal();
    mutex->Wait();
}

void SafeBuffer::put(Event e)
{
    items->Wait();
    localEvent = e;
    mutex->Signal();
}
