#include <iostream>
using namespace std;

int main()
{
	int i, j;
	i = 5;
	while (i > 0)
	{
		j = i--;

		while (j > 0)
		{
			cout<<j--;
		}

		cout<<endl;
	}
}
