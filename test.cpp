#include <iostream>
using namespace std;
int divide(int, int) int main()
{
    int ne, de, res;
    cout << "Enter numerator and denomenator";
    cin >> nu >> de;
    try
    {
        res = divide(nu, de);
        cout << "result" << res;
    }
    catch (init)
    {
        cout << "divide by zero exception occured:de=" << i;
    }
}
int divide(int fn, int sn)
{
    if (sn == 0)
    {
        throw(sn);
    }
    else
    {
        return (fn / sn);
    }
}