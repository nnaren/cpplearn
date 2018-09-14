//
// Created by ye on 18-9-10.
//

#ifndef CPPLEARN_FILLCONTEXT_H
#define CPPLEARN_FILLCONTEXT_H

#include <stdio.h>

class FillContext{
public:
    /* 构造函数 */
    FillContext();
    ~FillContext();
    FillContext(int, int, int);
    void setX(int);
    int getX();
    void setY(int);
    int getY();
    void setZ(int);
    int getZ();

//protected:
    FillContext& with(int a);
private:
    int x;
    int y;
    int z;

};

inline FillContext::~FillContext(){
    printf("删除对象");
}
inline void FillContext::setX(int x){
    this->x = x;
}
inline int FillContext::getX() {
    return this->x;
}
inline int FillContext::getY() {
    return this->y;
}
inline int FillContext::getZ() {
    return this->z;
}
inline void FillContext::setY(int y){
    this->y = y;
}
inline void FillContext::setZ(int z){
    this->z = z;
}
inline FillContext::FillContext(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}




#endif //CPPLEARN_FILLCONTEXT_H
