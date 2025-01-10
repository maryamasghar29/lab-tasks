#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    string adminEmail = "admin@987.com";
    string adminPassword = "admin987";
    string studentName;
    string cnic;
    string phoneNumber;
    float totalMarks = 500.0;
    short availableSeatProgram1 = 5;
    short availableSeatProgram2 = 4;
    float obtainedMarks;
    string program1 = "computer science";
    string program2 = "information technology";
    float minimumCriteriaProgram1 = 70.0;
    float minimumCriteriaProgram2 = 65.0;
    string foodItems[3] = {"Pizza", "Burger", "Pasta"};
    float foodPrices[3] = {1000.0, 500.0, 800.0};
    int foodStock[3] = {20, 30, 15};  

    int option;
    cout << "University Management System" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. Apply as a Student" << endl;
    cout << "3. Library Management System" << endl;
    cout << "4. Cafeteria Management System" << endl;
    cout << "5. Log Out" << endl;
    cout << "Enter your option (1, 2, 3, 4 or 5): ";
    cin >> option;

    // Admin workflow
    string adminClaimedEmail;
    string adminClaimedPassword;
    if (option == 1) {
        cout << "Enter admin claimed email: ";
        cin >> adminClaimedEmail;
        cout << "Enter admin claimed password: ";
        cin >> adminClaimedPassword;

        if (adminClaimedEmail == adminEmail && adminClaimedPassword == adminPassword) {
            cout << "Admin login successful" << endl;
        } else {
            cout << "Admin login failed" << endl;
        }
    } 
    // Student workflow
    else if (option == 2) {
        cout << "Enter your name: ";
        cin >> studentName;
        cout << "Enter your CNIC: ";
        cin >> cnic;
        cout << "Enter your phone number: ";
        cin >> phoneNumber;
        cout << "Enter your obtained marks: ";
        cin >> obtainedMarks;

        // Calculate student percentage
        float studentPercentage = (obtainedMarks / totalMarks) * 100;
        cout << "Your percentage is: " << studentPercentage << "%" << endl;
        cout << "Available programs are:" << endl;
        cout << "1. " << program1 << endl;
        cout << "2. " << program2 << endl;

        int choice;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        // Choose program
        if (choice == 1) {
            if (studentPercentage >= minimumCriteriaProgram1) {
                if (availableSeatProgram1 > 0) {
                    cout << "Congratulations, you got admission in " << program1 << "!" << endl;
                    availableSeatProgram1--; // Decrement seat count
                } else {
                    cout << "You are not selected because no seats are available for " << program1 << "." << endl;
                }
            } else {
                cout << "You did not get admission because you do not meet the criteria for " << program1 << "." << endl;
            }
        } else if (choice == 2) {
            if (studentPercentage >= minimumCriteriaProgram2) {
                if (availableSeatProgram2 > 0) {
                    cout << "Congratulations, you got admission in " << program2 << "!" << endl;
                    availableSeatProgram2--; // Decrement seat count
                } else {
                    cout << "You are not selected because no seats are available for " << program2 << "." << endl;
                }
            } else {
                cout << "You did not get admission because you do not meet the criteria for " << program2 << "." << endl;
            }
        } else {
            cout << "Invalid choice." << endl;
        }
    } 
    // Library workflow
    else if (option == 3) {
        int mathBookAvailable= 3;
        int biologyBookAvailable= 2;
        string book1 = "math ";
        string book2 = "biology";

        cout << "Welcome to the Library System!" << endl;
        cout << "1. Check Available Books" << endl;
        cout << "2. Reserve a Book" << endl;
        cout << "Enter your choice (1 or 2): ";
        int libraryChoice;
        cin >> libraryChoice;

        if (libraryChoice == 1) {
            // Display available books
            cout << "Available books are:" << endl;
            cout << "1. math Book " << endl;
            cout << "2. Biology Book " << endl;
        } 
        else if (libraryChoice == 2) {
            string bookName;
            cout << "Enter the name of the book you want to reserve: ";
            cin>>bookName;

            if (bookName == book1) {
                if (mathBookAvailable > 0) {
                    mathBookAvailable--; // Decrease book stock
                    cout << "Congratulations! You have successfully reserved the math book." << endl;
                } else {
                    cout << "Sorry, the  math Book is out of stock." << endl;
                }
            } else if (bookName == book2) {
                if (biologyBookAvailable > 0) {
                    biologyBookAvailable--; // Decrease book stock
                    cout << "Congratulations! You have successfully reserved the  biology Book ." << endl;
                } else {
                    cout << "Sorry, the biology book is out of stock." << endl;
                }
            } else {
                cout << "Invalid book name entered. Please choose from the available books." << endl;
            }
        } else {
            cout << "Invalid library option selected." << endl;
        }
    } 
    // cafeteria management system
     cout << "Welcome to the Cafeteria Management System!" << endl;
        cout << "1. View Food Menu" << endl;
        cout << "2. Order Food" << endl;
        int cafeteriaChoice;
        cout << "Enter your choice (1 or 2): ";
        cin >> cafeteriaChoice;

        if (cafeteriaChoice == 1) {
            // Display the food menu
             for (int i = 0; i < 3; i++) {
                cout << i + 1 << ". " << foodItems[i] << " Rs " << foodPrices[i] << " (Stock: " << foodStock[i] << " available)" << endl;
            }
        }else if (cafeteriaChoice == 2) {
            cout << "Food Menu:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << i + 1 << ". " << foodItems[i] << " Rs " << foodPrices[i] << " (Stock: " << foodStock[i] << " available)" << endl;
            }
            int foodChoice;
            cout << "Enter the number of the food item you want to order (1-3): ";
            cin >> foodChoice;


    if (foodChoice >= 1 && foodChoice <= 3) {
        if (foodStock>0) {
            cout << "You have successfully ordered  foodItems." << endl;
        } else {
            cout << "Sorry,  foodItems is out of stock." << endl;
        }
    } else {
        cout << "Invalid choice, please select a valid food item." << endl;
    }
    }
    else if (option == 5) {
        cout << "Logging out" << endl;
    } else {
        cout << "Invalid option. Please choose a valid number (1, 2, 3, ,4 or 5)." << endl;
    }

    return 0; 
}
