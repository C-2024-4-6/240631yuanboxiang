#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i,k;
	for (i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (i = size1,k=0; i < size2+ size1; i++,k++)
	{
		list3[i] = list2[k];
	}
	int j = 0, listSize = size1+size2;
	bool changed = true;
	do
	{
		changed = false;
		for (j = 0; j < listSize - 1; j++)
		{
			if (list3[j] > list3[j + 1])
			{
				double swap;
				swap = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = swap;
				changed = true;
			}
		}

	} while (changed);
	for (i=0; i< listSize; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int k,i,n;
	cout << "Enter list1" << endl;
	cin >> k;
	int* list1 = new int[k];
	for (i = 0; i < k; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2" << endl;
	cin >> n;
	int* list2 = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> list2[i];
	}
	int* list3 = new int[n + k];
	merge(list1, k, list2,n,list3);
	delete[] list1;
	delete[] list2;
	delete[] list3;
	return 0;
}