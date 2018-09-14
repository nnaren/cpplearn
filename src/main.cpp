//
// Created by Percy on 2018/9/11.
//

#include "main.h"
#include "fillcontext.h"
#include <iostream>
int main(){
    FillContext fc(1,2,3);
    std::cout<< fc.getY() << std::endl;
    fc.with(2).with(3) ;
}
