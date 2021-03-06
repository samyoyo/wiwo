/*
 *
 * Copyright 2003-2015 CORE Security Technologies
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Authors:
 *          Andres Blanco (6e726d)
 *          Andres Gazzoli
 *
 */

#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#include <stdbool.h>

// Verifies if network interface is valid.
bool is_interface_valid(const char*);
// Causes the driver for this interface to be shut down.
bool interface_down(const char*);
// Causes the interface to be activated.
bool interface_up(const char*);

#endif /* _SYSTEM_H_ */
