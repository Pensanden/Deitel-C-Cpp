#include <iostream>

int cubeByValue(int);

int main(){
    int number = 5;
    std::cout<<"The Original Value of Number is: " <<number<<std::endl;

    number = cubeByValue(number);
    std::cout<<"the Value of Number Cubed is: "<<number<<std::endl;
    
}

int cubeByValue(int n){
    return n*n*n;
}