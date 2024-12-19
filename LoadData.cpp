#include "LoadData.h"
Data_::Data_() {
    destination = "";
    price = 0;
}
Data_::Data_(std::string destination_, int price_) {
    destination = destination_;
    price = price_;
}
Data_::~Data_() {}
