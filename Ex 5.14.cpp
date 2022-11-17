#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	char choose = 'k';
	while(true)
	{
		cout << "\n\n";
		cout << "***************** MENU ********************\n";
		cout << "*   1. Armstrong.                         *\n";
		cout << "*   2. Prime.                             *\n";
		cout << "*   3. Finish.                            *\n";
		cout << "*******************************************\n";
		int choice;
		cout << "Choose (1, 2, 3): ";
		cin >> choice;
		if(choice != 1 && choice != 2)
		{
			cout << "Do you want to finish (c/k)? : ";
			cin >> choose;
			if(choose == 'c')
			{
				cout << "\nThank You <3";
				return 0;
			}
		}
		
		if(choice == 1)
		{
			int n;
			cout << "Enter your number: ";
			cin >> n;
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
			if(n == newNum)
			{
				cout << "\n" << n << " is Armstrong number.";
			}
			else
				cout << "\n" << n << " is not Armstrong number.";
		}
		if(choice  == 2)
		{
			int n;
			cout << "Enter your number: ";
			cin >> n;
			int count = 0;
			for(int i = 2; i <= sqrt((double)n); i++)
			{
				if(n % i == 0)
				{
					count++;
				}
			}
			if(count == 0 && n > 1)
				cout << "\n" << n << " is Prime.";
			else
				cout << "\n" << n << " is not Prime.";
		}
	}
	return 0;
}
