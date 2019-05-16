#include <iostream>

using namespace std;

template<typename T>
void reverse(const T list[], T newList[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--)
	{
		newList[j] = list[i];
	}
}

template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
}

int main()
{
	int size = 6;
	char list[] = { 'a','b','c','d','e','f' };
	char newList[6];

	reverse(list, newList, size);
	cout << "The original array: ";
	printArray(list, 6);
	cout << endl;
	cout << "The reversed array: ";
	printArray(newList, 6);
	cout << endl;

	double list2[] = { 1.1, 2.2, 3.3 ,4.4 ,5.5 ,6.6 };
	double newList2[6];

	reverse(list2, newList2, size);
	cout << "The original array: ";
	printArray(list2, 6);
	cout << endl;
	cout << "The reversed array: ";
	printArray(newList2, 6);
	cout << endl;

	system("pause");

}