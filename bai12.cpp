#include<iostream>
#include<math.h>
using namespace std;

long int giaithua(int n)
{
    if (n == 0) return 1;
    return n*giaithua(n-1); 
}

int toHop(int k, int n)
{
    int result = 0, m = n-k;
    result = giaithua(n) / (giaithua(k) * giaithua(m));
    return result;
}


void nhapKN(int k[], int n[], int &soPhanTu) {
    int i = 0;
    while (1) {
        int x, y;
        cin >> x >> y;
        if (x == -1 && y == -1) {
            break;
        }
        k[i] = x;
        n[i] = y;
        i++;
    }
    soPhanTu = i;
    int result[soPhanTu];
    for (int j = 0; j < soPhanTu; j++)
    {
        result[j] = toHop(k[j],n[j]);
    }
    for (int j = 0; j < soPhanTu; j++)
    {
        cout << result[j] << endl;
    }

}

int main ()
{
    int n[100],k[100],soPhantu;
    nhapKN(k,n,soPhantu);
}