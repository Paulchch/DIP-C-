#include<iostream>
#include "IReceiptSender.h"
#include "EmailReceiptSender.h"
#include "AppReceiptSender.h"
#include "ProductManager.h"

int main(){

    Product product("BMW G80 M3", 80000);

    IReceiptSender* emailReceiptSender = new EmailReceiptSender();
    IReceiptSender* appReceiptSender = new AppReceiptSender();

    ProductManager productManager;
    productManager.setProduct(product);

    //Send by email
    productManager.purchase(emailReceiptSender);

    //Send by App
    productManager.purchase(appReceiptSender);

    /**
     * The output is dictated by the implementation of the Interface's method depending on the type
     * of concrete object that the pointer is looking at
     */
    return 0;
}