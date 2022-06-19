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


    return 0;
}