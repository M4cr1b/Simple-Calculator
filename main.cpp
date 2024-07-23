#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    double add, sub, mult, div, exp, mod;
    string operation;

    cout<< "Enter the first number: ";
    cin>> num1;
    cout<< "Enter the second number: ";
    cin>> num2;

    cout<< "Arithmetic Operations:"<<endl;
    cout<< "1. Addition"<<endl;
    cout<< "2. Subtraction"<<endl;
    cout<< "3. Multiplication"<<endl;
    cout<< "4. Division"<<endl;
    cout<< "5. Exponent"<<endl;
    cout<< "6. Modulus"<<endl;

    cout<< "Enter the arithmetic operation: ";
    cin>> operation;

    if(operation == "Addition" || operation == "1"){
        add = num1 + num2;
        cout<< "The sum of the two numbers is "<<add<<endl;
    }else if (operation == "Subtraction" || operation == "2"){
        sub = num1 - num2;
        cout<< "The difference between the two numbers is "<<sub<<endl;
    }else if (operation == "Multiplication" || operation == "3"){
        mult = num1 * num2;
        cout<< "The product of the two numbers is "<<mult<<endl;
    }else if (operation == "Division" || operation == "4"){
        div = num1 / num2;
        cout<< "The division of the two numbers is "<<div<<endl;
    }else if (operation == "Exponent" || operation == "5"){
        exp = num1 ^ num2;
        cout<< "The exponent of the first number against the second number is "<<div<<endl;
    }else if (operation == "Modulus" || operation == "6"){
        exp = num1 % num2;
        cout<< "The modulus of the first number against the second number is "<<mod<<endl;
    }else { cout<< "Invalid operation chosen!!";}
    return 0;
}
