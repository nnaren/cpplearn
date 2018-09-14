//
// Created by ye on 18-9-14.
//

#ifndef CPPLEARN_SERVICE1_H
#define CPPLEARN_SERVICE1_H
class Service {
public:
    Service() {};
    ~Service() {};
    void setTypeID(WORD16 typeID);
    WORD16 getTypeID();
private:
    WORD16 typeID;

};
class Service1 : public Service {
public:
    Service1();
    ~Service1();

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
