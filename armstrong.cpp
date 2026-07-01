#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n ;
    cout<<"enter n : ";
    cin>> n;

    int original = n;

    // count total digits
   int digits = 0;
   while( n != 0){
    n = n/10;
    digits++;
   }
   n = original;


//    armstrong sum
   int sum= 0;
   int digit;
   while(n != 0){
    digit = n%10;
    sum = sum +pow(digit , digits);
    n = n/10 ;
   }
//    arm strong check
   if(sum == original){
    cout<< original <<" is an armstrong ";
   }
   else{
    cout<< original <<" is not an armstrong ";
   }
   return 0;
}