#include <iostream>
using namespace std;

int main() {

	// 1��. ����� �̸��� ȭ�鿡 ����Ͻÿ�
	cout << "My name is ������" << endl;

	// 2��. ���� 2147483648�� ������ ��� �̸� ����Ͻÿ�
	unsigned int a;
	a = 2147483648;
	cout << a << endl;

	// 3��. �Ʒ��� ���α׷��� �ۼ��Ͻÿ�.
	const float PI = 3.14;
	char ch1 = 65;
	char ch2 = 65 + 1;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;

	// 4��. �Ʒ��� ���α׷��� �ۼ��Ͻÿ�.
	char ch;
	int X;
	unsigned short siX;
	unsigned iX;
	long liX;
	long long lliX;

	cout << "sizeof(ch):" << sizeof(ch) << endl;
	cout << "sizeof(X):" << sizeof(X) << endl;
	cout << "sizeof(siX):" << sizeof(siX) << endl;
	cout << "sixeof(iX):" << sizeof(iX) << endl;
	cout << "sizeof(liX):" << sizeof(liX) << endl;
	cout << "sizeof(lliX):" << sizeof(lliX) << endl;

	//5��. ����ڷκ��� �Է� ���� ȭ�� �µ� ���� ���� �µ� ������ ��ȯ
	cout << "Please enter Fahrenheit Value : ";
	int Fahrenheit;
	cin >> Fahrenheit;
	int Celsius;
	Celsius = 5 / 9 * (Fahrenheit - 32);
	cout << "Celsius value is " << Celsius << endl;

	return 0;
}