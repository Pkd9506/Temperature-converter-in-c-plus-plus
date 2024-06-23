# include <iostream> 

int main() {
    int choice;
    char lavel,  y, n;
    double temperature, celsius, farhenheit, kelvin;

    std::cout << "\nTemperature converter program \n";
    std::cout << "1. Celsius to Farhenheit \n2. Celsius to Kelvin\n3. Farhenheit to Celsius\n4. Farhenheit to Kelvin\n5. Kelvin to Celsius\n6. Kelvin to Farhenheit\n\n";
    std::cout << "Enter you choice in terms of 1, 2, 3, 4, 5 or 6\n";
    std::cin >> choice;
    
    if(choice == 1) {
        std::cout << "Enter the temperature\n";
        std::cin >> celsius;

        farhenheit = celsius * 1.8 + 32;
        std::cout << "The temperature in farhenheit is " << farhenheit << '\n';
    }
    else if (choice == 2) {
        std::cout << "Enter the temperature\n";
        std::cin >> celsius;

        kelvin = celsius + 273.15;
        std::cout << "The temperature in kelvin is " << kelvin << '\n';
    }
    else if(choice == 3) {
        std::cout << "Enter the temperature\n";
        std::cin >> farhenheit;

        celsius = (farhenheit - 32) * 0.56;
        std::cout << "The temperature in celsius is " << celsius << '\n';
    }
    else if (choice == 4) {
        std::cout << "Enter the temperature\n";
        std::cin >> farhenheit;

        celsius = (farhenheit - 32) * 0.56;
        kelvin = celsius + 273.15;

        std::cout << "The temperature in kelvin is " << kelvin << '\n';
    }
    else if (choice == 5) {
        std::cout << "Enter the temperature\n";
        std::cin >> kelvin;

        celsius = kelvin - 273.15;
        std::cout << "The temperature in celsius is " << celsius << '\n';
    }
    else if (choice == 6) {
        std::cout << "Enter the temperature\n";
        std::cin >> kelvin;

        farhenheit = (kelvin - 273.15) * 1.8 + 32;
        std::cout << "The temperature in farhenheit is " << farhenheit << '\n';
    }

    else {
        std::cout << "Invalid choice\n";
    }    
       
    std::cout << "Do you want to begin with a new conversion? Reply with a yes (Y) or no (N) \n";
    std::cin >> lavel;

        switch(lavel) {
            case 'Y': 
                main();
                break;

            case 'N':
                std::cout << "Thank you for using\n";
                break;

            default:
                std::cout << "Please enter a valid choice\n";
                break;
        }

return 0;
}
