#include <iostream>
using namespace std;
int main() {
	int n,k,mnt;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x%10 == k)
		{
			mnt += x;
		}
	}
	cout << mnt;
  	return 0;
}