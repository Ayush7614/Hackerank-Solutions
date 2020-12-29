#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<bits/stdc++.h>
using namespace std;


int main() {

     int entries;
     cin>>entries;

    map <string,string> mp;

    for(int i=0;i<entries;i++)
    {
        string name;
        string number;

        cin>>name>>number;

        mp[name]=number;
    }

        string querry;
        map<string,string>::iterator it;

    while(cin>>querry)
    {
        
        it=mp.find(querry);

        if(it!=mp.end())
        {
            cout<<it->first<<"="<<it->second<<endl;
        }   
        else
        cout<<"Not found"<<endl;
    }
    return 0;
}
