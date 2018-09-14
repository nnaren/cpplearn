//
// Created by ye on 18-9-14.
//

#include "Service1.h"
#include "Type.h"

void Service::setTypeID(WORD16 typeID) {
    this->typeID = typeID;
};

WORD16 Service::getTypeID() {
    return this->typeID;
}


WORD32 Service1::add(){
    return num1+num2;
}
void Service1::setNum1(WORD32 num1){
    this->num1 = num1;
}
WORD32 Service1::getNum1() {
    return this->num1;
}
void Service1::setNum2(WORD32 num2){
    this->num2 = num2;
}
WORD32 Service1::getNum2(){
    return this->num2;
}