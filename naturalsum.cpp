#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>> n;
    int sum = 0;

    for(int i= 1; i<=n ; i++){
        sum+=i;
    }
    cout<<"sum = "<<n*(n+1)/2<<endl;
    return 0;
}