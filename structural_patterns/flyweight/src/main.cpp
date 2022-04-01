#include <shape_factory.hpp>

int main(int argc, char const *argv[])
{
  ShapeFactory factory;

  Shape *shape;
  shape = factory.getShape(ShapeFactory::ShapeType::CIRCLE);
  shape->draw();

  shape = factory.getShape(ShapeFactory::ShapeType::LINE);
  shape->draw();

  shape = factory.getShape(ShapeFactory::ShapeType::CIRCLE);
  shape->draw();

  shape = factory.getShape(ShapeFactory::ShapeType::LINE);
  shape->draw();
  
  return 0;
}
