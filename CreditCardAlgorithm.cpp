#include <iostream>
#include <locale.h>
using namespace std;

#define CC_COUT 16

bool creditCardState() {
	int cc_nums[CC_COUT]{5,5,4,9,6,0,0,2,1,2,2,1,8,0,3,0};
	int count = 0;
	for(int i = 0; i < CC_COUT; i+=2){
		cc_nums[i] = cc_nums[i] * 2;
		if (cc_nums[i] > 9){
			cc_nums[i] = cc_nums[i] % 10 + cc_nums[i] / 10;
		}
	}
	for(int j = 0; j < CC_COUT; j ++){
		count += cc_nums[j];
	}
	if (count % 10 == 0) {
		return true;
	}
	else{
		return false;
	}
}

int main(){
	setlocale(LC_ALL, "Turkish");
	if (creditCardState()){
		cout << "Kredi Kartı Numaranız Geçerli";
	}
	else{
		cout << "Kredi Kartı Numaranız Geçersiz";
	}
	cin.get();
	return 0;
}