#include <iostream>

int main(){
    int a = 7;
    int *aptr = nullptr;
    aptr = &a;
    std::cout<<"a is :"<<*aptr<<" and its address is : "<<aptr<<std::endl;
}