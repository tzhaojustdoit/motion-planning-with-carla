#ifndef CATKIN_WS_SRC_LOCAL_PLANNER_INCLUDE_STRING_NAME_HPP_
#define CATKIN_WS_SRC_LOCAL_PLANNER_INCLUDE_STRING_NAME_HPP_
#include <string>
namespace planning{
namespace topic{
const std::string kEgoVehicleStatusName = "/carla/ego_vehicle/vehicle_status"; //NOLINT
const std::string kTrafficLigthsName = "/carla/traffic_lights";                //NOLINT
const std::string kCarlaActorListName = "/carla/actor_list";                   //NOLINT
const std::string kObjectsName = "/carla/objects";                             //NOLINT
const std::string kPublishedTrajectoryName = "/published_trajectory";          //NOLINT
const std::string kEgoVehicleInfoName = "/carla/ego_vehicle/vehicle_info";     //NOLINT
const std::string kEgoVehicleOdometryName = "/carla/ego_vehicle/odometry";     //NOLINT
const std::string kVisualizedTrajectoryName = "/visualized_trajectory";        //NOLINT
const std::string kInitialPoseName = "/initialpose";                           //NOLINT
const std::string kGoalPoseName = "/move_base_simple/goal";                    //NOLINT
const std::string kTrafficLightsInfoName = "/carla/traffic_lights_infos";        //NOLINT

}

namespace service{
const std::string kRouteServiceName = "/carla/ego_vehicle/get_route";                                        //NOLINT
const std::string kGetActorWaypointServiceName = "/carla_waypoint_publisher/ego_vehicle/get_actor_waypoint"; //NOLINT
const std::string kGetEgoWaypontServiceName = "/carla_waypoint_publisher/ego_vehicle/get_waypoint";          //NOLINT

}
}

#endif //CATKIN_WS_SRC_LOCAL_PLANNER_INCLUDE_STRING_NAME_HPP_