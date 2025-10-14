#include<iostream>
using namespace std;

int reverse(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int temp;
    while(start < end){
         temp = arr[start];
         arr[start] = arr[end];
         arr[end] = temp;
         start++; end--;
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {4,8,7,5,3,6,2,1,9};
    int size = 9;

    reverse(arr,size);

}