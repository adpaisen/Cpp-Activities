#include <iostream>

using namespace std;

double pesoToDollar(double peso) {
    return peso / 58.0;
}

double dollarToPeso(double dollar) {
    return dollar * 58.0;
}

double pesoToEuro(double peso) {
    return peso / 63.0;
}

double euroToPeso(double euro) {
    return euro * 63.0;
}

double dollarToEuro(double dollar) {
    return dollar * 0.92;
}

double euroToDollar(double euro) {
    return euro * 1.09;
}

int main() {

    int choice;
    double amount;

    cout << "=== Money Converter ===" << endl;

    cout << "\n1. Philippine Peso (PHP) to US Dollar (USD)";
    cout << "\n2. US Dollar (USD) to Philippine Peso (PHP)";
    cout << "\n3. Philippine Peso (PHP) to Euro (EUR)";
    cout << "\n4. Euro (EUR) to Philippine Peso (PHP)";
    cout << "\n5. US Dollar (USD) to Euro (EUR)";
    cout << "\n6. Euro (EUR) to US Dollar (USD)";

    cout << "\n\nChoose conversion: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    switch(choice) {

        case 1:
            cout << "Result: $" << pesoToDollar(amount);
            break;

        case 2:
            cout << "Result: ₱" << dollarToPeso(amount);
            break;

        case 3:
            cout << "Result: €" << pesoToEuro(amount);
            break;

        case 4:
            cout << "Result: ₱" << euroToPeso(amount);
            break;

        case 5:
            cout << "Result: €" << dollarToEuro(amount);
            break;

        case 6:
            cout << "Result: $" << euroToDollar(amount);
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
