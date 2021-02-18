#include <iostream>

class Account{
    public:
    //contstructor
        explicit Account(int initalBalance){
            if (initalBalance >= 0){
                balance = initalBalance;
            }
            else
            {
                std::cerr<<"Invalid Input Negetive Balance is Imposible balance set to 0"<<std::endl;
                balance = 0;
            }
            

        };
    //-----------------------
    int getBalance() const{ 
        return balance;
    }   
    int debit(int amount){
        if (balance >= amount){
        balance -= amount;
        std::cout<<"New Balance is: "<<getBalance()<<std::endl;}
        else {
            std::cerr<<"Overdrawn Balance set to 0"<<std::endl;
            balance = 0;}
    }

    int credit(int amount){
        balance += amount;
        std::cout<<"New Balance is: "<<getBalance()<<std::endl;
    }

    private:
        int balance;
};

int main(){
    Account acc1(-5);
    Account acc2(50);

    acc2.credit(80);
    acc2.debit(150);
    std::cout<<"Current Balance is: "<<acc2.getBalance();

}