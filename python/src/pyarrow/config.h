// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifndef PYARROW_CONFIG_H
#define PYARROW_CONFIG_H

#include <Python.h>

#include "arrow/util/visibility.h"

#include "pyarrow/numpy_interop.h"

#if PY_MAJOR_VERSION >= 3
#define PyString_Check PyUnicode_Check
#endif

namespace arrow {
namespace py {

ARROW_EXPORT
extern PyObject* numpy_nan;

ARROW_EXPORT
void pyarrow_init();

ARROW_EXPORT
void pyarrow_set_numpy_nan(PyObject* obj);

}  // namespace py
}  // namespace arrow

#endif  // PYARROW_CONFIG_H
