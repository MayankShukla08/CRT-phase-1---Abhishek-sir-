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