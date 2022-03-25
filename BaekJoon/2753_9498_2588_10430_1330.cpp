#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	// 2753번 윤년
	int year;
	cin >> year;

	if (year % 400 == 0)
		cout << "1" << endl;
	else if (year % 4 == 0)
		cout << "1" << endl;
	else if (year % 100 == 0)
		cout << "0" << endl;
	else
		cout << "0" << endl;

	// 9498번 시험 성적에 따른 A, B, C, D, F 출력
	int score;
	cin >> score;

	if (score >= 90)
		cout << "A" << endl;
	else if (score >= 80)
		cout << "B" << endl;
	else if (score >= 70)
		cout << "C" << endl;
	else if (score >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;

	// 2588번 곱셈 /,%을 이용한 첫번째 자리수, 두번째 자리수, 세번째 자리수 계산하기 
	int a, b;
	cin >> a >> b;

	cout << a * (b % 10) << endl;
	cout << a * ((b / 10) % 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b << endl;

	// 10430번 나머지 
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;

	// 1330번 두 수 비교하기 <, >, == 출력
	int a, b;
	cin >> a >> b;

	if (a < b)
		cout << "<" << endl;
	else if (a > b)
		cout << ">" << endl;
	else if (a == b)
		cout << "==" << endl;

	return 0;
}