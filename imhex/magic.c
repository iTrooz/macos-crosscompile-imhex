/*
Copyright (c) 2014. The YARA Authors. All Rights Reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors
may be used to endorse or promote products derived from this software without
specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*

The original idea and inspiration for this module comes from Armin Buescher.

*/

#include <yara/mem.h>
#include <yara/modules.h>

#define MODULE_NAME magic

// Thread-local storage key used to store a pointer to a MAGIC_CACHE struct.
YR_THREAD_STORAGE_KEY magic_tls;

typedef struct
{
  const char* cached_type;
  const char* cached_mime_type;

} MAGIC_CACHE;

static int get_cache(MAGIC_CACHE** cache)
{
  return ERROR_SUCCESS;
}

define_function(magic_mime_type)
{
  
}

define_function(magic_type)
{

}

begin_declarations
  declare_function("mime_type", "", "s", magic_mime_type);
  declare_function("type", "", "s", magic_type);
end_declarations

int module_initialize(YR_MODULE* module)
{
  return -1;
}

int module_finalize(YR_MODULE* module)
{
  return -1;
}

int module_load(
    YR_SCAN_CONTEXT* context,
    YR_OBJECT* module_object,
    void* module_data,
    size_t module_data_size)
{
  return ERROR_SUCCESS;
}

int module_unload(YR_OBJECT* module)
{
  return ERROR_SUCCESS;
}
