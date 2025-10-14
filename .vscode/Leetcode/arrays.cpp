#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1,7,84,5,3,0,25,-24,98,14,11,34,-15,24,06};
    int size = 15;
    int smallest = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "smallest num is : " << smallest;
    return 0;
}