//
// Created by Felix FENG on 9/9/2020.
//

#include <iostream>

void doubleInts(int* theArray, size_t size){
    for(size_t i = 0; i < size; i++){
        theArray[i] *= 2;
    }
    std::cout << "Call double ints*" << std::endl;
}

/*
void doubleInts(int theArray[], size_t size){
    for(size_t i = 0; i < size; i++){
        theArray[i] *= 2;
    }
    std::cout << "Call double int[]" << std::endl;
}
 */

template<size_t N>
void doubleIntsStack(int (&theArray)[N]){
    for(size_t i = 0; i < N; i++){
        theArray[i] *= 2;
    }
    std::cout << "Call doubleIntStack" << std::endl;
}

int main(){
    size_t arrSize = 4;
    int* heapArray = new int[arrSize]{1, 3, 4, 5};
    doubleInts(heapArray, arrSize);
    // doubleIntsStack(heapArray); does not work
    delete[] heapArray;

    int stackArray[] = {5, 7, 8, 11};
    //arrSize = std::size(stackArray); c++17 style, require #include <array>
    doubleInts(&stackArray[0], arrSize);
    doubleInts(stackArray, arrSize);
    doubleIntsStack(stackArray);
}