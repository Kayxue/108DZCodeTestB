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
        cout << "�Эp��" << n << "+" << m << "=";
        cin >> sum;
        if (input == sum)
        {
            cout << "�A����F�A���״N�O" << sum;
        }
        else
        {
            cout << "�A�����F�A���׬O" << sum;
        }
        cout << endl
             << endl;
    }
}
