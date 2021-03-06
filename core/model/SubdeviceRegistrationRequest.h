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

#ifndef SUBDEVICEREGISTRATIONREQUEST_H
#define SUBDEVICEREGISTRATIONREQUEST_H

#include "model/DetailedDevice.h"
#include "model/DeviceTemplate.h"

#include <string>

namespace wolkabout
{
class SubdeviceRegistrationRequest
{
public:
    SubdeviceRegistrationRequest(std::string subdeviceName, std::string subdeviceKey, DeviceTemplate subdeviceTemplate,
                                 bool defaultBinding = true);
    explicit SubdeviceRegistrationRequest(DetailedDevice device, bool defaultBinding = true);

    const std::string& getSubdeviceName() const;
    const std::string& getSubdeviceKey() const;
    bool getDefaultBinding() const;

    const DeviceTemplate& getTemplate() const;

private:
    std::string m_subdeviceName;
    std::string m_subdeviceKey;
    DeviceTemplate m_subdeviceTemplate;
    bool m_defaultBinding;
};
}    // namespace wolkabout

#endif    // SUBDEVICEREGISTRATIONREQUEST_H
