#include <stdio.h>

int func(int arr [],int target ,int len) {
	int i = 0, j = len - 1, m = (i + j) >> 1;
	while (i<=j)

	{


		if (arr[m ] ==target)
		{
			return m;
		}
		if (arr[m]<target)
		{
			i = m + 1;
		}
		else {
			j = m - 1;
		}
		m = (i + j) >> 1;

	}

	if (m<0)
	{
		return 0;
	}
	return arr[m] < target ? m + 1 : m - 1;
}
int main() {
	int arr[] = { 1,3,5,6 };
	printf("%d", func(arr, 2, 4));
}