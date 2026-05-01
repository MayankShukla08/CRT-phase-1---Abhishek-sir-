// Problem 1 -- If condition 
// to verify user's age wether eligible for vote or not ?
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    // if condition 
    if(age >= 18) {
        // logic 
        cout << "Eligible For vote";
    }
    return 0;
}

// Problem 2 -- If - else condition 
// to verify user's age wether eligible for vote or not ?
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    // if condition 
    if(age >= 18) {
        // logic 
        cout << "Eligible For vote";
    } else {
        // logic 
        cout << "Not Eligible For vote";
    }
    return 0;
}

//problem -3 Nested If - else condition 
// to verify user's age wether eligible for cote or not

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
   
   if (age>= 18){
       if (age >= 100){
           cout <<"Eligible for Vote (but we are super senior citizen)";
       }else {
           if (age < 0) {
               cout << "Enter a valid age number ";
           }else {
               cout << "not eligible for vote";
           
           }
       
       }
   }
    return 0;

}