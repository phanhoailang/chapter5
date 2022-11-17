#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int n, result = 0;
	cout << "Enter number: ";
	cin >> n;
	if(n <= 0) {
		cout << "Error. Number in 1..n!!!";
		return 0;
	}
	
	for(int i = 1; i <= n; i++) {
		result += pow(i, 2);
	}
	cout << "\n Result is: " << result;
	return 0;
}
