# Project 2
To build and open the project: 

1. clone this repo to catkin_ws/src folder
2. In folder catkin_ws:
```
$ catkin_make
$ source devel/setup.bash
$ roslaunch my_robot world.launch
```
3. In a new terminal tab:
```
$ cd /home/workspace/catkin_ws/ 
$ source devel/setup.bash
$ roslaunch ball_chaser ball_chaser.launch
```
4. In a new terminal tab:
```
$ cd /home/workspace/catkin_ws/
$ source devel/setup.bash
$ rosrun rqt_image_view rqt_image_view  
```

![image](https://user-images.githubusercontent.com/19479517/211400391-9ebcaa60-538c-4fda-98b6-1e6fc3eff750.png)


