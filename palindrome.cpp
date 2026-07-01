#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>> n;
    int original=n;

    int rev=0;
    int digit;
    while(n>0){
        digit=n % 10;
        rev=rev*10+digit;
        n = n/10;
    }
    if(original==rev){
        cout<<"palindrome";

    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}