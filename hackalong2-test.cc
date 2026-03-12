//Eliana Campa 837531508
#include <string>
#include <iostream>

void double_it(int& x){
    x = x * 2;
    std::cout << "x is " << x << "\n";
}

void double_it_pointer(int* x){
    //int* derefferences int
    *(x + 1) = *(x + 1) * 2;
    std::cout << "x is " << *x << "\n";
}

int main(){
    int value [] = {5, 7, 13, 17, 19};
    std::cout << "value is " << value[0] << "\n";
    double_it_pointer(value);
    //& in this context means the address of a value
    std::cout << "value is " << *value << "\n";
}
