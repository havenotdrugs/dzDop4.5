#include <iostream>
#include <vector>
#include <random>

using namespace std;

int* generateArray(int size);

int main() {
	int sizeArray;
	cin >> sizeArray;
	int* myArray = generateArray(sizeArray);
	for (int i = 0; i < sizeArray; i++) cout << myArray[i] << endl;
}

int* generateArray(int size) {
	int* pktr = new int[size];
	for (int i = 0; i < size; i++) {
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dis(0, 100);
		pktr[i] = dis(gen);
	}
	return pktr;
}
