#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int a=0;
    int  b=1;
    int c;

    cout<<"fibonacci series : ";

    for(int i=1; i<=n; i++){
        cout<< a <<" ";
        c=a+b;
        a=b;
        b=c;
    }

    
    return 0;
}