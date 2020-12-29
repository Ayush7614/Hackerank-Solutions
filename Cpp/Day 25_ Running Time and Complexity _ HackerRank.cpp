#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

   int cases;
   cin>>cases;
    
   while(cases--) 
   {
       int no;
       cin>>no;

       if(no==1)
       {
        cout<<"Not prime"<<endl;
        continue;
       }
       int flag=0;
       for(int i=2;i<=no/i;i++)
       {
           if(no%i==0)
           {
             flag=1;
           }
       }

        if(flag==1)
        {
              cout<<"Not prime"<<endl;
        }

       if(flag==0)
       {
           cout<<"Prime"<<endl;
       }
      
   }
    return 0;
}
