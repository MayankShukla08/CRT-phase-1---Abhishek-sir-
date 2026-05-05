//Day -5 -- 
// problem - 1 -- Function declaration and initilization

#include <iostream>
using namespace std;

int area (int a , int b){
    return a*b;
}

 int main(){
     int length = 10 ;
     int width = 5 ;
     int areaOfRectangle = area(length ,width);
     
     cout << areaOfRectangle;
     
 }


 //Day -5 -- 
// problem - 2 -- types of functions 
// 2.1 -- No argument and no return types


#include <iostream>
using namespace std;

void DoorBell (){
    cout << "ting tong...";
}
int main (){
    DoorBell();
    return 0;
    
}


// problem - 2 -- types of functions 
// 2.2 -- Argument and no return types


#include <iostream>
using namespace std;

void sendText (string message){
    cout << message ;
}
int main (){
    sendText("BJP wons...");
    return 0;
    
}


// problem - 2 -- types of functions 
// 2.3 -- no Argument but return types


#include <iostream>
using namespace std;

int ticketNumber (){
    return 101 ;
}
int main (){
    cout << ticketNumber();
    return 0;
    
}


// problem - 2 -- types of functions 
// 2.4 -- Argument with some return types


#include <iostream>
using namespace std;


int currencyConversition (int amountInUSD){
    return amountInUSD / 100;
}
int main (){
   cout << currencyConversition(2500);
    return 0;
    
}


// problem - 5 -- Function Overloading 



#include <iostream>
using namespace std;


int add (int a , int b){
    return a+b;
}

int add (int a, int b , int c ){
    return a+b+c;    
}
int add (int a, int b , int c , int d){
    return a+b+c+d;
}
double add (double a, double b ){
    return a+b;
}
int main (){
    cout << add(5,2) << "\n";
    cout << add(5,2,3) << "\n";
    cout << add(5,2,3,4) << "\n";
    cout << add(5.5,2.0); 
    

    return 0;
    
}