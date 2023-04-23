#include<iostream>
#include<math.h>
using namespace std;

int rands(int max)
{
    return rand() * (max + 1.0) / (1.0 + RAND_MAX);
}

void chia(int a[],int n)
{
    int b[3];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if(sum % 25 == 0){
                    a[i] = b[0];
                    a[j] = b[1];
                    a[k] = b[2];
                } else {
                    b[0] = b[1] = b[2] = 0;
                }
            }
        }
    }
    cout << b[0] << " " << b[1] << " " << b[2];
}
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ; i < n; i++)
    {
        a[i] = rands(49);
    }
    chia(a,n);
}
