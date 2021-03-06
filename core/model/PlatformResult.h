/*
 * Copyright 2019 WolkAbout Technology s.r.o.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PLATFORMRESULT_H
#define PLATFORMRESULT_H

#include <string>

namespace wolkabout
{
enum class PlatformResult
{
    OK = 0,
    ERROR_GATEWAY_NOT_FOUND,
    ERROR_KEY_MISSING,
    ERROR_NOT_A_GATEWAY,
    ERROR_DEVICE_NOT_FOUND,
    ERROR_INVALID_DEVICE
};

std::string to_string(PlatformResult result);
}    // namespace wolkabout

#endif    // PLATFORMRESULT_H
