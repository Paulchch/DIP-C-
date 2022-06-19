//
// Created by pabli on 18/6/2022.
//

#ifndef LAB01_INHERITANCE_IRECEIPTSENDER_H
#define LAB01_INHERITANCE_IRECEIPTSENDER_H
#include<iostream>

class IReceiptSender {
public:
    virtual void sendReceipt(std::string productName) = 0;

    virtual ~IReceiptSender() = default;
};


#endif //LAB01_INHERITANCE_IRECEIPTSENDER_H
