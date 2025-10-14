#include<iostream>
using namespace std;

int findTarget(int arr[],int b,int c){
    for(int i = 0; i < c; i++){
        if(arr[i] == b){ 
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,7,5,4,8,9,6,3,4,8};
    int target = 3;
    int size = 10;

    int b = findTarget(arr, target, size);
    cout << b;
}