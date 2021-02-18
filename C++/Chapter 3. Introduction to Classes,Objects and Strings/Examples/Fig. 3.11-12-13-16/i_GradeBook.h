#include <string>
//GardeBook Class Interface
class gradeBook{
    public: 
        explicit gradeBook(std::string);
        void setCourseName(std::string);
        std::string getCourseName() const;
        void displayMessage() const;
        private:
            std::string courseName;
};