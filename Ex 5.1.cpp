#include <iostream>
using namespace std;
int main() 
{
	int n, sum = 0;
	cout << "Enter number: ";
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		sum += i;	
	}
	cout << "\n The sum from 1 to n is: " << sum << endl;
	return 0;
}
