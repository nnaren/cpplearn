//
// Created by ye on 18-9-15.
//
#include "Msg.h"
#include "Type.h"
#include <iostream>
using namespace std;
int main() {
    Msg msg(MsgType::Msg2);
    switch (msg.getMsgName()){
        case MsgType::Msg1:
            cout << "This is a msg1" << endl;
            break;
        case MsgType::Msg2:
            cout << "This is a msg2" << endl;
            break;
        case MsgType::Msg3:
            cout << "This is a msg3" << endl;
            break;
        default:
            printf("Error! No this Msg. [MsgID=%d]", msg.getMsgName());
    }
    return FAIL;
}