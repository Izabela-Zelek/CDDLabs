// Barrier.cpp ---
//
// Filename: Barrier.cpp
// Description:
// Author: Izabela Zelek
// Maintainer:
// Created: Thurs March 23 15:00 2023 (+0000)
// Version:
// Package-Requires: ()
// Last-Updated: Thurs March 23 15:00 2019 (+0000)
//           By: Izabela
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.
//
//

// Code:
#include "Barrier.h"
#include <iostream>

Barrier::Barrier(int numThreads)
{
    this->numThreads = numThreads;
    count = 0;
}

void Barrier::wait()
{
    mutex->Wait();
    count += 1;
    if(count == numThreads)
    {
        std::cout << std::endl<< "Last" << std::endl;
        barrier2->Wait();
        barrier->Signal();
    }
    mutex->Signal();

    barrier->Wait();
    barrier->Signal();

    mutex->Wait();
    count -= 1;
    if(count == 0)
    {
        barrier->Wait();
        barrier2->Signal();
    }
    mutex->Signal();

    barrier2->Wait();
    barrier2->Signal();
}

Barrier::~Barrier()
{
    delete mutex;
    delete barrier;
    delete barrier2;
}
//
// Barrier.cpp ends here
