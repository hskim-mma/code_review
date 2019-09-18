#include "./goods.h"

// set and get the index and price of goods 

// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(int index, int price) {
  if (index < 0) || (price < 0)) {
     goods_index_ = 0;
     goods_price_ = 0;
     cout << "index and price can't be minus value" << endl;
  }
  else {
    goods_index_ = index;
    goods_price_ = price;
  }
}

// Return index information
int Goods::GetIndex() {
  return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() {
  return goods_price_;
}
