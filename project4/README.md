# Project 4: Map My World

This project is continued from project 1 & 2 & 3

**Please find the rtabmap.db in this project folder as the generated rtabmap database.**

To build and open the project: 

1. clone this repo to catkin_ws/src folder
2. In folder catkin_ws:
```
$ catkin_make
$ source devel/setup.bash
$ roslaunch my_robot world.launch
```
3. In a new terminal tab, launch the teleop node:
```
$ cd /home/workspace/catkin_ws/ 
$ source devel/setup.bash
$ roslaunch teleop_twist_keyboard teleop_twist_keyboard.py
```
4. In a new terminal tab, launch the mapping node:
```
$ cd /home/workspace/catkin_ws/ 
$ source devel/setup.bash
$ roslaunch my_robot mapping.launch
```
5. Drive around the robot with teleop


**Screenshot of rtabmap-databaseViewer:**
![image](https://user-images.githubusercontent.com/19479517/221435207-b233b2fc-2629-4ddb-bf47-9f739e25be33.png)






