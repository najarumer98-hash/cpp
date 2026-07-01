#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d,r1,r2;
    cout<<"enter a,b,c : ";
    cin>>a,b,c;
    d=b*b-4*a*c;

    if(d>0){
        r1=-b+sqrt(d);
        r2=-b-sqrt(d);
        cout<<" roots are real and different "<<r1<<" "<<r2;
    }
    else if(d==0){
        r1=r2=-b/2*a;
        cout<<"roots are equal";
    }
    else{
        cout<<"roots are imaginary";
    }
    return 0;
}