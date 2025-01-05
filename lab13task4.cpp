#include <iostream>
using namespace std;

int main() {
    int  x; 
    int endNumber;
    // take a number from user as input
    cout << "Enter a number : ";
    cin >> x;
    cout<<"enter the end number"<<endl;
    cin>>endNumber;
    if (x>= 0) {
        // multiplication table
        for(int i =1; i<=endNumber; i++){
            cout << x << " x " << i << " = " << (x * i) << endl;
        }
    } else{
        cout<<"invalid input"<<endl;
    }

    return 0;
}