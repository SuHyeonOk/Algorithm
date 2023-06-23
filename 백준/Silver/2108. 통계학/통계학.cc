#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath> // 반올림 한수 round() 사용을 위해

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N{ 0 }, iMean{ 0 };
    cin >> N;

    int arrNum[8001] = { 0 };
    vector<int> vec;
    vec.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
        iMean += vec[i];
        arrNum[vec[i] + 4000]++;
    }

    // 작은 순으로 정렬
    sort(vec.begin(), vec.end());

    // 1. 산술평균 (- 는 나오면 안 된다.)
    iMean = round((float)iMean / N);
    cout << iMean << '\n';

    // 2. 중앙값
    cout << vec[vec.size() * 0.5] << '\n';

    // 3. 최빈값 (여러개가 존재할 경우 두 번째로 작은 값 출력)
    bool bFirst{ false };
    int iTempMost{ -9999 }, iMost{ 0 };
    for (int i = 0; i < 8001; i++)
    {
        if (arrNum[i] == 0)
        {
            continue;
        }
        if (arrNum[i] == iTempMost)
        {
            if (true == bFirst)
            {
                iMost = i - 4000;
                bFirst = false;
            }
        }
        if (arrNum[i] > iTempMost)
        {
            iTempMost = arrNum[i];
            iMost = i - 4000;
            bFirst = true;
        }
    }
    cout << iMost << '\n';

    // 4. 범위
    int iRange = vec.back() - vec.front();
    cout << iRange << '\n';


    return 0;
}