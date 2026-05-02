//Day -3 -- 
// problem -1 --print 1-10 using a for loop 
#include <iostream>
using namespace std;
int main(){
   for (int i=1; i<=10 ;i++){
       cout << i << " ";
   }
        
    return 0;
}


// problem -2 --print 10-1 using a for loop 
#include <iostream>
using namespace std;
int main(){
   for (int i=10; i>=1 ;i--){
       cout << i << " ";
   }
        
    return 0;
}


// problem -3 --print 10-1 using a while loop 
#include <iostream>
using namespace std;
int main(){
    int i= 1;
    while (i<= 10){
        cout << i << " ";
        i++;
    }
        
    return 0;
}


// problem -4 --print 1-10 using a while loop 
#include <iostream>
using namespace std;
int main(){
    int i= 10;
    while (i>= 1){
        cout << i << " ";
        i--;
    }
        
    return 0;
}


// problem -5 --print 1-10 using a do-while loop 
#include <iostream>
using namespace std;
int main(){
    int i= 1;
    do{
        cout << i << " ";
        i++;
    } while (i<=10);
    
    return 0;
}


// problem -6 --print 10-1 using a do-while loop 
#include <iostream>
using namespace std;
int main(){
    int i= 10;
    do{
        cout << i << " ";
        i--;
    } while (i>=1);
    
    return 0;
}


// problem -7 --finding factorial of any number 

#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int fact = 1;
   for (int i=n; i>=1; i--){
       fact = fact * i;
       
   }
   cout << fact;
    return 0;
}