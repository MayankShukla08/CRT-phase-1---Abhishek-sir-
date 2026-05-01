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


//problem -4  ternary operator 
// find the greater number among 2 
#include <iostream>
using namespace std;

int main() {
    int a,b;
    int max_number;
    
    cin >> a >> b ;
    
    //ternary operator 
    max_number = (a > b) ? a : b;
    
    cout <<max_number;
    return 0;

}

//problem -5  Continue statment  
// Print 1 to N and avoid those number which are divisible by 3
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i= 1; i<= n; i++) {
        if (i % 3 ==0) {
            continue ;
        }
        cout << i << " ";
        
    }
     cout << "\n";
    return 0;

}