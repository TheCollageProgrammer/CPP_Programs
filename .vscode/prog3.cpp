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
    if (a < b and a < c){
        cout<<"A is smaller";
    }
    else if (b < a and b < c){
        cout<<"b is smaller";
    }
    else {
        cout<<"c is smaller";
    }    
return 0;
}