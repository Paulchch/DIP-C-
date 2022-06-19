//
// Created by pabli on 18/6/2022.
//

#ifndef LAB01_INHERITANCE_EMAILRECEIPTSENDER_H
#define LAB01_INHERITANCE_EMAILRECEIPTSENDER_H

#include <string>
#include"IReceiptSender.h"

class EmailReceiptSender : public IReceiptSender {
public:
    void sendReceipt(std::string productName) override;
};


#endif //LAB01_INHERITANCE_EMAILRECEIPTSENDER_H
