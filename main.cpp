#include "op.h" // header file
#include <string> // to use string variables
#include <iostream> // terminal input/output

int main()
{
    // Get first number
    int num1{ };
    num1 = getNum();

    // Ask user for operation
    std::cout << "Enter operation: \n";
    std::string op;
    std::cin >> op;


    // Get second number
    int num2{ };
    num2 = getNum();

    // if statments operator logic
    int result{ };
    if (op == "+")
    {
        result = add(num1, num2);
    }
    if (op == "-")
    {
        result = subtract(num1, num2);
    }
    if (op == "*")
    {
        result = multiply(num1, num2);
    }
    if (op == "/")
    {
        result = divide(num1, num2);
    }

    std::cout << num1 << op << num2 << " is " << result;

    
    return 0;
}