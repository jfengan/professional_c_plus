//
// Created by Felix FENG on 9/9/2020.
//

#include <iostream>
#include <memory>

class Simple{
public:
    Simple() = default;
    ~Simple(){
        std::cout << "Call destructor" << std::endl;
    }
    void go(){
        std::cout << "simple->go()" << std::endl;
    }
};

void processData(Simple* simple){
    simple->go();
}

int main(){
    std::unique_ptr<Simple> mySimpleSmartPtr(new Simple());
    processData(mySimpleSmartPtr.get());
    std::cout << "mySimpleSmartPtr.reset()" << std::endl;
    mySimpleSmartPtr.reset();
    mySimpleSmartPtr.reset(new Simple());

    Simple* simple = mySimpleSmartPtr.release();
    delete simple;
    simple = nullptr;
}