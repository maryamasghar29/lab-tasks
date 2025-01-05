#include <iostream>
using namespace std;

int main() {
    int number, largest;
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> number;
        if (i == 0) {
            largest = number;
        } else if (number > largest) {
            largest = number;
        }
    }

    cout << "the Largest number is " << largest  << endl;

    return 0;
}
