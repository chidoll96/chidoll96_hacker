#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int *arr = new int[100];
	int temp;
	srand(time(NULL));
	for (int i = 0; i < 100; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
	for (int i = 0; i < 100; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
	
	return 0;
}