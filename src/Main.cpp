#include<iostream>
#include "IReceiptSender.h"
#include "EmailReceiptSender.h"
#include "AppReceiptSender.h"
#include "ProductManager.h"

int main(){

    Product product("BMW G80 M3", 80000);

    /**
     * An interface object pointer is pointing at a concrete object that overrides
     * a specific class from the interface, depending on the type object that the pointer is pointing at
     * the output differs thanks to polymorphism
     */

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