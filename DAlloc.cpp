/*
#include <iostream>

using namespace std;

int main()
{
	int* intPtr;
	intPtr = new int[4]; // 4���� int ���� ������ �޸� �Ҵ� �迭�� �����ߴ�.
	
	*intPtr = 10;
	*(intPtr + 1) = 20;

	intPtr[2] = 30;
	intPtr[3] = 40;

	for (int* q = intPtr, i = 0; i < 4; i++)
		cout << intPtr[i] << " "; // ������ q�� ����Ű�� ���� �ּҴ� intPtr �� �ε����� ����Ű�� ���� ���̴�.
	delete[] intPtr; // ����� ���� �� ����� ���� �޸𸮴� ����ó���Ͽ� �޸� ���� ���´�.
	return 0;
}
*/