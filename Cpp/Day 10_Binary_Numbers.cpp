#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;


    int x,i=1;
    int arr[20]={0};
    while(n>0)
    {
        x=n%2;
        n=n/2;
        arr[20-i]=x;
        i++;
    }

 
    return 0;
}
