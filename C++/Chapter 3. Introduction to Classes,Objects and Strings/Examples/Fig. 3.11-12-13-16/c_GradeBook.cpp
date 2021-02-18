#include <iostream>
#include "i_GradeBook.h"
#include <string>
 
gradeBook::gradeBook(std::string name)
{
    setCourseName(name);
}
void gradeBook::setCourseName(std::string name){
    if (name.size() <= 25)
        courseName = name;
    else {
        courseName = name.substr(0,25);
        std::cerr<<"Name \""<<name<<"\" exceeeds the maximum length (25). \n "
        "Limiting courseName to the first 25 characters of the input.\n"<<std::endl;
    }

}

std::string gradeBook::getCourseName() const{
    return courseName;
}

void gradeBook::displayMessage() const{
    std::cout<<"Welcome to the grade book for: "<<getCourseName()<<"!"<<std::endl;
}