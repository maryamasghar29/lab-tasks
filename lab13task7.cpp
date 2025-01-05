#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    // take a  number from user as input
    cout << "Enter a number (n): ";
    cin >> n;
    if (n >= 0) {
        cout << "Numbers divisible by 3: "<<endl;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {   // Check if the number is divisible by 3
            cout << i << " "<<endl;
            count++;          
        }
    }

    }
    cout << "the count number is = " << count << endl;

    return 0;
}