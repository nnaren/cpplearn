//
// Created by ye on 18-9-14.
//

#ifndef CPPLEARN_HELP_H
#define CPPLEARN_HELP_H
class Help {
public:
    Help(){};
    ~Help(){};
    void show(){};
};
class Service1Help : public Help {
public:
    Service1Help(){};
    ~Service1Help(){};
    void show();
};
#endif //CPPLEARN_HELP_H
