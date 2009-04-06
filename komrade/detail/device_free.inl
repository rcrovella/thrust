/*
 *  Copyright 2008-2009 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


/*! \file device_free.inl
 *  \brief Inline file for device_free.h.
 */

#include <komrade/device_free.h>
#include <komrade/detail/device/cuda/free.h>

namespace komrade
{

void device_free(komrade::device_ptr<void> ptr)
{
  detail::device::cuda::free(ptr);
} // end device_free()

} // end komrade

