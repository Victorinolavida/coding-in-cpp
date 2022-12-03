#include <iostream>



int main(){
	int sum = 0;
	int iterateValue = 50;

	while(iterateValue<=100){
		sum += iterateValue;
		iterateValue ++;
	}

	std:: cout << "the sum of 50 to 100 is ";
	std::cout << sum ;
	std::cout << std::endl;
	return 0;
}
