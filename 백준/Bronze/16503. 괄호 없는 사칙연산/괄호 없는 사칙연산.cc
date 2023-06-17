#include <iostream>
#include <queue>
#include <stack>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <math.h>
#include <algorithm>
#include <map>
 
using namespace std;
 
vector<int> v;
 
int Calc(int l, int r, char o)
{
    int ret = 0;
 
    switch (o)
    {
        case '+' :
            ret = l + r;
            break;
 
        case '-' :
            ret = l - r;
            break;
    
        case '*' :
            ret = l * r;
            break;
 
        case '/' :
            ret = l / r;
            break;
 
        default:
            break;
    }
 
    return ret;
}
 
int main(void)
{
    char o1, o2;
 
    int a = 0, b = 0, c = 0;
 
    int var = 0;
 
    scanf("%d %c %d %c %d", &a, &o1, &b, &o2, &c);
 
    var = Calc(a, b, o1);
    
    v.push_back(Calc(var, c, o2));
 
    var = Calc(b, c, o2);
 
    v.push_back(Calc(a, var, o1));
 
    sort(v.begin(), v.end());
 
    for (auto i : v)
    {
        printf("%d\n", i);
    }
 
    return 0;
}
