//
// Created by pabli on 18/6/2022.
//

#ifndef LAB01_INHERITANCE_PRODUCT_H
#define LAB01_INHERITANCE_PRODUCT_H
#include<iostream>

class Product {
private:
    std::string name;
    double price;
public:
    Product();

    Product(const std::string &name, double price);

    virtual ~Product();

    const std::string &getName() const;

    void setName(const std::string &name);

    double getPrice() const;

    void setPrice(double price);

    friend std::ostream &operator<<(std::ostream &os, const Product &product);

};


#endif //LAB01_INHERITANCE_PRODUCT_H
