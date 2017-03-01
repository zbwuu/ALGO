#include<iostream>
int main()
{
	int A[10] = {2,1,0,4,6,9,7,3,8,5}, j, mid, i,k;
	for (j = 1; j < 10; j++)
	{
		mid = A[j];
		i = j - 1;
		while (i >= 0 && A[i] > mid)
		{
			A[i + 1] = A[i];
			i = i - 1;
			A[i + 1] = mid;
		}
	}
	for (k = 0; k < 10; k++)
	{
		std::cout << A[k] << std::endl;
	}
	return 0;
}
