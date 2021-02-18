#include <iostream>

int main(){
    int b[] = {10,20,30,40};
    int *bptr = b;
    std::cout<<"Array b will be displayed with:\n\nArray Subscirpt Notation\n";
    for (size_t i = 0; i < 4; ++i)
    {
        std::cout<<"b["<<i<<"] = "<<b[i]<<std::endl;
        
    }
    
    std::cout<<"\nPointer/offset notation where "
    <<"the pointer is the array name\n";
       for (size_t offset1 = 0; offset1 < 4; ++offset1)
    {
        std::cout<<"*b( + "<<offset1<<") = "<<*(b+ offset1)<<std::endl;
         
        
    }

   

    
}