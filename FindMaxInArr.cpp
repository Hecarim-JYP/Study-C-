/*
#include <iostream>

using namespace std;

int main()
{
	int data[10] = { 10, 23, 5, 9, 22, 48, 12, 10, 55, 31 };
	int max = data[0]; // 배열 data의 첫 번째 데이터를 최댓값으로 임시 지정
	cout << "데이터 : " << data[0]; // 첫 번째 데이터 표시
	for (int i = 0; i < 10; i++) { // 나머지 9개의 데이터 비교
		cout << " " << data[i]; // i번째 데이터 출력
		if (max < data[i]) // i번 데이터가 max보다 큰 경우에는 최댓값을 i번째 데이터로 바꿔준다.
			max = data[i]; // 최대값 max를 i번째 데이터로 바꿈
	}
	cout << endl << endl;
	cout << "배열의 최대값 : " << max << endl;
	return 0;
}
*/