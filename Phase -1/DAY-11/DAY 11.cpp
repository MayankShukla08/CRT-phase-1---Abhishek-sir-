// DAY - 11 
// Palindrome string 
#include <iostream>
using namespace std;

bool isPalindrome(string str){
    int start = 0;
    int end = str.size()-1;
    
    while (start < end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter a String...";
    cin >> str;
    
    if(isPalindrome(str)) {
        cout << "Palindrome string";
        
    }else {
        cout << "Given string is not a palindrome...";
    }
    return 0;
}