#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        double a1, b1, c1;
        int a, b, c, min, max;
        cout << "�п�JA�G";
        cin >> a1;
        cout << "�п�JB�G";
        cin >> b1;
        cout << "�п�JC�G";
        cin >> c1;
        if ((double)(int)a1 != a1 || (double)(int)b1 != b1 || (double)(int)c1 != c1 || a1 <= 0 || b1 <= 0 || c1 <= 0)
        {
            cout << "�нT�{�A��J���Ʀr�I";
            continue;
        }
        a = (int)a1;
        b = (int)b1;
        c = (int)c1;
        if (a >= b && a >= c)
        {
            max = a;
        }
        else if (b >= a && b >= c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
        cout<<max<<endl;
        if (a <= b && a <= c)
        {
            min = a;
        }
        else if (b <= a && b <= c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
        cout<<min<<endl;
        int x = 1;
        for (int i = 2; i <= min; i++)
        {
            if (a % i == 0 && b % i == 0 && c % i == 0)
            {
                x = i;
            }
        }
        int y = max;
        while (max % a != 0 || max % b != 0 || max % c != 0)
        {
            y += 1;
        }
        cout << a << "�B" << b << "�B" << c << "���̤j���]�Ƭ��G" << x << "�A�̤p�����Ƭ��G" << y;
    }

    return 0;
}
