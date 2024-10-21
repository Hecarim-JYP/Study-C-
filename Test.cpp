#include <iostream>
using namespace std;

int main() 
{
	int* intPtr;
	intPtr = new int[3];

	*intPtr = 10;
	*(intPtr + 1) = 20;
	intPtr[2] = 30;

	cout << "1번째 값 : " << *intPtr << endl;
	cout << "2번째 값 : " << *(intPtr + 1) << endl;
	cout << "3번째 값 : " << intPtr[2] << endl;
}