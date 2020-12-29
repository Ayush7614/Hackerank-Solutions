#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int no_of_swaps=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a.size()-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                no_of_swaps++;
            }
        }
        
    }

    cout<<"Array is sorted in "<<no_of_swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[a.size()-1]<<endl;


    return 0;
}
