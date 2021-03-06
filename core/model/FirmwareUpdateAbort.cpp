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

#include "model/FirmwareUpdateAbort.h"

#include <utility>

namespace wolkabout
{
FirmwareUpdateAbort::FirmwareUpdateAbort(std::vector<std::string> deviceKeys) : m_deviceKeys{std::move(deviceKeys)} {}

const std::vector<std::string>& FirmwareUpdateAbort::getDeviceKeys() const
{
    return m_deviceKeys;
}
}    // namespace wolkabout
