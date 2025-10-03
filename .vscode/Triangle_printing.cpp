#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 1;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     //a++;
    //     cout<<endl;
    // }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         if((i+j) % 2 == 0 ) cout<<"1 ";
    //         else cout<<"0 ";
    //     }
    //     //a++;
    //     cout<<endl;
    // }

    int mid = n/2 + 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == mid or j == mid ){
                cout<<"* ";
            } else {
                cout<<"  ";
            }
    }
    cout<<endl;
    }

return 0;
}
