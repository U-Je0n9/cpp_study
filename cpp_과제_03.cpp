#include <iostream>
using namespace std;

//1
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	//1
	cout << "int a = ";
	int a;
	cin >> a;
	cout << "int b = ";
	int b;
	cin >> b;
	cout << "gcd(" << a << "," << b << ") = " << gcd(a, b) << endl;

	//2

	int first;
	int second;
	int operation;
	do {
		cout << "Enter Two Variables : ";
		cin >> first >> second;
		cout << "1. Add" << endl;
		cout << "2. Subtract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Divide" << endl;
		cout << "5. Exit" << endl;
		cout << "Select Operation : ";
		cin >> operation;

		int result;

		switch (operation) {
		case 1:
			result = first + second;
			cout << "Result : " << result << endl;
			break;

		case 2:
			result = first - second;
			cout << "Result : " << result << endl;
			break;

		case 3:
			result = first * second;
			cout << "Result : " << result << endl;
			break;

		case 4:
			result = first / second;
			cout << "Result : " << result << endl;
			break;

		case 5:
			cout << "End the Program" << endl;
			break;

		default:
			cout << "Wrong Input" << endl;
			break;
		}

	} while (operation != 5);

	//3
	int num;
	do
	{
		cout << "단 수 입력 : ";
		cin >> num;

		if (0 < num && num < 10) { // 0 < num < 10으로 하면 오류!
			for (int i = 1; i < 10; i++) {
				cout << num << " * " << i << " = " << num * i << endl;
			};
		}

		else if (num == 0) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}

		else {
			cout << "다시 입력해주세요." << endl;
		}
	} while (num != 0);

	//4
	int number;
	cin >> number;
	int ten;
	int one;
	int result;
	int time = 1;
	ten = number % 10;
	one = number / 10;
	one = (ten + one) % 10;
	result = ten * 10 + one;
	if (number == result) {
		cout << time << endl;
	}
	else {
		do {
			one = (ten + one) % 10;
			ten = result % 10;
			result = ten * 10 + one;
			time++;
		} while (number != result);
		cout << time << endl;
	}

	//5
	int fir;
	int sec;
	fir = 0;
	sec = 1;
	int times;
	cin >> times;
	int timee = (times-2) / 2;
	if (times % 2 == 0) {
		for (int i = 0; i < timee; i++) {
			fir = fir + sec;
			sec = fir + sec;
		}
		fir = sec + fir;
		cout << fir << endl;
	}
	else {
		for (int i = 0; i < timee+1; i++) {
			fir = fir + sec;
			sec = fir + sec;
		}
		cout << sec << endl;
	}

}