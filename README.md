# Selection-Sort-Algorithm
Selection Sort is one of the basic algorithms

#### Extra Explanation:
- It depends on creating a variable that takes the value of the first item in the list in the first pass, and in the second pass it takes the value of the second item, and so on.  
- Then we compare it with the rest of the items according to the type of arrangement (descending - ascending).  
- If the order is assumed to be ascending, we change the value of the variable if there is an item less than it, and so on until the end of the first pass.  
- Then we swap the value of the variable with the value of the first item.  
- The second pass starts from the second item, and so on.

## Code:
```
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
```
## Buy me a Coffee:
if you want to support me
(https://www.buymeacoffee.com/zu698air)

#### Don't forgit to give me a Star

## Done

