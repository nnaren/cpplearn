//
// Created by ye on 18-9-14.
//

#ifndef CPPLEARN_SERVICE1_H
#define CPPLEARN_SERVICE1_H

#include "Type.h"
class Service {
public:
    Service() {};
    ~Service() {};
    void setTypeID(WORD16 typeID);
    WORD16 getTypeID();

protected:
    WORD16 typeID;

};

class Service1 : public Service {
public:
    Service1(){
        typeID = 1;
    };
    Service1(int num1, int num2){
        typeID = 1;
        this->num1 = num1;
        this->num2 = num2;
    };
    ~Service1(){};
    WORD32 add();
    void setNum1(WORD32);
    WORD32 getNum1();
    void setNum2(WORD32);
    WORD32 getNum2();

private:
    WORD32 num1;
    WORD32 num2;
};

enum ServiceType {
    Add,
    Delete,
    Multipalte
};
#endif //CPPLEARN_SERVICE1_H
