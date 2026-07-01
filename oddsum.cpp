#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int oddsum = 0;

    for( int i=1 ; i<=n ; i+=2){
        oddsum+=i;

    }
    cout<<"oddsum = "<<oddsum<<endl;
    return 0;
}
