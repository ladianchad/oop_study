#include <robot.h>
#include <camera.h>
#include <lidar.h>
#include <iostream>
int main(int argc, char const *argv[])
{
  Lidar lidar;
  Camera camera;
  Robot robot;

  robot.setLidar(&lidar);
  robot.setCamera(&camera);

  Robot::Point point =  robot.getPosition();
  std::cout<<"point : "<<point.x<<" , "<<point.y<<std::endl;
  return 0;
}
