// Copyright (c) 2020 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "blob.h"

#include "paddle_inference_api.h"

class PpInferenceEngine{
  public:
    void Init(std::string model_dir, PPI_config &config)

    void Infer(std::vector<std::vector<std::DateBlob>> &inputs, std::vector<std::vector<DateBlob>> *outputs)
  private:
    std::unique_ptr<paddle::PaddlePredictor> predictor_;
}
