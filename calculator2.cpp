#include "calculator.h"
#include <iostream>

double Calculator::Mult (double a, double b)
{
	return a * b;
}

double Calculator::Div (double a, double b)
{
	if (b != 0){
		return a / b;
	} else {
		std::cout << "Warning: Division by zero!\n";
		return 0;
	}
}

int main(){
	Calculator calculator;
	
	int addition_result = calculator.Add(3, 5);
	std::cout << "Result of addition: " << addition_result << std::endl;
	
	int subtraction_result = calculator.Sub(5, 3);
	std::cout << "Result of subtraction: " << subtraction_result << std::endl;

	double multiplication_result = calculator.Mult(3, 5);
	std::cout << "Result of multiplication: " << multiplication_result << std::endl;

	double division_result = calculator.Div(5, 3);
	std::cout << "Result of division: " << division_result << std::endl;
	return 0;
}
