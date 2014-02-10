/**
 * @file    System.cpp
 * @brief   A System manages all Entities having all required Components.
 *
 * Copyright (c) 2014 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */

#include "ecs/System.h"

namespace ecs {


System::System() {
}

System::~System() {
}

/* virtual pure to force subclassing by user
void System::update(float aDeltaTime) {
}
*/

} // namespace ecs