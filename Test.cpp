#include <iostream>
using namespace std;

int main() 
{
	int* intPtr;
	intPtr = new int[3];

	*intPtr = 10;
	*(intPtr + 1) = 20;
	intPtr[2] = 30;

	cout << "1��° �� : " << *intPtr << endl;
	cout << "2��° �� : " << *(intPtr + 1) << endl;
	cout << "3��° �� : " << intPtr[2] << endl;
}