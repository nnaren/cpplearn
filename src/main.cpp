//
// Created by Percy on 2018/9/11.
//

#include "main.h"
#include "fillcontext.h"
#include "Type.h"
#include <iostream>
#include "Service1.h"
#include "Help.h"

int main(){
    while(1) {
        std::string order;
        if(order == "ok")   break;
        std::cout << "Input order.(type 'quit' or 'exit' for exit)" << std::endl;
        std::cin >> order;

        if (order == "quit" | order == "exit") break;
        else if (order == "add") {
            std::cout << "Now, do function add" << std::endl;
            int a = ServiceType::Delete;
            std:: cout << a << std::endl;
        } else if ("help"== order){
            Service1Help serv1help;
            serv1help.print();

        }
        else {
            std::cout << "You typed: \"" + order + "\", but the ORDER cannot find. please input again."<< std::endl;

    }


    }
}
