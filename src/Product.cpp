//
// Created by pabli on 18/6/2022.
//

#include "Product.h"

Product::Product() {

}

Product::~Product() {

}

const std::string &Product::getName() const {
    return name;
}

void Product::setName(const std::string &name) {
    Product::name = name;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    Product::price = price;
}

std::ostream &operator<<(std::ostream &os, const Product &product) {
    os << "name: " << product.name << " price: " << product.price;
    return os;
}

Product::Product(const std::string &name, double price) : name(name), price(price) {}
