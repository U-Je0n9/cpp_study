#include <iostream>
using namespace std;

//4
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	//1
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << A[5] << endl;

	//2
	char str1[10] = { 'H','I','E','A','Z','L','T','L','U','O' };
	cout << str1[0] << str1[2] << str1[5] << str1[7] << str1[9] << endl;

	//3
	char str[6] = "Hello";
	char* ps = new char[6];
	ps[0] = str[0];
	ps[1] = str[1];
	ps[2] = str[2];
	ps[3] = str[3];
	ps[4] = str[4];
	ps[5] = str[5];
	ps = ps - 1;
	cout << ps[1] << ps[2] << ps[3] << ps[4] << ps[5] << endl;

	//4
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(a, b);
	cout << a << ", " << b << endl;

	return 0;

}