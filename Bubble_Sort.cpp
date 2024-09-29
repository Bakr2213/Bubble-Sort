#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{                     
	bool check = true;             
	int count = 0;
	                                // 0   1  2  3  4  5
	for (int i = 0; i < n-1; i++)  // 100 60 20 50 30 90
	{
		for (int j = 0; j < n-i-1;j++)
		{
			if (arr[j] < arr[j+1])  
			{
				swap(arr[j], arr[j + 1]); 
				check = false;
			}
			count++;
		}
		if (check == true)
			break;
	}
	cout << "number of rounds : " << count << endl;
}
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 100,90,70,50,30,10 };
	int n = sizeof(arr) / sizeof(arr[0]);   // 24 /	4  = 6
	BubbleSort(arr, n);
	print(arr, n);
}
