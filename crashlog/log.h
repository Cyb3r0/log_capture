/* Copyright (C) Intel 2014
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LOG_TAG
#define LOG_TAG "CRASHLOG"
#endif

/* Uncomment below line to enable LOGV logs output */
/* #define LOG_NDEBUG 0 */

#include <string.h>
#include <stdlib.h>

#include <log/log.h>

#ifndef LOGE
#define LOGE ALOGE
#endif

#ifndef LOGW
#define LOGW ALOGW
#endif

#ifndef LOGI
#define LOGI ALOGI
#endif

#ifndef LOGD
#define LOGD ALOGD
#endif

#ifndef LOGV
#define LOGV ALOGV
#endif
