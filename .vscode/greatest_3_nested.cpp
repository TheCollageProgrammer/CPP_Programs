#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter no. 1 : ";
    cin>>a;
    cout<<"Enter no. 2 : ";
    cin>>b;
    cout<<"Enter no. 3 : ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else {
            cout<<c<<" is greatest";
        }
    }
    else {
        if (b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
}