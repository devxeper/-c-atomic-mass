#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

int main (){

    // default variables

    int element;
    int volume;     
    double pressure;
    int temperature;
    double density;
    int kelvin;
    const double R = 0.0821;
    std::string useraction;

    // user actions

    cout << "Welcome to Atomic Mass Calculator\nEnter an element and the item's dimensions to calculate/\n";
    sleep(2);
    cout << "Enter the elemnet the item is made out of (Enter As PTE Number): \n";
    cin >> element;

    // element switch case
    // PV = nRT

    switch (element) {
        case 1:{
            cout << "You picked the element Hydrogen. (press Y to confirm | press N to exit): \n";
            cin >> useraction;
            if (useraction == "Y"){
                cout << "Hydrogen → 1.0078u [Atomic Mass]\n";
                sleep(2);
                cout << "Enter the temperature in Celsius → Room  \n";
                cin >> temperature;
                double temperature_in_kelvin = temperature += 273.15; // Celsius to Kelvin
                sleep(2);
                cout << "Enter the pressure in bara → Room \n";
                cin >> pressure;
                sleep(2);
                double volume;
                double n = (pressure * 2.016) / 0.08314472 / temperature_in_kelvin;

                cout << "Density of the item is: " << density << "g/L\n";
                
                

            }
            else {
                cout << "Code finished w/ Return Code 1.01\n";
                sleep(1);
                return 0;

        case 2:{
            cout << "You picked the element Helium. (press Y to confirm | press N to exit): \n";
            cin >> useraction;
            if (useraction == "Y"){
                cout << "Helium → 4.0026u [Atomic Mass]\n";
                sleep(2);
                cout << "Enter the temperature in Celsius → Room\n";
                cin >> temperature;
                double temperature
            }
        }

            default: 
                cout << "Element not supported yet. \n Exiting...";
                break;

            }
        }

    }

}
