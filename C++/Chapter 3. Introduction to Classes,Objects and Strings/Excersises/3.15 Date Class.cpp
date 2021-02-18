#include <iostream>

class Date{
    public:
    //Constructor
        Date(int year,int month,int day){
            setMonth(month);
            setDay(day);
            setYear(year);
                           
        }
    
        int getDay() const {
            return day;
        }
        int getMonth() const {
            return month;
        }
        int getYear() const {
            return year;
        }
        void setYear(int year){
            this->year = year;

        }
        void setMonth(int month){
            if (month <= 0 || month >= 13){
                std::cerr<<"Invalid Month Input Month set to January\n";
                this->month = 1;
            }
            else
                this->month = month;
            
        }
        
        void setDay(int day){
            if (day <= 0 || day >= 31 ){
                std::cerr<<"Invalid day Input day set to the 1st\n";
                this->day = 1;
            }
            else
                this->day = day;
        }
        void displayMessage(){
            std::cout<<"The Date is "<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<std::endl;
        }

    private:
        int day,month,year;
};

int main(){

    Date date1(2020,13,25);
    date1.displayMessage();
}