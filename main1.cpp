#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (isalpha(a))
	{
		cout << "no" << endl;
	}
	else {
		cout << "yes" << endl;
	}
  	return 0;
}