#include <iostream>

class GradeBook
{
    public:    
        void displayMessage() const
        {
            std::cout<<"Welcome to the Grade Book!"<<std::endl;
        }
};

int main(){
    GradeBook myGradebook;
    myGradebook.displayMessage();
}