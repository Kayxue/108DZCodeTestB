#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        double n1, m1;
        cout << "�п�J���n";
        cin >> n1;
        cout << "�п�J���m";
        cin >> m1;
        if ((double)(int)n1 != n1 || (double)(int)m1 != m1 || n1 <= 0 || n1 <= 0)
        {
            cout << "�Ʀr��J���~�I";
            continue;
        }
        int n = n1, m = m1, sum = 0;
        if (n > m)
        {
            int temp;
            temp = n;
            n = m;
            m = temp;
        }
        cout << n << "~" << m << "��������Ʀ��G";
        for (int i = n; i <= m; i++)
        {
            bool is = true;
            for (int k = 2; k < i; k++)
            {
                if (i % k == 0)
                {
                    is = false;
                    break;
                }
            }
            if (is)
            {
                cout << i << "\t";
                sum += i;
            }
        }
        cout << "\n"
             << "���`�M���G" << sum;
    }

    return 0;
}
