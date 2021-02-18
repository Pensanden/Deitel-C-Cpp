#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

void moveTortoise(int *);
void moveHare(int *);
void drawField();





int main(){
    int TortoiseLocation = 1, *Tortoiseptr = &TortoiseLocation; 
    int HareLocation = 1,*Hareptr = &HareLocation;
    int timer = 0;
    system("cls");
    srand(time(NULL));
    std::cout<<"BANG!\nAND THEYRE OFF!!!\n";
    while (timer != 70)
    
        {   
            Sleep(100);
            moveTortoise(Tortoiseptr);
            moveHare(Hareptr);
            timer++;
            std::cout<<"-";
            if (TortoiseLocation == HareLocation){ 
                 std::cout<<"OUCH";
                 }
            
        }
    TortoiseLocation > *Hareptr ? printf("H\n The Hare is Victorius") : printf("T\n The Tortoise is Victorius");




}



void moveTortoise(int *ptr){
    int randonum = (1+ rand() % 10);
    randonum <= 5 && randonum >= 1 ? *ptr += 3 : randonum >= 6 && randonum <= 7 ? *ptr -= 2 : *ptr++ ;
    if (*ptr <= 0)
            *ptr = 1;
    
}
void moveHare(int *ptr){
    int randonum = (1+ rand() % 10);
    randonum <= 5 && randonum >= 1 ? *ptr += 3 : randonum >= 6 && randonum <= 7 ? *ptr -= 2 : *ptr++ ;
    if (*ptr <= 0)
            *ptr = 1;
   
        
}

