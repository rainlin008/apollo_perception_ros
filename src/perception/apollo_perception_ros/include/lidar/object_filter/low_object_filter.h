/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef _APOLLO_PERCEPTION_STANDALONE_LIDAR_LOW_OBJECT_FILTER_H_
#define _APOLLO_PERCEPTION_STANDALONE_LIDAR_LOW_OBJECT_FILTER_H_

#include <memory>
#include <string>
#include <vector>

#include "lidar/proto/low_object_filter_config.pb.h"

#include "common/object.h"
#include "util/log.h"

namespace apollo_perception_standalone {

struct ObjectFilterOptions {
  ObjectFilterOptions() = default;
  explicit ObjectFilterOptions(Eigen::Matrix4d *pose) : velodyne_trans(pose) {}

  std::shared_ptr<const Eigen::Matrix4d> velodyne_trans = nullptr;
};

class LowObjectFilter {
 public:
  LowObjectFilter() {}
  ~LowObjectFilter() {}

  bool Init(std::string &file_path_low_object_filter_config);

  std::string name() const { return "LowObjectFilter"; }

  bool Filter(const ObjectFilterOptions& obj_filter_options,
              std::vector<std::shared_ptr<Object>>* objects);

 protected:
  void FilterLowObject(const ObjectFilterOptions& obj_filter_options,
                       std::vector<std::shared_ptr<Object>>* objects);

 private:
  low_object_filter_config::ModelConfigs config_;
  float object_height_threshold_  = 0.f;
  float object_position_height_threshold_ = 0.f;

};

}  // namespace apollo
#endif  // MODULES_PERCEPTION_OBSTACLE_LIDAR_OBJECT_FILTER_LOW_OBJECT_FILTER_H_
