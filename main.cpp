# include <iostream> 
# include <cmath>

int addition () {
    int num1, num2, result;

    std::cout << "Enter the first number" << '\n';
    std::cin >> num1;
    
    std::cout << "Enter the second number" << '\n';
    std::cin >> num2;

    result = num1 + num2;
    std::cout << "The sum of the two numbers is " << result << '\n';
}

int subtraction () {
    int num1, num2, result;

    std::cout << "Enter the first number" << '\n';
    std::cin >> num1;
    
    std::cout << "Enter the second number" << '\n';
    std::cin >> num2;

    result = num1 - num2;
    std::cout << "The difference of the two numbers is " << result << '\n';
}

int multiplication () {
    int num1, num2, result;

    std::cout << "Enter the first number" << '\n';
    std::cin >> num1;
    
    std::cout << "Enter the second number" << '\n';
    std::cin >> num2;

    result = num1 * num2;
    std::cout << "The product of the two numbers is " << result << '\n';
}

int division () {
    double num1, num2, result, rem;

    std::cout << "Enter the first number" << '\n';
    std::cin >> num1;
    
    std::cout << "Enter the second number" << '\n';
    std::cin >> num2;

    result = num1 / num2;
    std::cout << "The quotient of the two numbers is " << result << '\n';

    std::cout << "The remainder is " << remainder(num1, num2);
}

int factorial(){
    int n;
    long factorial = 1.0;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0)
        std::cout << "Error! Factorial of a negative number doesn't exist.";
    
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " = " << factorial;    
    }
}

double exponent() {
    double num1, num2, result;

    std::cout << "Enter the number" << '\n';
    std::cin >> num1;
    
    std::cout << "Enter the exponent's value" << '\n';
    std::cin >> num2;

    result = pow(num1,num2);
    std::cout << "The result of the exponent is " << result << '\n';

}

double sqrt() {
    double num1, result;

    std::cout << "Enter the value of number whose root is required\n";
    std::cin >> num1;

    result = sqrt(num1);
    std::cout << "The square root of " << num1 << " is " << result << '\n';
}

int absolute() {
    int num1, num2, result;

    std::cout << "Enter the value of the number whose absolute is required \n";
    std::cin >> num1;

    result = abs(num1);
    std::cout << "The absolute value of " << num1 << " is " << result << '\n';

}

int main() {
    char operation;
    double num1, num2, result, remainder; 

    std::cout << "Enter the arithmetic operator (+ or - or * or / or ! or ^ or ` or |)" << '\n';
    std::cin >> operation;

    switch(operation) {
        case '+':
            addition();
            break;
        
        case '-':
            subtraction();
            break;
        
        case '*':
            multiplication();
            break;

        case '/':
            division();
            break;

        case '!':
            factorial();
            break;

        case '^':
            exponent();
            break;
        
        case '`':
            sqrt();
            break;

        case '|':
            absolute();
            break;

        default:
            std::cout << "Please enter correct operations";
    }

    return 0;
}