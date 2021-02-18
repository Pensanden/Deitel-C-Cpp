#include <iostream>
#include <string>

class GradeBook
{
    public:    
        explicit GradeBook(std::string name) 
        : courseName(name)
        {
        }
        

        void displayMessage() const
        {
            std::cout<<"Welcome to the Grade Book for\n"<<courseName<<"!"
            <<std::endl;
        }
        void setCourseName(std::string name){
            courseName = name;
        }
    private:
       std::string courseName;
};

int main(){
    std::cout<<"Please enter the course name:"<<std::endl;
    std::string nameOfCourse;
    GradeBook myGradebook("CS 102 Advnaced Programming");
    std::getline(std::cin,nameOfCourse);
    std::cout<<std::endl;
    GradeBook *gb = new GradeBook(nameOfCourse);
    gb->displayMessage();
    myGradebook.displayMessage();
}