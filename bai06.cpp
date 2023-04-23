#include<iostream>
using namespace std;
int UCLN (int a, int b)
{
    int x,y,r;
    x = a;
    y = b;
    while (r != 0) //thuat toan EUCLID
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main ()
{
    int a,b;
    cin >> a >> b;
    cout << UCLN(a,b) << endl;
}