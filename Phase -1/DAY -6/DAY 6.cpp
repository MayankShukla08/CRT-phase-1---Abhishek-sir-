// DAY  --6
// Problem -- 1
// Swapping of values of 2 variables

#include <iostream>
using namespace std;

void swapNumber (int*x, int* y){
    int temp =*x;
    *x=*y;
    *y=temp;
}
int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    
    swapNumber(&a,&b);
    cout << a << " " << b;  
}


// Problem -- 2
// Default Argument

#include <iostream>
using namespace std;

int area (int a, int b =5){
    return a*b;
    
}
int main() {
   cout << area (10);
}


/ Problem -- 3
// Call by value -- Photocopy
// Call by Reference -- Original copy 

#include <iostream>
using namespace std;

void updatebyValue(int a){
    a=500;
}
void updatebyReference(int &a){
    a=500;  
}


int main() {
  int original = 100;
  
  updatebyValue(original);
  cout << original;
  updatebyReference(original);
  original << original;
}


// practice problems -- 4
// coffee billing problem

#include <iostream>
using namespace std;

int billing(int a){
    return a*30;
}
int main (){
    int coffee = 3;
    cout << billing(coffee);
}



// practice problems --5
// samrt ac remote // function overloading // default argument

#include <iostream>
using namespace std;

void setTemprature(int temp = 22){
    cout << "Temprature set to " << temp  << "°C" << "\n";
}

void setTemprature(double temp){
    cout << "Temprature set to " << temp  << "°C" << "\n";
}
void setTemprature(string mode) {
    if(mode == "ECO"){
        cout << "Temprature set to 24°C " << "\n";
    } else if(mode == "TURBO") {
        cout << "Temprature set to 18°C " << "\n";
    }
}

int main() {
    setTemprature(); // default value -- 22
    setTemprature(20.5); // manually setting the temprature
    setTemprature("ECO"); // set temprature to 24
    setTemprature("TURBO"); // setTemprature to 18
}