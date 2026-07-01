#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"enter 5 numbers :\n ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // bubble sort
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                // swap elements
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<"sorted array : \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   