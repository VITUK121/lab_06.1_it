#include <iostream>
#include <ctime>

using namespace std;

int* make_arr(int size) {
	return new int[size];
}

int* fill_arr(int* arr, int size) {
	for (int i = 0; i != size; i++) {
		arr[i] = rand() % (15 - (-50) + 1) + (-50);
	}
	return arr;
}

void print_arr(int* arr, int size) {
	cout << '{';
	for (int i = 0; i != size-1; i++) {
		cout << arr[i] << ',';
	}
	cout << arr[size-1] << '}' << endl;
}

int counter(int* arr, int size) {
	int result = 0;
	for (int i = 0; i != size; i++) {
		if (arr[i] < 0 || arr[i] % 2 != 0) {
			result++;
		}
	}
	return result;
}

int sum(int* arr, int size) {
	int result = 0;
	for (int i = 0; i != size; i++) {
		if (arr[i] < 0 || arr[i] % 2 != 0) {
			result += arr[i];
		}
	}
	return result;
}

void mod_arr(int* arr, int size) {
	for (int i = 0; i != size; i++) {
		if (arr[i] < 0 || arr[i] % 2 != 0) {
			arr[i] = 0;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ukr");
	srand(time(NULL));
	int size = 24;
	int* arr = make_arr(size);
	fill_arr(arr, size);
	print_arr(arr, size);
	cout << "Кiлькiсть: " << counter(arr, size) << endl;
	cout << "Сума: " << sum(arr, size) << endl;
	mod_arr(arr, size);
	print_arr(arr, size);
}