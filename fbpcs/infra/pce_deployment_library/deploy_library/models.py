# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

# pyre-strict

from dataclasses import dataclass
from typing import Optional


@dataclass
class RunCommandReturn:
    return_code: int
    output: Optional[str]
    error: Optional[str]
