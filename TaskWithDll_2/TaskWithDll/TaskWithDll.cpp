#include <stdio.h>
#include <iostream>
#include <conio.h>
#include "CheckDLL.h"
using namespace std;

int main()
{
	int n, i;
	cout << "vvedite kol-vo elementov massiva= ";
	cin >> n;
	float* x = new float[n];
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "x[" << i << "]= ";
		cin >> x[i];
		a[i] = 0;
	}
	if (n < 3)
	{
		if ((cos(x[0]) > 0) && (cos(x[1]) > 0))
		{
			cout << "True";
			_getch();
			exit(EXIT_FAILURE);
		}
		else
		{
			cout << "False";
			_getch();
			exit(EXIT_FAILURE);
		}
	}

	proverka(x, a, n / 3 - 1, n);
	proverka(x, a, n - 1, n);

	if (n > 2)
	{
		if ((a[n / 3 - 1] == 0) && (a[n - 1] == 0))
		{
			cout << "True";
			_getch();
			exit(EXIT_FAILURE);
		}
		else
		{
			cout << "False";
			_getch();
			exit(EXIT_FAILURE);
		}
	}
	return 0;
}