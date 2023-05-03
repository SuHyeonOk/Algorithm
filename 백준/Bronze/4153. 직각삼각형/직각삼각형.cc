#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        bool result = false;
        if (a >= b)
        {
            if (a >= c)
            {
                if ((b * b) + (c * c) == (a * a))
                    result = true;
            }
            else if (a < c)
            {
                if ((b * b) + (a * a) == (c * c))
                    result = true;
            }
        }
        else if (b >= c)
        {
            if (b >= a)
            {
                if ((a * a) + (c * c) == (b * b))
                    result = true;
            }
            else if (b < a)
            {
                if ((b * b) + (c * c) == (a * a))
                    result = true;
            }
        }
        else if (c >= a)
        {
            if (c >= b)
            {
                if ((a * a) + (b * b) == (c * c))
                    result = true;
            }
            else if (c < b)
            {
                if ((a * a) + (c * c) == (b * b))
                    result = true;
            }
        }


        if(result)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }

    return 0;
}