#include <iostream>
#include <cstdlib>
#include <time.h>
#include <locale.h>
#include <fmt/core.h>

using namespace std;

void histogram(int*);
void banner();

int main() {
	banner();
}

void banner() {
	setlocale(LC_ALL, "Turkish");
	const int arr_size = 6;

	cout << fmt::format("Dizi Boyutu {}\n\n",arr_size);
	cout << "Indis \t Dizi Elemanı \t Histogram\n";

	int myArr[arr_size]{};
	histogram(myArr);
}

void histogram(int* arr) {
	srand((unsigned int)time(0));
	for(int i = 0; i < 6; i++){
		arr[i] = rand() % 30;
		cout << fmt::format(" {0}\t  {1}\t\t ", i, arr[i]);
		for(int j = 0; j < arr[i]; j++){
			cout << "*";
		}
		cout << "\n";
	}

}


/* -> ekran çıktısı

Dizi Boyutu 6

Indis    Dizi Elemanı    Histogram
 0        4              ****
 1        16             ****************
 2        13             *************
 3        10             **********
 4        29             *****************************
 5        6              ******
*/
