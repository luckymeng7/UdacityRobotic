# Project 5: Home Service Robot

To build and open the project: 

1. clone this repo to catkin_ws/src folder
2. In folder catkin_ws:
```
$ catkin_make
$ source devel/setup.bash
```
3. Navigate to project5 folder
4. Manually test SLAM
```
$ ./test_slam.sh
```
5. Manually test navigation
```
$ ./test_navigation.sh
```
6. To run the home service robot, which will travel to pick up zone, pick virtual object up and then travel to drop off zone, drop off the virtual object
```
$ ./home_service.sh 
```

### Come to pick up zone and picking up the virtual object

### Arrive pick up zone and virtual object picked up

### Move to drop off zone

### Arrive drop off zone and drop off virtual object



Reference for Sending Goals to the Navigation Stack: 
http://wiki.ros.org/navigation/Tutorials/SendingSimpleGoals

Reference for Modeling Virtual Objects:
http://wiki.ros.org/rviz/Tutorials/Markers%3A%20Basic%20Shapes
