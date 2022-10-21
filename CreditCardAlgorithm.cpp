#include <iostream>
#include <locale.h>
using namespace std;

#define CC_COUNT 16

bool creditCardState() {
	int cc_nums[CC_COUT]{4,4,2,6,7,1,0,0,3,5,8,1,6,1,8,2};
	int count = 0;
	for(int i = 0; i < CC_COUNT; i+=2){
		cc_nums[i] = cc_nums[i] * 2;
		if (cc_nums[i] > 9){
			cc_nums[i] = cc_nums[i] % 10 + cc_nums[i] / 10;
		}
	}
	for(int j = 0; j < CC_COUNT; j ++){
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
