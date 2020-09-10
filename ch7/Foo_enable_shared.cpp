//
// Created by Felix FENG on 10/9/2020.
//

#include <iostream>
#include <memory>

using std::enable_shared_from_this;

class Foo: public enable_shared_from_this<Foo>{
public:
    std::shared_ptr<Foo> getPointer(){
        return shared_from_this();
    }
};

int main(){
    auto ptr1 = std::shared_ptr<Foo>(new Foo);
    auto ptr2 = ptr1->getPointer();
}