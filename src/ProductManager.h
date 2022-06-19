//
// Created by pabli on 18/6/2022.
//
/**
 * High-level module
 */
#ifndef LAB01_INHERITANCE_PRODUCTMANAGER_H
#define LAB01_INHERITANCE_PRODUCTMANAGER_H

#include <ostream>
#include"Product.h"
#include "IReceiptSender.h"
class ProductManager {
private:
    Product product;
public:
    ProductManager();

    virtual ~ProductManager();

    const Product &getProduct() const;

    void setProduct(const Product &product);

    friend std::ostream &operator<<(std::ostream &os, const ProductManager &manager);

    void purchase(IReceiptSender* receiptSender);
};


#endif //LAB01_INHERITANCE_PRODUCTMANAGER_H
