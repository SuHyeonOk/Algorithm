#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int score;
	cin >> score;

	if (score >= 90)
		cout << "A" << endl;
	else if(score >= 80)
		cout << "B" << endl;
	else if(score >= 70)
		cout << "C" << endl;
	else if(score >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;
}