#include<iostream>

using namespace std;

int main()
{

    int size1;

    cin>>size1;

    int arr[size1];

    for (int i=0; i<size1; i++)

    {
        cin>>arr[i];
    }

    for(int i=size1-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}
