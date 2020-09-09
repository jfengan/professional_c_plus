//
// Created by Felix FENG on 9/9/2020.
//

#include <iostream>

int* malloc_int(int value){
    int* p = (int*)malloc(sizeof(int));
    *p = value;
    return p;
}

int main(){
    std::unique_ptr<int, decltype(free) *> mySmartPtr(malloc_int(42), free);
    return 0;
}