#include <iostream>
using namespace std;

int main() 
{
	int a = 10;
	int* ptr = &a;
	cout << "ptr이 가리키는 값 : " << *ptr << endl;
	cout << "ptr이 가리키는 주소값 : " << ptr << endl;
	cout << "a의 값 : " << a << endl;
	cout << "a의 주소값 : " << &a << endl;
	
	return 0;
}