
#include <bits/stdc++.h>
using namespace std;


class sumOFdigit {
public:
	int getSum(int n)
	{
		int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}
};

// Driver code
int main()
{
	sumOFdigit g;
	int n = 687;

	// Function call
	cout << g.getSum(n);
	return 0;
}

