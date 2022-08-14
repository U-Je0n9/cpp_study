#include <iostream>
using namespace std;

int main() {

	// 1번. 당신의 이름을 화면에 출력하시오
	cout << "My name is 성유정" << endl;

	// 2번. 정수 2147483648을 변수에 담고 이를 출력하시오
	unsigned int a;
	a = 2147483648;
	cout << a << endl;

	// 3번. 아래의 프로그램을 작성하시오.
	const float PI = 3.14;
	char ch1 = 65;
	char ch2 = 65 + 1;
	cout << PI << endl;
	cout << ch1 << endl;
	cout << ch2 << endl;

	// 4번. 아래의 프로그램을 작성하시오.
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

	//5번. 사용자로부터 입력 받은 화씨 온도 값을 섭씨 온도 값으로 변환
	cout << "Please enter Fahrenheit Value : ";
	int Fahrenheit;
	cin >> Fahrenheit;
	int Celsius;
	Celsius = 5 / 9 * (Fahrenheit - 32);
	cout << "Celsius value is " << Celsius << endl;

	return 0;
}