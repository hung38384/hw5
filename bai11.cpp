#include<iostream>
#include<string>
#include<math.h>
using namespace std;

char chuyendoi(int a)
{
    return a + 48;
}

int doiso(char r)
{
    return r - 48;
}

string DecToBin(int n)
{
    string str = "";
    while (n != 0)
    {
        int tmp;
        tmp = n % 2;
        n = n / 2;
        str = str + chuyendoi(tmp);
    }
    int m = str.size();
    for (int i = 0; i < m; i++)
    {
        str[i] = str[m-i];
    }
    return str;
}

int BinToDec(string str)
{
    int tong = 0;
    int n =str.size();
    for (int i = n - 1; i >= 0; i--)
    {
        tong += doiso(str[i]) * pow(2, n - i -1);
    }
    return tong;
}

int main ()
{
    int n;
    cin >> n;
    cout << DecToBin(n) << endl;
    string str; 
    getline(cin,str);
    cout << BinToDec(str) << endl;
}