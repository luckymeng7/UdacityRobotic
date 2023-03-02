#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

// Define a client for to send goal requests to the move_base server through a SimpleActionClient
typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char** argv){
  // Initialize the simple_navigation_goals node
  ros::init(argc, argv, "pick_objects");

  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);

  // Wait 5 sec for move_base action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }

  move_base_msgs::MoveBaseGoal goal;

  // set up the frame parameters
  goal.target_pose.header.frame_id = "map";
  goal.target_pose.header.stamp = ros::Time::now();

  // Define a position and orientation for pickup
  goal.target_pose.pose.position.x = 0;
  goal.target_pose.pose.position.y = 2.5;
  goal.target_pose.pose.orientation.w = 1.720;

   // Send the goal position and orientation for pickup
  ROS_INFO("Robot is traveling to the pickup zone");
  ac.sendGoal(goal);

  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){

    ROS_INFO("Robot arrived the pickup zone");
   

    ROS_INFO("Waiting for object to be picked up");
    
    //pause for 5 seconds and then move to second position
    ros::Duration(5.0).sleep();
    
    move_base_msgs::MoveBaseGoal goal;
    goal.target_pose.header.frame_id = "map";
    goal.target_pose.header.stamp = ros::Time::now(); 

    // Define a second position and orientation for the drop off
    goal.target_pose.pose.position.x = -2;
    goal.target_pose.pose.position.y = 2.5;
    goal.target_pose.pose.orientation.w = 1;

    // Send the goal position and orientation for the drop off 
    ROS_INFO("Robot is traveling to the dropoff zone");
    ac.sendGoal(goal);

    // Wait an infinite time for the results
    ac.waitForResult();

    // Check if the robot reached its goal
    if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
      ROS_INFO("Robot arrived drop off zone");
      ROS_INFO("Waiting for object to be dropped off");
    }
    else {
      ROS_INFO("Robot failed to arrive drop off zone");

    }
    
    //pause for 5 seconds and then move to second position
    ros::Duration(5.0).sleep();
  }
  else
    ROS_INFO("Robot failed to arrive pickup zone");

  
  return 0;
}
