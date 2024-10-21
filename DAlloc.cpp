/*
#include <iostream>

using namespace std;

int main()
{
	int* intPtr;
	intPtr = new int[4]; // 4개의 int 값을 저장할 메모리 할당 배열로 생성했다.
	
	*intPtr = 10;
	*(intPtr + 1) = 20;

	intPtr[2] = 30;
	intPtr[3] = 40;

	for (int* q = intPtr, i = 0; i < 4; i++)
		cout << intPtr[i] << " "; // 포인터 q가 가리키는 곳의 주소는 intPtr 의 인덱스가 가리키는 곳의 값이다.
	delete[] intPtr; // 출력이 끝난 후 사용을 다한 메모리는 삭제처리하여 메모리 낭비를 막는다.
	return 0;
}
*/