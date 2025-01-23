#include <iostream>#include <iostream>
#include <iomanip>
#include <string>
 using namespace std;

int main() {
    /*string name;
    int age;

    // Prompt user for  name
    cout << "Enter your name: ";
    cin>> name ;
    cout << "Your name is " <<name << "\n";


    // Prompt user for age
    cout << "Enter your age: ";
    cin >> age;

    // Display the message
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;*/
// For std::setw// problem2

        /*for (int i = 1; i <= 5; i=i+1) {
            cout << setw(5) << i << "\n";
        }
        return 0;*/
    /*int num1, num2;

    // Taking input for two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;


    int temp = num1;
    num1 = num2;
    num2 = temp;


    cout << "After swapping:" << endl;
    cout << "First integer: " << num1 << endl;
    cout << "Second integer: " << num2 << endl;

    return 0;2*/
    /*int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << std::setw(10) << "Number" << std::setw(15) << "Square" << std::endl;
    cout << "-------------------------------" << std::endl;


    for (int i = 1; i <= n; ++i) {
        cout << std::setw(10) << i << std::setw(15) << i * i << std::endl;
    }*/
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<setw((50-s.length())/2)<<s<<setw((50-s.length())/2);



    return 0;


}
