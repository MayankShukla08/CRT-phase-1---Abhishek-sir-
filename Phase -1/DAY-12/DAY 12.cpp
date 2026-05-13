// Day - 12 -- RECURSSION

#include <iostream>
using namespace std;

void printNumber(int n){
    
    // base condition
    if(n > 5){
        return;
        
    }
    //logic
    cout << n << " ";
    printNumber(n+1);
}

int main(){
    printNumber(1);
    return 0;
}







// Day - 12 -- RECURSSION

//Problem -- 3 -- Fibonacci of a number 
#include <iostream>
using namespace std;

int fibo(int n){
    
    // base condition
    if(n == 0 ){
        return 0;     
    }else{
       if(n == 1 );
       return 1;
    }
    //logic
    return fibo ((n-1) + (n-2));
}

int main(){
    cout << fibo(10);    
}