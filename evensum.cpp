#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>> n;
    int evensum = 0;

    for(int i = 1; i<=n ; i+=1){
        if(i%2==0){
            evensum+=i;
        }

    }
    cout<<"evensum = "<<evensum;
    return 0;
}