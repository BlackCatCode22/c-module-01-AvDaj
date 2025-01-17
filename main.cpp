#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Hello, World!" << endl;

    // Get an int from the user
    int number;
    int num1;
    int sum = 0;

    cout << "Type any number" << endl;
    cin >> number;

    // Doubling the number
    number = number * 2;

    cout << "The double number is: " << number << endl;

    // Tripling the number
    number = number * 3;

    cout << "The triple number is: " << number << endl;

    // Sum of 2 ints
    cout << "Enter two number with a space in between them." << endl;
    cin >> number >> num1;

    sum = number + num1;

    cout << "The sum of your two number is: " << sum << endl;

    // Simple Greeting
    string name;

    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Hello, " << name << ". How was your day today?!" << endl;

    return 0;
}
