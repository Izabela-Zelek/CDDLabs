/* Event.h ---
 *
 * Filename: Event.h Description: Author: Izabela Zelek  Maintainer: Created:
 * Thurs 30 March 15:00:00 2023 (+0000) Version: Package-Requires: ()
 * Last-Updated: Thurs 30 March 15:00:00 2023 (+0000) By: Izabela Zelek Update #:
 * 1 URL: Doc URL: Keywords: Compatibility:
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
#pragma once
#include <iostream>
class Event
{
    int number;
 public:
    void createEvent(int t_number){this->number = t_number;std::cout<<"Created " << number << std::endl;};
    void consumeEvent(){std::cout << "Consumed " << number << std::endl;};
};


/* Event.h ends here */
