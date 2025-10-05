#include<iostream>
using namespace std;
int romanToInt(string s){
    long d = 0;
    for(int i = 0; i < s.length(); i++){
                if (s[i] == 'C') {
            if (s[i+1] == 'M') { d += 900; i++; }
            else if (s[i+1] == 'D') { d += 400; i++; }
            else d += 100;
        }
        else if (s[i] == 'X') {
            if (s[i+1] == 'C') { d += 90; i++; }
            else if (s[i+1] == 'L') { d += 40; i++; }
            else d += 10;
        }
        else if (s[i] == 'I') {
            if (s[i+1] == 'X') { d += 9; i++; }
            else if (s[i+1] == 'V') { d += 4; i++; }
            else d += 1;
        }
        else if (s[i] == 'M') d += 1000;
        else if (s[i] == 'D') d += 500;
        else if (s[i] == 'L') d += 50;
        else if (s[i] == 'V') d += 5;
    }
    return d;
}
int main(){
    cout << romanToInt("MCMXCIV");
}