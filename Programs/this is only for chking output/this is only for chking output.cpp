#include<iostream>
using namespace std;

void findRepeating(int arr[], int size) {
	cout << "Repeating elements are: ";
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
				cout << arr[i] << " ";
				break;
			}
		}
	}
	cout << endl;
}

int main() {
	int arr[] = { 1, 2, 3, 2, 5, 3, 7, 8, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	findRepeating(arr, size);
	return 0;
}
