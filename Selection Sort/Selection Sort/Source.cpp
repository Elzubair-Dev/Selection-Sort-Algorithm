using namespace std;
#include<iostream>
#include<algorithm>
void S_Sort(int arr[], int n)
{
	int min = 0;
	for (int i = 0; i < n-1; i++)
	{
		min = i;					   //            min j        
		for (int j = i + 1; j < n; j++)//10,60,50,40,20,30
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}
void print(int arr[], int n)
{
	cout << "[ ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]\n\n";
}
int main()
{
	int x[] = { 60,10,50,40,20,30 };
	int n = sizeof(x) / sizeof(x[0]);
	print(x, n);
	cout << "----------After Sorting----------\n\n";
	S_Sort(x, n);
	print(x, n);
}