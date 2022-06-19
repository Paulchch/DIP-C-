//
// Created by pabli on 18/6/2022.
//

#ifndef LAB01_INHERITANCE_APPRECEIPTSENDER_H
#define LAB01_INHERITANCE_APPRECEIPTSENDER_H
#include"IReceiptSender.h"

class AppReceiptSender : public IReceiptSender{
public:
    void sendReceipt(std::string productName) override;
};


#endif //LAB01_INHERITANCE_APPRECEIPTSENDER_H
