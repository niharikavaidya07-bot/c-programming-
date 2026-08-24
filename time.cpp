#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void input()
    {
        cin >> h >> m >> s;
    }

    void add(Time t)
    {
        s = s + t.s;
        m = m + t.m;
        h = h + t.h;

        if (s >= 60)
        {
            s = s - 60;
            m++;
        }

        if (m >= 60)
        {
            m = m - 60;
            h++;
        }

        cout << "Time = " << h << ":" << m << ":" << s;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time (hh mm ss): ";
    t1.input();

    cout << "Enter second time (hh mm ss): ";
    t2.input();

    t1.add(t2);

    return 0;
}
