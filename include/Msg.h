//
// Created by ye on 18-9-15.
//

#ifndef CPPLEARN_MSG_H
#define CPPLEARN_MSG_H

#include "Type.h"
enum MsgType {
    Msg1 = 493,
    Msg2,
    Msg3
};

class Msg {
public:
    Msg() {};
    ~Msg() {};
    Msg(MsgType msgName);
    void setMsg(MsgType msgName);
    MsgType getMsgName();
private:
    MsgType msgName;
};



#endif //CPPLEARN_MSG_H
