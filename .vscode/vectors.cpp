#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
  
    // cout << numbers[0]; 
    
    for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
}

}