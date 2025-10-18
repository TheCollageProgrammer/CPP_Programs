#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int ncr(int m, int n){
    int a = fact(m);
    int b = fact(n);
    int c = fact(m-n);
    return a/(b*c);
}

int main(){

    int n;
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(i != n){
                continue;
            } else {
            cout<<ncr(i,j)<<" ";
            }
        }
    }

}
