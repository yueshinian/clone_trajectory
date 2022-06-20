//
// Created by ljn on 20-4-12.
//

#ifndef PATH_OPTIMIZER_INCLUDE_PATH_OPTIMIZER_CONFIG_PLANNING_FLAGS_HPP_
#define PATH_OPTIMIZER_INCLUDE_PATH_OPTIMIZER_CONFIG_PLANNING_FLAGS_HPP_

#include <gflags/gflags.h>

DECLARE_double(car_width);

DECLARE_double(car_length);

DECLARE_double(safety_margin);

DECLARE_double(wheel_base);

DECLARE_double(rear_length);

DECLARE_double(front_length);

DECLARE_double(max_steering_angle);

DECLARE_string(smoothing_method);

DECLARE_string(tension_solver);

DECLARE_bool(enable_searching);

DECLARE_double(search_lateral_range);

DECLARE_double(search_longitudial_spacing);

DECLARE_double(search_lateral_spacing);

DECLARE_double(frenet_angle_diff_weight);

DECLARE_double(frenet_angle_diff_diff_weight);

DECLARE_double(frenet_deviation_weight);

DECLARE_double(cartesian_curvature_weight);

DECLARE_double(cartesian_curvature_rate_weight);

DECLARE_double(cartesian_deviation_weight);

DECLARE_double(tension_2_deviation_weight);

DECLARE_double(tension_2_curvature_weight);

DECLARE_double(tension_2_curvature_rate_weight);

DECLARE_bool(enable_simple_boundary_decision);

DECLARE_string(optimization_method);

DECLARE_double(K_curvature_weight);

DECLARE_double(K_curvature_rate_weight);

DECLARE_double(K_deviation_weight);

DECLARE_double(KP_curvature_weight);

DECLARE_double(KP_curvature_rate_weight);

DECLARE_double(KP_deviation_weight);

DECLARE_double(KP_slack_weight);

DECLARE_double(expected_safety_margin);

DECLARE_bool(constraint_end_heading);

DECLARE_bool(enable_exact_position);

DECLARE_double(output_spacing);

DECLARE_double(search_obstacle_cost);

DECLARE_double(search_deviation_cost);

DECLARE_double(epsilon);

DECLARE_bool(enable_dynamic_segmentation);
#endif //PATH_OPTIMIZER_INCLUDE_PATH_OPTIMIZER_CONFIG_PLANNING_FLAGS_HPP_
