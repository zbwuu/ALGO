#include<iostream>
int main()
{
	int A[5] = { 99,11,11,69,4 };
	int j,temp=0,k,v;
	for (j = 0; j < 5; j++)
	{
		for (v=j+1; j<v && v<5; v++)
		{
			temp = A[v];
			if (temp < A[j])
			{
				A[v] = A[j];
				A[j] = temp;
			}
		}
	}
	for (k = 0; k < 5; k++)
	{
		std::cout << A[k]<<" ";
	}
}