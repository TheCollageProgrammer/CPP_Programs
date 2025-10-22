#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
    int values[]   = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string roman = "";
    
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            num -= values[i];
            roman += symbols[i];
        }
    }
    
    return roman;
}

int main() {
    int num;
    cout << "Enter an integer (1–3999): ";
    cin >> num;
    
    if (num < 1 || num > 3999) {
        cout << "Number out of range!" << endl;
        return 0;
    }
    
    cout << "Roman Numeral: " << intToRoman(num) << endl;
    return 0;
}
