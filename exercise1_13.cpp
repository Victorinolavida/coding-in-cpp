#include <iostream>


int main(){

	int sum = 0;

	for(int val = 0; val <= 10;++val){
			sum += val;
	}

	std::cout << "Result is: " << sum << std::endl;

	return 0;
}
