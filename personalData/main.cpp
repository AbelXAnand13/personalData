// Abel Anand

#include <iostream>
#include <string>
using namespace std;
struct personalData{
    string firstName;
    string middleName;
    string lastName;
    int age;
    long phoneNumber;
};


int main() {
    int yesorno;
    int change;
    bool quit = false;
    personalData user;
    cout << "Enter your first name\n";
    cin >> user.firstName;
    cout << "Do you have a middle name? \nyes(1)   no(2)\n";
    cin >> yesorno;
    switch(yesorno) {
        case 1:
            cout << "Enter your middle name\n";
            cin >> user.middleName;
            break;
        case 2:
            break;
        default:
            cout << "I'm going to assume that was a no\n";
            break;
    }
    cout << "Enter your last name\n";
    cin >> user.lastName;
    cout << "Enter your age\n";
    cin >> user.age;
    cout << "Enter your phone number\n";
    cin >> user.phoneNumber;
    cout << "1.First Name: " << user.firstName << "\n2.Middle Name: " << user.middleName << "\n3.Last Name: " << user.lastName << "\n4.Age: " << user.age << "\n5.Phone Number: " << user.phoneNumber << "\n";
    while (!quit) {
    cout << "Change data?\nyes(1)   no(2)\n";
    cin >> yesorno;
    switch (yesorno) {
        case 1:
            cout << "Enter the number beside the data you want to change\n";
            cin >> change;
            switch (change) {
                case 1:
                    cout << "Enter new first name\n";
                    cin >> user.firstName;
                    break;
                case 2:
                    cout << "Enter new middle name\n";
                    cin >> user.middleName;
                    break;
                case 3:
                    cout << "Enter new last name\n";
                    cin >> user.lastName;
                    break;
                case 4:
                    cout << "Enter new age\n";
                    cin >> user.age;
                    break;
                case 5:
                    cout << "Enter new Phone Number\n";
                    cin >> user.phoneNumber;
                    break;
                default:
                    cout << "try again";
                    break;
            }
            cout << "1.First Name: " << user.firstName << "\n2.Middle Name: " << user.middleName << "\n3.Last Name: " << user.lastName << "\n4.Age: " << user.age << "\n5.Phone Number: " << user.phoneNumber << "\n";
            break;
        case 2:
            cout << "Ok\nI will keep your data safe, I promise you\n";
            quit = true;
            break;
        default:
            cout << "You cant read directions\nI may spill ur data idk\n";
            quit = true;
            break;
    }
    }
}
