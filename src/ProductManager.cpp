//
// Created by pabli on 18/6/2022.
//

#include "ProductManager.h"

ProductManager::ProductManager() {

}

ProductManager::~ProductManager() {

}

const Product &ProductManager::getProduct() const {
    return product;
}

void ProductManager::setProduct(const Product &product) {
    ProductManager::product = product;
}

std::ostream &operator<<(std::ostream &os, const ProductManager &manager) {
    os << "product: " << manager.product;
    return os;
}

void ProductManager::purchase(IReceiptSender *receiptSender) {
    receiptSender->sendReceipt(product.getName());
}
