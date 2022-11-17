#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	if( n < 1)
	{
		cout << "N";
		return 0;
	}
	int i = 1, sum = 0;
	for(; i <= n; i++)
	{
		
		sum += i;
		if((sum + i + 1) >= n) 
			break;
	}
	cout << "Output: " << i;
	return 0;
}
