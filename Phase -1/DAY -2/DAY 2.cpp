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

//problem -6  Break statment  
// we have to add numbers until we get a negative number
#include <iostream>
using namespace std;

int main() {
  int n;
  int sum = 0;

  
  while (true){
      cin >> n;
      
      if (n < 0){
          break;
      }
      sum = sum + n;
  }
  cout << sum;
    return 0;

}

//problem 7 -- smart home lighting system  

#include <iostream>
using namespace std;

int main() {
  string dayOrNight;
  bool motionDetected;
  
  cout << "is it Day or Night ? :";
  cin >> dayOrNight;
  cout << "is motion detected? (1 for yes ,0 for no):";
  cin >> motionDetected;
  
  if(dayOrNight == "night" || dayOrNight == "Night"){
      if(motionDetected){
          cout << "turn on the LED light with 100% brightness.. ";
      }else {
          cout << "turn on LED light with 10% brightness.. ";
      }
      } else {
        cout << "turn off the lights..." ; 
      
      }
  return 0;
}


//problem 8 -- customer support IVR system  
// 1 -- for support 
// 2 -- for billing
// 3 -- Technical issues 
// 4 -- talk to the Agent

#include <iostream>
using namespace std;

int main() {
 int choice ;
 cin >> choice ;
 
 switch (choice){
     case 1:
     cout <<"Transferring call to the customer supprot...";
     break;
     
     case 2:
     cout <<"Transferring call to billing and accounts...";
      break;
      
     case 3:
     cout << "connecting to the Techinical help desk...";
      break;
      
     case 4:
     cout << "connecting call to the agent... ";
      break;
      
    default: 
    cout << "Invalid selection , enter a valid number"  ;
 }
 return 0;
}

