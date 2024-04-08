# Configure ROS workspace
create a ROS workspace in your system using the following command

`$ mkdir -p ~/ros2_ws/src && cd ros2_ws/ && colcon build`

## Create Publisher Package
1.Create publisher package within the src folder of the ros workspace

`
$ cd ~/ros2_ws/src/
$ ros2 pkg create pubsub_pkg --build-type ament_python`

2.Add a publisher script

`$ cd ~/ros2_ws/src/pubsub_pkg/pubsub_pkg/
$ touch publisher.py
$touch subscriber.py`

3.Open scripts in text editor and write the code
4.In the setup.py file add the console scripts to make them excecutable

`
'publisher = pubsub_pkg.publisher:main',
'subscriber = pubsub_pkg.subscriber:main'`

5.Add the following dependencies in the package.xml

`<buildtool_depend>ament_python</buildtool_depend>
<depend>rclpy</depend>`

6.In the pubsub_pkg/pubsub_pkg directory convert the scripts into excecutables in the command line

`chmod +x publisher.py subscriber.py`

## Create Custom Message 

1.Inside the ROS workspace create a custom message package using the command line

`
$ cd ~/ros2_ws/src/
$ ros2 pkg create rbl_message`

2.Enter the message directory and remove unwanted files and add a .msg file for custom message 

`
$ cd ~/ros2_ws/src/my_robot_interfaces/
$ rm -rf include/
$ rm -rf src/
$ mkdir msg
$ mkdir srv`

3. Modify the package.xml file
   <?xml version="1.0"?>
<?xml-model href="http://download.ros.org/schema/package_format3.xsd" schematypens="http://www.w3.org/2001/XMLSchema"?>
<package format="3">
  <name>rbl_message</name>
  <version>0.0.0</version>
  <description>TODO: Package description</description>
  <maintainer email="parzival523@todo.todo">parzival523</maintainer>
  <license>TODO: License declaration</license>

  <buildtool_depend>ament_cmake</buildtool_depend>

  <buildtool_depend>rosidl_default_generators</buildtool_depend>
  <exec_depend>rosidl_default_runtime</exec_depend>
  <member_of_group>rosidl_interface_packages</member_of_group>

  <test_depend>ament_lint_auto</test_depend>
  <test_depend>ament_lint_common</test_depend>

  <export>
    <build_type>ament_cmake</build_type>
  </export>
</package>


4.Similarily modify the CMakeList.txt to allow for the rosidl environment

`
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Rbl.msg"
 )

ament_export_dependencies(rosidl_default_runtime)`

5. In the rbl_message directory, create a .msg file and add your data tyoes in it

## Run and build the ROS workspace

1. Go in the ros2_ws directory and build the workspace
   `
   colcon build
   setup install/setup.bash`

2. Open two terminals and run the publisher and subscriber

  For Publisher
  
   `ros2 run pubsub_pkg publisher`
  
  For Subscriber 
  
    `ros2 run pubsub_pkg subscriber`

3.In another terminal, echo the publisher dummy data

   `$ ros2 topic echo /publisher`

4. Run `rqt_graph` in the terminal to visualize the nodes/topics





