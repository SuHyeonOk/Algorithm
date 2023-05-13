#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() 
{
    // 2609
    // 10,000 이하 / 호제법 : 두 수의 최대공약수를 구하는 알고리즘 사용

    int a{ 0 }, b{ 0 };
    cin >> a >> b;

    cout << gcd(a, b) << '\n';
    cout << a * b / gcd(a, b) << '\n';

    return 0;
}