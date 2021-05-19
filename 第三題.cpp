#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        double n1, m1;
        cout << "請輸入整數n";
        cin >> n1;
        cout << "請輸入整數m";
        cin >> m1;
        if ((double)(int)n1 != n1 || (double)(int)m1 != m1 || n1 <= 0 || n1 <= 0)
        {
            cout << "數字輸入錯誤！";
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
        cout << n << "~" << m << "之間的質數有：";
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
             << "其總和為：" << sum;
    }

    return 0;
}
