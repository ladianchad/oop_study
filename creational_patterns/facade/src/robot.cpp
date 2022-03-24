#include <robot.h>
#include <iostream>

Robot::Robot() {}

void Robot::setLidar(Lidar* lidar){
  lidar_ = lidar;
}

void Robot::setCamera(Camera* camera){
  camera_ = camera;
}

Robot::Point Robot::calculateLidar(Lidar::Data data){
  std::cout<<"lidar operation..."<<std::endl;
  return Point();
}

Robot::Point Robot::calculateCamera(Camera::Data data){
  std::cout<<"camera operation..."<<std::endl;
  return Point();
}

Robot::Point Robot::getPosition(){
  Point point;
  if(lidar_){
    point = calculateLidar(lidar_->getData());
  }
  if(camera_){
    point = calculateCamera(camera_->getData());
  }
  return point;
}