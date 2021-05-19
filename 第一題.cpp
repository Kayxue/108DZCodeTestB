#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    while (true)
    {
        srand(time(NULL));
        double n = rand() % (99 - 9 + 1) + 9;
        double m = rand() % (99 - 9 + 1) + 9;
        double sum = n + m;
        double input;
        cout << "請計算" << n << "+" << m << "=";
        cin >> sum;
        if (input == sum)
        {
            cout << "你答對了，答案就是" << sum;
        }
        else
        {
            cout << "你答錯了，答案是" << sum;
        }
        cout << endl
             << endl;
    }
}
