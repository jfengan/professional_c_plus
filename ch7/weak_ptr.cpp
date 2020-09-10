//
// Created by Felix FENG on 10/9/2020.
//

#include <iostream>
#include <memory>
using std::weak_ptr;
using std::shared_ptr;

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

void useResource(weak_ptr<Simple>& weakSimple){
    auto resource = weakSimple.lock();
    if(resource){
        std::cout << "Resource still alive." << std::endl;
    }
    else{
        std::cout << "Resource has been freed!" << std::endl;
    }
}

int main(){
    auto sharedSimple = shared_ptr<Simple>(new Simple());
    weak_ptr<Simple> weakSimple(sharedSimple);
    useResource(weakSimple);
    sharedSimple.reset();
    useResource(weakSimple);
    return 0;
}