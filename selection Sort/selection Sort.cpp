using namespace std;
#include<iostream>

void SelectionSort(int a[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

int main()
{
	int i, n, a[30];
	cout << "Enter Size of Array : "; cin >> n;
	cout << "Enter Elem in Array : " << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];
	SelectionSort(a, n);
	cout << "After Sorting Elem : " << endl;
	for (i = 0; i < n; i++)
		cout << a[i] << endl;
}