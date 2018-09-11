
#include "fillcontext.h"
#include <iostream>
FillContext::FillContext(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}
FillContext::~FillContext(){
    printf("end");
};