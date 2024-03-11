#include <iostream>
#include <cmath>
using namespace std;
int soNT(int n) {
	if (n < 2) {
		return 0;
	}
	int i;
	int canbac2 = (int)sqrt(n);
	for (i = 2; i <= canbac2; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int i, n;
	cout << "nhap n = "; cin >> n;
	
	if (n >= 2) {
		cout << "Tat ca so nguyen to nho hon " << n << " la: 2 ";
	}
	for (i = 3; i < n; i += 2) {
		if (soNT(i) == 1) {
			cout << i << " ";
		}
	}
}
