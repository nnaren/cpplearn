//
// Created by ye on 18-9-15.
//


#include "Msg.h"
#include "Type.h"

MsgType Msg::getMsgName() {
    return this->msgName;
}


Msg::Msg(MsgType msgName) {
    this->msgName = msgName;
}