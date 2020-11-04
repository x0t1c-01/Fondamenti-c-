#include<iostream>

using namespace std;

void printSpiralOrder(int arr[], int mat[M][N])
{
	int top = 0, bottom = M - 1;
	int left = 0, right = N - 1;

	int index = 0;

	while (1)
	{
		if (left > right)
			break;
		// print top row
		for (int i = left; i <= right; i++)
			mat[top][i] = arr[index++];
		top++;

		if (top > bottom)
			break;
		// print right column
		for (int i = top; i <= bottom; i++)
			mat[i][right] = arr[index++];
		right--;

		if (left > right)
			break;
		// print bottom row
		for (int i = right; i >= left; i--)
			mat[bottom][i] = arr[index++];
		bottom--;

		if (top > bottom)
			break;
		// print left column
		for (int i = bottom; i >= top; i--)
			mat[i][left] = arr[index++];
		left++;
	}
}
