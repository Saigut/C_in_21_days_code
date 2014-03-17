#include <iostream>
using namespace std;

int main()
{
	int nbr, array[5] = {'\0', '\0', '\0', '\0', '\0'}, i = 0, a, b, c, d, e, first[5], second[5], third[5], forth[5], fifth[5];

	cout<<"please input a number more than 0 and less than 100000"<<endl;
	cin>>nbr;

	while (nbr != 0)
	{
		array[i++] = nbr % 10;
		nbr /= 10;
	}

	for (i = 0; i < 5; i++)
		first[i] =  10;
	a = 0;
	while (a < 5 )
	{
		if (a != first[0] && a != first[1] && a != first[2] && a != first[3] && a != first[4])
		{
			first[a] = a;
			for (i = 0; i < 5; i++)
				second[i] =  10;
			b = 0;
			while (b < 5)
			{
				if (b != a && b != second[0] && b != second[1] && b != second[2] && b != second[3] && b != second[4])
				{
					second[b] = b;
					for (i = 0; i < 5; i++)
						third[i] =  10;
					c = 0;
					while (c < 5)
					{
						if (c != a && c != b && c != third[0] && c != third[1] && c != third[2] && c != third[3] && c != third[4])
						{
							third[c] = c;
							for (i = 0; i < 5; i++)
								forth[i] =  10;
							d = 0;
							while (d < 5)
							{
								if (d != a && d != b && d != c && d != forth[0] && d != forth[1] && d != forth[2] && d != forth[3] && d != forth[4])
								{
									forth[d] =d;
									for (i = 0; i < 5; i++)
										fifth[i] =  10;
									e = 0;
									while (e < 5)
									{
										if (e != a && e != b && e != c && e != d && e != fifth[0] && e != fifth[1] && e != fifth[2] && e != fifth[3] && e != fifth[4])
										{
											fifth[e] = e;
											cout<<array[a]<<array[b]<<array[c]<<array[d]<<array[e]<<endl;
										}
										e++;
									}
								}
								d++;
							}
						}
						c++;
					}
				}
				b++;
			}
		}
		a++;
	}
}
