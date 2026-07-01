#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a : ";
    cin>>a;

    int b;
    cout<<"enter b : ";
    cin>>b;

    int gcd;
    for(int i=1; i<=a && i<=b ; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int lcm;
    lcm=(a*b)/gcd;
    cout<<"gcd = "<<gcd<<endl;
    cout<<"lcm = "<<lcm<<endl;

    return 0 ;
}