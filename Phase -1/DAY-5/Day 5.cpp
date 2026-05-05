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