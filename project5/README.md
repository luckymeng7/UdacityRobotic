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

### Note: the following screenshots were captured to show the concept, they were not captured in one run. The printed message may be mis-aligned between screenshots

### Come to pick up zone and picking up the virtual object
![image](https://user-images.githubusercontent.com/19479517/222339692-2edd8fa6-ef56-4735-8ad3-d13183227a3c.png)

### Arrive pick up zone and virtual object picked up
![image](https://user-images.githubusercontent.com/19479517/222339910-52c2ad26-de4a-4dd3-b162-1c2b23db6c6d.png)

### Move to drop off zone
![image](https://user-images.githubusercontent.com/19479517/222339717-b2631d3d-019a-48d8-ab54-7824d306e362.png)

### Arrive drop off zone and drop off virtual object
![image](https://user-images.githubusercontent.com/19479517/222339495-5b7a96db-dfd5-44b6-a1da-4b4eab8fcad4.png)



Reference for Sending Goals to the Navigation Stack: 
http://wiki.ros.org/navigation/Tutorials/SendingSimpleGoals

Reference for Modeling Virtual Objects:
http://wiki.ros.org/rviz/Tutorials/Markers%3A%20Basic%20Shapes
