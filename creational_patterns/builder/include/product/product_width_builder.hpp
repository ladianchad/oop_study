#ifndef BUILDER_PRODUCT_WIDTH_BUILDER_H_
#define BUILDER_PRODUCT_WIDTH_BUILDER_H_
#include <product/item.hpp>
#include <vector>
namespace builder
{
  class ProductWidhtBuilder
  {
  public:
    ProductWidhtBuilder *setType(int type)
    {
      type_ = type;
      return this;
    }

    ProductWidhtBuilder *addItem(Item *item)
    {
      items_.push_back(item);
      return this;
    }

    std::vector<Item *> getItems()
    {
      return items_;
    }

    int getType()
    {
      return type_;
    }

  private:
    std::vector<Item *> items_;
    int type_;
  };
} // namespace builder

#endif