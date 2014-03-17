#include <iostream>
using namespace std;

int main()
{
	int nbr, i = 1, a, b, c, d, e, first[5], second[5], third[5], forth[5], fifth[5];
	int array[6] = {11, 10, 10, 10, 10, 10}; 

	cout<<"please input a number more than 0 and less than 100000"<<endl;
	cin>>nbr;

	while (nbr != 0)
	{
		array[i++] = nbr % 10;
		nbr /= 10;
	}

	for (i=0;i<6;i++)
		cout<<array[i]<<endl;
	for (i = 0; i < 5; i++)
		first[i] =  10;
	a = 1;
	while (a < 6)
	{
		if (a != first[0] && a != first[1] && a != first[2] && a != first[3] && a != first[4])
		{
			first[a] = a;
			if (array[a-1] != 10) { for (i = 0; i < 5; i++)
				second[i] =  10;
			b = 1;
			while (b < 6)
			{
				if (b != a && b != second[0] && b != second[1] && b != second[2] && b != second[3] && b != second[4])
				{
					second[b] = b;
					if (array[b-1] != 10) { for (i = 0; i < 5; i++)
						third[i] =  10;
					c = 1;
					while (c < 6)
					{
						if (c != a && c != b && c != third[0] && c != third[1] && c != third[2] && c != third[3] && c != third[4])
						{
							third[c] = c;
							if (array[c-1] != 10) { for (i = 0; i < 5; i++)
								forth[i] =  10;
							d = 1;
							while (d < 6)
							{
								if (d != a && d != b && d != c && d != forth[0] && d != forth[1] && d != forth[2] && d != forth[3] && d != forth[4])
								{
									forth[d] =d;
									if (array[d-1] != 10) { for (i = 0; i < 5; i++)
										fifth[i] =  10;
									e = 1;
									while (e < 6)
									{
										if (e != a && e != b && e != c && e != d && e != fifth[0] && e != fifth[1] && e != fifth[2] && e != fifth[3] && e != fifth[4])
										{
											fifth[e] = e;
											if (array[e-1] != 10)
											{
												if (array[a] != 10)
													cout<<array[a];
												if (array[b] != 10)
													cout<<array[b];
												if (array[c] != 10)
													cout<<array[c];
												if (array[d] != 10)
													cout<<array[d];
												if (array[e] != 10)
													cout<<array[e];
												cout<<endl;
											}
											//cout<<(int)array[a]<<(int)array[b]<<(int)array[c]<<(int)array[d]<<(int)array[e]<<endl;
										}
										e++;
									}}
								}
								d++;
							}}
						}
						c++;
					}}
				}
				b++;
			}}
		}
		a++;
	}
}
