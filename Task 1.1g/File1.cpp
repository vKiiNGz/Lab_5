#include <limits.h>
void znach_s(int *s, int **a, int n, int m)
{
	int i, j;
	for (j = 0; j < m; j++)
	{
	 for (i = 0; i < n; i++)
	 {
		s[j] += a[i][j];
	 }
	}
}
void minel(int *s,int m, int min)
{
	int i;
   	min = INT_MAX;
	for (i = 0; i < m; i++)
	{
		if (s[i] < min)
		{
		min = s[i];
		}
	}

}
