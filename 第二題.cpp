#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        double nn;
        double output = 0.0;
        cout << "�п�J���N�G";
        cin >> nn;
        if ((double)(int)nn != nn || nn < 0)
        {
            cout << "�п�J��ơI";
            continue;
        }
        int n = (int)nn;
        if (n % 2 == 0)
        {
            for (int i = 2; i <= n; i += 2)
            {
                output += i;
            }
            output = sqrt(output);
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
            {
                output += 1 / i;
            }
        }
        cout << n << "���żơG" << output;
    }
}
