#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
  Goods(int index, int price) {
   if (index < 0) {
     goods_index_ = 0;
     cout << "index can't be minus value" << endl;
   }
   else if (price < 0) {
     goods_price_ = 0;
     cout << "price can't be minus value" << endl;
   }
   else {
     goods_index = index;
     goods_price = price;
   }
  }
  void SetGoodsInfo(int index, int price);
  int GetIndex();
  int GetPrice();

 private:
  int goods_index_ = 0;
  int goods_price_ = 0;
};


#endif  // GOODS_H_
