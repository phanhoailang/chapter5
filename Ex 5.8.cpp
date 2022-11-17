#include <iostream>
using namespace std;
int main () {
	int n, product = 1;
	int temp = product;
	cout << " Enter number n: ";
	cin >> n;
	while(n > 0) {
		product *= n % 10;
		n /= 10;
	}
	
	cout << " Product digits of " << temp << " is: " << product;
	return 0;
}
