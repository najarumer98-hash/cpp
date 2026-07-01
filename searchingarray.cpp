#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"enter 10 numbers : \n ";
    for(int i=0;i<10;i++){
    cin>>arr[i];}

    // /element to search
    int key;
    cout<<" element to search : ";
    cin>>key;

    // searching
    bool found=false;
    for(int i=0; i<10;i++){
        if(arr[i]==key){
            found=true;
            break;
        }

    }
    if (found){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}