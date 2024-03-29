/* SafeBuffer.h ---
 *
 * Filename: SafeBuffer.h
 * Description:
 * Author: Izabela Zelek
 * Maintainer:
 * Created: Thurs 30 March 15:00:00 2023 (+0000)
 * Version:
 * Package-Requires: ()
 * Last-Updated: Thurs 30 March 15:00:00 2023 (+0000)
 *           By: Izabela Zelek
 *     Update #: 1
 * URL:
 * Doc URL:
 * Keywords:
 * Compatibility:
 *
 */

/* Commentary:
 *
 *
 *
 */

/* Change Log:
 *
 *
 */

/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Code: */
#pragma once
#include "Semaphore.h"
#include "Event.h"
class SafeBuffer
{
    std::mutex mutex;
    Semaphore *items = new Semaphore(0);
    Semaphore *spaces = new Semaphore(10);
    Event localEvent[];
public:
    void consume();
    void put(Event e);
}


/* SafeBuffer.h ends here */
