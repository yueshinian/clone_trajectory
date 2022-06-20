//
// Created by ljn on 20-4-12.
//
#include <gflags/gflags.h>
#include <cmath>
#include "config/planning_flags.hpp"

///// Car params.
/////
DEFINE_double(car_width, 2.0, "");

DEFINE_double(car_length, 4.9, "");

DEFINE_double(safety_margin, 0.3, "mandatory safety margin");

DEFINE_double(wheel_base, 2.5, "wheel base");

DEFINE_double(rear_length, -1.0, "rear axle to rear edge");

DEFINE_double(front_length, 3.9, "rear axle to front edge");

DEFINE_double(max_steering_angle, 35.0 * M_PI / 180.0, "");
/////

///// Smoothing related.
/////
DEFINE_string(smoothing_method, "TENSION2", "rReference smoothing method");
bool ValidateSmoothingnMethod(const char *flagname, const std::string &value)
{
    return value == "TENSION" || value == "TENSION2";
}
bool isSmoothingMethodValid = google::RegisterFlagValidator(&FLAGS_smoothing_method, ValidateSmoothingnMethod);

DEFINE_string(tension_solver, "OSQP", "solver used in tension smoothing method");

DEFINE_bool(enable_searching, true, "search before optimization");

DEFINE_double(search_lateral_range, 10.0, "max offset when searching");

DEFINE_double(search_longitudial_spacing, 1.5, "longitudinal spacing when searching");

DEFINE_double(search_lateral_spacing, 0.6, "lateral spacing when searching");

// TODO: change names!
DEFINE_double(frenet_angle_diff_weight, 1500, "frenet smoothing angle difference weight");

DEFINE_double(frenet_angle_diff_diff_weight, 200, "frenet smoothing angle diff diff weight");

DEFINE_double(frenet_deviation_weight, 15, "frenet smoothing deviation from the orignal path");

DEFINE_double(cartesian_curvature_weight, 1, "");

DEFINE_double(cartesian_curvature_rate_weight, 50, "");

DEFINE_double(cartesian_deviation_weight, 0.0, "");

DEFINE_double(tension_2_deviation_weight, 0.005, "");

DEFINE_double(tension_2_curvature_weight, 1, "");

DEFINE_double(tension_2_curvature_rate_weight, 10, "");

DEFINE_bool(enable_simple_boundary_decision, true, "faster, but may go wrong sometimes");

DEFINE_double(search_obstacle_cost, 0.4, "searching cost");

DEFINE_double(search_deviation_cost, 0.4, "offset from the original ref cost");
/////

///// Optimization related
/////
DEFINE_string(optimization_method, "KP", "optimization method, named by input: "
                                         "K uses curvature as input, KP uses curvature' as input, and"
                                         "KCP uses curvarure' and apply some constraints on it");
bool ValidateOptimizationMethod(const char *flagname, const std::string &value)
{
    return value == "K" || value == "KP" || value == "KCP";
}
bool isOptimizationMethodValid = google::RegisterFlagValidator(&FLAGS_optimization_method, ValidateOptimizationMethod);

DEFINE_double(K_curvature_weight, 50, "curvature weight of solver K");

DEFINE_double(K_curvature_rate_weight, 200, "curvature rate weight of solver K");

DEFINE_double(K_deviation_weight, 0, "deviation weight of solver K");

DEFINE_double(KP_curvature_weight, 10, "curvature weight of solver KP and KPC");

DEFINE_double(KP_curvature_rate_weight, 200, "curvature rate weight of solver KP and KPC");

DEFINE_double(KP_deviation_weight, 0, "deviation weight of solver KP and KPC");

DEFINE_double(KP_slack_weight, 3, "punish distance to obstacles");

DEFINE_double(expected_safety_margin, 0.6, "soft constraint on the distance to obstacles");

// TODO: make this work.
DEFINE_bool(constraint_end_heading, true, "add constraints on end heading");

// TODO: make this work.
DEFINE_bool(enable_exact_position, false, "force the path to reach the exact goal state");
/////

///// Others.
/////
DEFINE_double(output_spacing, 0.3, "output interval");

DEFINE_double(epsilon, 1e-6, "use this when comparing double");

DEFINE_bool(enable_dynamic_segmentation, true, "dense segmentation when the curvature is large.");
/////