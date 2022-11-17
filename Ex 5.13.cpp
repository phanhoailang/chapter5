#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cout << "Enter length: ";
	cin >> m;
	cout << "Enter height: ";
	cin >> n;
	if(m <= 0 || n <=0 )
	{
		cout << "Side must be greater than 0. ";
		return 0;
	}
	cout << "Result: \n";
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}
