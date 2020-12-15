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

using namespace std;
long int s(long int i)
{
	if (i % 10 > 0)
	{
		return(i % 10);
	}
		else
		{
			if (i == 0)
			{
				return(0);
			}
			else
				{
					return(s(i/10));
				}
		}

}
int _tmain(int argc, _TCHAR* argv[])
{
	long int p , q, i, sum;
	do
	{
		sum = 0;
		cin >> p >> q;
		if ((p < 0) && (q < 0))
		{
			return 0;
		}
		else
		{
			for (i = p; i <= q; i++)
			{
				sum += s(i);
			}
			cout << sum << endl;
		}
	} while(true);
	return 0;
}
