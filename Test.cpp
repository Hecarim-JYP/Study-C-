#include <iostream>
using namespace std;

int main() 
{
	int a = 10;
	int* ptr = &a;
	cout << "ptr�� ����Ű�� �� : " << *ptr << endl;
	cout << "ptr�� ����Ű�� �ּҰ� : " << ptr << endl;
	cout << "a�� �� : " << a << endl;
	cout << "a�� �ּҰ� : " << &a << endl;
	
	return 0;
}