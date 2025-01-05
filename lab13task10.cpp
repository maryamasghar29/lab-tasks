#include <iostream>
using namespace std;

int main() {
    int number, digit;
    int totalDigits = 0, evenCount = 0, oddCount = 0;
    cout << "Enter a number: ";
    cin >> number;
    int temp = number;
    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        totalDigits++;      
        temp /= 10;         
    }
    cout << "Total: " << totalDigits << endl;
    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;

    return 0;
}
