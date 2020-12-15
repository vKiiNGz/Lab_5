#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <limits.h>
#include "File1.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int i, j, n, m, mins;
	cout << "vvedite kol-vo strok n: ";
	cin >> n;
	cout << "vvedite kol-vo solbcov m: ";
	cin >> m;
	int *s = new int [m];
	int **a = new int* [n];
	for (i = 0; i < n; i++)
	{
	 a[i] = new int [m];
	}

	for (i = 0; i < n; i++)
	{
	 for (j = 0; j < m; j++)
	 {
	  cout << "a[" << i << "][" << j << "]= ";
	  cin >> a[i][j];
	 }
	}
	for (i = 0; i < m; i++)
	{
		s[i] = 0;
	}

	znach_s(s, a, n, m);

	for (i = 0; i < m; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl << "min element = ";
	minel(s, m, mins);
	cout << mins;
	getch();
	return 0;
}
