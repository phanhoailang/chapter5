#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	int temp1 = n, temp2 = n;
	
	int dem = 0;
	while(temp1 > 0) {
		dem++;
		temp1 /= 10;
	}
	int newNum = 0;
	while(temp2 > 0)
	{
		newNum += (temp2 % 10) * pow(10, (double)(dem-1));
		dem--;
		temp2 /= 10;
	}
	while(newNum > 0) {
		int sub = newNum % 10;
		switch(sub) {
			case 1: cout << "One "; break;
			case 2: cout << "Two "; break;
			case 3: cout << "Three "; break;
			case 4: cout << "Four "; break;
			case 5: cout << "Five "; break;
			case 6: cout << "Six "; break;
			case 7: cout << "Seven "; break;
			case 8: cout << "Eight "; break;
			case 9: cout << "Nine "; break;
			default: cout << "Zero ";
		}
		newNum /= 10;
	}
	if(n % 10 == 0)
		cout << "Zero ";
	return 0;
}
