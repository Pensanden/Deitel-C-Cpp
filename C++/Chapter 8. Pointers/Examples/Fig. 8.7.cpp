#include <iostream>

int cubeByReference(int *);

int main(){
    int number = 5;
    int *nptr = &number;
    std::cout<<"The Original Value of Number is: " <<number<<std::endl;

    cubeByReference(nptr);
    std::cout<<"the Value of Number Cubed is: "<<number<<std::endl;
    
}

int cubeByReference(int *nptr){
    *nptr = *nptr * *nptr * *nptr;
}