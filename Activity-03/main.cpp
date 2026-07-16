#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

int main() {

    int choice;
    double temperature;

    cout << "=== Temperature Converter ===" << endl;

    cout << "\n1. Celsius to Fahrenheit";
    cout << "\n2. Fahrenheit to Celsius";
    cout << "\n3. Celsius to Kelvin";
    cout << "\n4. Kelvin to Celsius";

    cout << "\n\nChoose conversion: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    switch(choice) {

        case 1:
            cout << "Result: "
                 << celsiusToFahrenheit(temperature)
                 << " Fahrenheit";
            break;

        case 2:
            cout << "Result: "
                 << fahrenheitToCelsius(temperature)
                 << " Celsius";
            break;

        case 3:
            cout << "Result: "
                 << celsiusToKelvin(temperature)
                 << " Kelvin";
            break;

        case 4:
            cout << "Result: "
                 << kelvinToCelsius(temperature)
                 << " Celsius";
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
