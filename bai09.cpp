#include<iostream>
#include<stdlib.h>
using namespace std;
int rands(int max)
{
    return rand() * (max + 1.0) / (1.0 + RAND_MAX);
}
int main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cout << rands(N) << endl;
    }
    
}