
#include "fillcontext.h"
#include <iostream>

FillContext& FillContext::with(int a) {
    std::cout << a;
    return *this;
}
