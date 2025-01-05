#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >>b;
    // Calculate the midpoint
    float midPoint = (a + b) / 2.0;
    for (int i = a; i <= b; i++) {
        cout << "Number " << i << " is ";
        if (i > midPoint) {
            cout << "greater than the midpoint." << endl;
        } else if (i < midPoint) {
            cout << "less than the midpoint." << endl;
        } else {
            cout << "equal to the midpoint." << endl;
        }
    }

    return 0;
}
