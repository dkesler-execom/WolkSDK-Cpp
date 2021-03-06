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

#include "model/FirmwareUpdateStatus.h"

namespace wolkabout
{
FirmwareUpdateStatus::FirmwareUpdateStatus(std::vector<std::string> deviceKeys, FirmwareUpdateStatus::Status status)
: m_deviceKeys{std::move(deviceKeys)}, m_status{status}
{
}

FirmwareUpdateStatus::FirmwareUpdateStatus(std::vector<std::string> deviceKeys, FirmwareUpdateStatus::Error errorCode)
: m_deviceKeys{std::move(deviceKeys)}, m_status{FirmwareUpdateStatus::Status::ERROR}, m_errorCode{errorCode}
{
}

const std::vector<std::string>& FirmwareUpdateStatus::getDeviceKeys() const
{
    return m_deviceKeys;
}

FirmwareUpdateStatus::Status FirmwareUpdateStatus::getStatus() const
{
    return m_status;
}

const WolkOptional<FirmwareUpdateStatus::Error>& FirmwareUpdateStatus::getErrorCode() const
{
    return m_errorCode;
}
}    // namespace wolkabout