#include "stdio.h"

int func(int arr[], int target, int len) {
	int i = 0, j = len - 1, m = (i + j) >>1;
	while (i <= j)
	{
		//=因为当 i= m = j 的时候有可能正好是目标值
		if (arr[m] == target)
		{
			return m;
		}
		if (target <arr[m])
		{
			// 1(i)  3  6(m)  9  11(j)
			j = m - 1;
		}
		if (arr[m]<target)
		{
			i = m + 1;
		}
		m = (i + j) / 2;
	}
	return -1;
}
int main() {

	int arr[] = { 1,3,6,9,10,12 };
	//int j = func(arr, 11, sizeof (arr) / sizeof (arr[0]));
	int j = func(arr, 10, sizeof (arr) / sizeof (arr[0]));
	printf("%d", j);
}