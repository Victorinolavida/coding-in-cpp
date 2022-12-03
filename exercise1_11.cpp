#include <iostream>


int main(){

	int number1, number2;
	int value=0;
	
	std::cout << "Input two numbers: " << std::endl;

	std::cin >> number1 >> number2;

	int range = number1 - number2;

	std:: cout << "Printing range of the rest of the two numbers: " << std::endl;
	while(value<= range){
	
		std::cout << value << std::endl;

		value++;	

	}

	return 0;
}
