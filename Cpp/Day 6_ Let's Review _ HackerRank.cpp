#include<iostream>
#include<algorithm>

using namespace std;

int main()

{
    int cases;

    cin>>cases;

    while(cases--)
    {

        string str,str1,str2;
        cin>>str;
        for (int i=0;i<str.length();i++)
        {
         if(i%2==0)
         {
            str1.push_back(str[i]);
         }
         else
         {

             str2.push_back(str[i]);
         }
        }

        cout<<str1<<" "<<str2<<endl;
    }
}
