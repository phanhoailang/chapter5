#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	do {
		cout << "Enter number greater than 0: ";
		cin >> n;
		if(n < 0)
		{
			cout << "Number must be greater than 0. Try again.\n";
		}
	}while(n <0);
	if( n == 0) {
		cout << "N";
		return 0;
	}
	for(int i = n / 2; i > 0; i--)
	{
		if(n % i == 0 && i % 2 != 0) {
			cout << "\nLargest odd divisor of " << n << " is " << i;
			return 0;
		}
	}
	
	return 0;
}
