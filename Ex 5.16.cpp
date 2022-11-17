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
	int temp1 = n, temp2 = n;
	int dem = 0;
	while(temp1 > 0)
	{
		dem++;
			temp1 /= 10;
	}
	int newNum = 0;
	while(temp2 > 0) 
	{
		newNum += (temp2 % 10) * pow(10.0, --dem);
		temp2 /= 10;
	}
	while(newNum > 0)
	{
		if((newNum % 10) % 2 != 0)
		{
			cout << newNum % 10;
		}
		newNum /= 10;
	}
	return 0;
}
