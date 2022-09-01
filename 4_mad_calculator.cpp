#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    //set variables
    string op;
    double num1, num2, rng1, rng2;

    //initiate rng
    srand (time(NULL));

    //set rng1 (calculation) between 1 and 1000
    rng1 = rand() % 1000 + 1;

    //set rng2 (operator) between 1 and 4
    rng2 = rand() % 4 + 1;

    //choose an operator
    cout << "Select one of these:" << setw(5)
         << "+" << setw(5) << "-" << setw(5)
         << "*" << setw(5) << "/" << endl;
    cin >> op;
    cout << endl;

    //for addition
    if (op == "+") {
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;
        
        //rng2 1
        if (rng2 == 1) {
            cout << num1 << " + " << num2 
                 << " = " << num1 - num2 + rng1
                 << endl << endl;
        }
        //rng2 2
        else if (rng2 == 2) {
            cout << num1 << " + " << num2
                 << " = " << num1 + num2 - rng1
                 << endl << endl;
        }
        //rng2 3
        else if (rng2 == 3) {
            cout << num1 << " + " << num2
                 << " = " << num1 * num2 / rng1
                 << endl << endl;
        }
        //rng2 4
        else if (rng2 == 4) {
            cout << num1 << " + " << num2
                 << " = " << num1 / num2 * rng1
                 << endl << endl;
        }
    }

    //for subtraction
    else if (op == "-") {
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        //rng2 1
        if (rng2 == 1) {
            cout << num1 << " - " << num2
                 << " = " << num1 - num2 + rng1
                 << endl << endl;
        }
        //rng2 2
        else if (rng2 == 2) {
            cout << num1 << " - " << num2
                 << " = " << num1 + num2 - rng1
                 << endl << endl;
        }
        //rng2 3
        else if (rng2 == 3) {
            cout << num1 << " - " << num2
                 << " = " << num1 * num2 / rng1
                 << endl << endl;
        }
        //rng2 4
        else if (rng2 == 4) {
            cout << num1 << " - " << num2
                 << " = " << num1 / num2 * rng1
                 << endl << endl;
        }
    }
    
    //for multiplication
    else if (op == "*") {
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        //rng2 1
        if (rng2 == 1) {
            cout << num1 << " * " << num2
                 << " = " << num1 - num2 + rng1
                 << endl << endl;
        }
        //rng2 2
        else if (rng2 == 2) {
            cout << num1 << " * " << num2
                 << " = " << num1 + num2 - rng1
                 << endl << endl;
        }
        //rng2 3
        else if (rng2 == 3) {
            cout << num1 << " * " << num2
                 << " = " << num1 * num2 / rng1
                 << endl << endl;
        }
        //rng2 4
        else if (rng2 == 4) {
            cout << num1 << " * " << num2
                 << " = " << num1 / num2 * rng1
                 << endl << endl;
        }
    }

    //for division
    else if (op == "/") {
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        //rng2 1
        if (rng2 == 1) {
            cout << num1 << " / " << num2
                 << " = " << num1 - num2 + rng1
                 << endl << endl;
        }
        //rng2 2
        else if (rng2 == 2) {
            cout << num1 << " / " << num2
                 << " = " << num1 + num2 - rng1
                 << endl << endl;
        }
        //rng2 3
        else if (rng2 == 3) {
            cout << num1 << " / " << num2
                 << " = " << num1 * num2 / rng1
                 << endl << endl;
        }
        //rng2 4
        else if (rng2 == 4) {
            cout << num1 << " / " << num2
                 << " = " << num1 / num2 * rng1
                 << endl << endl;
        }
    }

    //incorrect input
    else {
        cout << "Man... What is wrong with you?\n"
             << "Cant even follow a simple direction.\n"
             << "I'm disappointed.\n\n";
        return main();
    }

    //return to main loop
    return main();
}