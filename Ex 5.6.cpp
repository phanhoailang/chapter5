// Write a program to input a natural number n and display to the screen natural numbers from n to 1. Numbers are separated by a space

#include <iostream>
using namespace std;
int main() 
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	if(n < 1) {
		for(int i = n; i <= 1; i++)
		{
			cout << i << " ";
		}
	}
	else {
		for(int i = n; i>= 1; i--) 
		{
			cout << i << " ";
		}
	}
	return 0;
}
