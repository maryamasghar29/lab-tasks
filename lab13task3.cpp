#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
   
    srand(time(0));
    int random_number = 1 + (rand() % 100);
    int guessed_number;
    cout << "enter your number" << endl;
    cin>>random_number;
    while (true) {
        cout<<"enter your guess number"<<endl;
        cin >> guessed_number;

        if (random_number == guessed_number) {
            cout << "Congratulations! You guessed the correct number"<<endl;
            break;
        } else if (guessed_number > random_number) {
            cout << "Your guess is too high.\n";
        } else {
            cout << "Your guess is too low.\n";
        }
    }

    return 0;
}
