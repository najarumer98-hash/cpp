#include <iostream>
using namespace std;

int main(){
    int side , base , height , radius;
    // area of square
    cout<<"enter side : ";
    cin>>side;

    cout<<"area = "<<side*side<<endl;

    // area of triangle
    
    cout<<"enter base : ";
    cin>> base;


    cout<<"enter height : ";
    cin>> height;

    cout<<"area = "<<1*(base*height)/2<<endl;


    // area of circle
    cout<<"enter radius : ";
    cin>> radius;

    cout<<"area = "<<3.14*radius*radius<<endl;

    return 0;
}
