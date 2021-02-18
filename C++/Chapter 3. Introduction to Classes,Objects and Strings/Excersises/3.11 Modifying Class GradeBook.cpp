#include <iostream>
#include <string>

class gradeBook{
    public: 
         gradeBook(std::string name,std::string instructorName){
            setCourseName(name);
            setInstructorName(instructorName);
            }

        void setCourseName(std::string name){
          if (name.size() <= 25)
            courseName = name;
          else {
            courseName = name.substr(0,25);
            std::cerr<<"Name \""<<name<<"\" exceeeds the maximum length (25). \n "
            "Limiting courseName to the first 25 characters of the input.\n"<<std::endl;
             }
        }       
        std::string getCourseName() const{
             return courseName;
        }
        void setInstructorName(std::string name){
            instructorName = name;
        }
        std::string getInstructorName() const{
            return instructorName;
        }
        void displayMessage() const{
            std::cout<<"Welcome to the GradeBook Application for the "<<getCourseName()<<" course the Instructor for this course is: "<<getInstructorName()<<std::endl;
        }
    private:
            std::string courseName;
            std::string instructorName;
};

int main() {
    gradeBook gradebook1("CS 104 Analysis And Design of Algorithms","Mehrad Tanavosh");
    gradeBook gradebook2("CE 103 Assembley Programming and Machine Language","Rafi Allameh");
    gradeBook gradebook3("CS 105 Theory of Computation and Automata","Parvaneh Asghari");

    gradebook1.displayMessage();
    gradebook2.displayMessage();
    gradebook3.displayMessage();
}