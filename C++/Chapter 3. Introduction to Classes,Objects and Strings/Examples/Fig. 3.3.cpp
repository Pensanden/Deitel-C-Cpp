#include <iostream>
#include <string>

class GradeBook
{
    public:    
        void displayMessage(std::string courseName) const
        {
            std::cout<<"Welcome to the Grade Book for\n"<<courseName<<"!"
            <<std::endl;
        }
};

int main(){
    std::cout<<"Please enter the course name:"<<std::endl;
    std::string nameOfCourse;
    GradeBook myGradebook;
    std::getline(std::cin,nameOfCourse);
    std::cout<<std::endl;
    myGradebook.displayMessage(nameOfCourse);
}