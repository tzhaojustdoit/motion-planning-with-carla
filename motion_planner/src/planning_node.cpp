#include <ros/ros.h>
#include "motion_planner/planner.hpp"
#include <memory>
int main(int argc, char **argv) {
  ros::init(argc, argv, "motion_planning_node");
  ros::NodeHandle nh;
  auto planner = std::make_unique<planning::Planner>(nh);
  planner->Launch();
  return 0;
}