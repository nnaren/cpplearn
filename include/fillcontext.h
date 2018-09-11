//
// Created by ye on 18-9-10.
//

#ifndef CPPLEARN_FILLCONTEXT_H
#define CPPLEARN_FILLCONTEXT_H

#include <stdio.h>

class FillContext{
public:

    FillContext();
    ~FillContext();
    FillContext(int, int, int);

    int x;
    int y;
    int z;

};

inline FillContext::~FillContext(){
    printf("end");
}

inline FillContext::FillContext(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}




#endif //CPPLEARN_FILLCONTEXT_H
