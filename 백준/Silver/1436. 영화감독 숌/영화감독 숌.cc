#include<iostream>

	using namespace std;

	int main()
	{
		// 1436 : 영화감독 숌
		
		int n{ 0 }, ans{ 0 }, count{ 0 }, temp{ 0 };
		cin >> n;

		while (count != n)
		{
			ans++;
			temp = ans;

			// 수에 6이 적어도 3개이상 들어가는지 판별
			while (temp != 0)
			{
				if ((temp % 1000) == 666) // 종말의 숫자
				{
					count++;
					break;
				}
				else
				{
					temp /= 10; // 일의 자리수 삭제
				}
			}
		}
		cout << ans;
	}