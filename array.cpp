#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"enter 10 numbers : \n";
    for(int i=0; i<10 ; i++){ 
        cin>>arr[i];}

    // sum
    int sum=0;
    for(int i=0; i<10;i++){
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum;
    return 0;

}