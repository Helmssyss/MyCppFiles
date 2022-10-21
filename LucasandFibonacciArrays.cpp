#include <iostream>

int main() {
	int fibo[13]{},lucas[13]{};
	fibo[0] = 0; fibo[1] = 1;
	lucas[0] = 2; lucas[1] = 1;

	for (int i = 2; i < 13; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		lucas[i] = lucas[i - 1] + lucas[i - 2];
	}
	std::cout << "Fibonacci Dizisi..." << std::endl;
	for(int j = 0; j < 13; j++){
		std::cout << fibo[j]<<' ';
	}
	std::cout << "\n\nLucas Dizisi..." << std::endl;
	for (int k = 0; k < 13; k++){
		std::cout << lucas[k] << ' ';
	}
}