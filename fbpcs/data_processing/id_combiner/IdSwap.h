/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <filesystem>
#include <istream>
#include <ostream>
#include <unordered_map>
#include <vector>

namespace pid::combiner {
/*
This library implements the IdSwap that is used to swap the sensitive id in a
data file with the private id generated by the pid service
*/
void idSwap(
    std::istream& dataInFilePath,
    std::istream& spineIdFilePath,
    std::ostream& outFilePath);
} // namespace pid
