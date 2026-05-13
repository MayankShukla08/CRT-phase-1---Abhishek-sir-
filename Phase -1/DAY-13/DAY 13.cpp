// DAY -- 13
// problem -1 

#include <iostream>
using namespace std;

int consecutiveOnes(int n){
    
    //base condition
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 2;
    }
    if(n == 2){
        return 3;
    }
    
    //logic
    
    return consecutiveOnes(n - 1) + consecutiveOnes(n - 2);
}


int main()
{
    cout << consecutiveOnes(10);

    return 0;
}