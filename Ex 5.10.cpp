#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m, n;
	cout << "Enter start number: ";
	cin >> m;
	cout << "Enter end number: ";
	cin >> n;
	for(int i = m; i <= n; i++)
	{
		int temp1 = i, temp2 = i;
		int dem = 0;
		while(temp1 > 0) {
			dem++;
			temp1 /= 10;
		}
		int sum = 0;
		while(temp2 > 0) {
			sum += pow((temp2 % 10), (double)dem);
			temp2 /= 10;
		}
		if(sum == i)
			cout << i << " ";
	}
	
	return 0;
}
