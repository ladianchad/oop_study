#ifndef SHAPE_FACTORY_HPP
#define SHAPE_FACTORY_HPP

#include <mutex>
#include <map>

#include "circle.hpp"
#include "line.hpp"

class ShapeFactory
{
public:
  enum ShapeType{
    CIRCLE,
    LINE
  };
  ShapeFactory();

  Shape* getShape(ShapeType type);

  void createType(ShapeType &type);

private:
  static std::mutex mutex_;
  static std::map<ShapeType,Shape*> shapes_;
};

ShapeFactory::ShapeFactory(/* args */)
{

}

Shape*
ShapeFactory::getShape(ShapeType type)
{
  if(!shapes_[type]){
    createType(type); 
  }
  return shapes_[type];
}

void
ShapeFactory::createType(ShapeType &type)
{
  std::lock_guard<std::mutex> unique_lock(mutex_);
  if(type == ShapeType::CIRCLE){
    shapes_[type] = new Circle();
  } else if(type == ShapeType::LINE){
    shapes_[type] = new Line();
  }
}

std::mutex ShapeFactory::mutex_;
std::map<ShapeFactory::ShapeType,Shape*> ShapeFactory::shapes_;
#endif