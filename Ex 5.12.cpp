#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	int num1  = 0, num2 = 1;
	cout << num1 << " " << num2;
	while(true) {
		int temp = num2;
		num2 += num1;
		num1 = temp;
		if(num2 > n)
			break;
		cout << " " << num2;
	}
	return 0;
}
