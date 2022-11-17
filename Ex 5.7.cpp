#include <iostream> 
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter number: ";
	cin >> n;
	for(int i = 2; i <= n; i += 2) {
		sum+= i;
		
	}
	cout << "Sum evens = " << sum;
	return 0;
}
