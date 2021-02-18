#include <iostream>

size_t getSize(double *ptr);

int main(){
    double numbers[20];

    std::cout<<"The number of bytes in the array is : "<<sizeof(numbers);

    std::cout<<"\n The number of bytes returned by getSize is: "<<getSize(numbers)<<std::endl;

    long double *ptd;
    std::cout<<sizeof(ptd);

}


size_t getSize(double *ptr){
    return sizeof(ptr);
}