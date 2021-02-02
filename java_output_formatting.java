/*
Input   --> java 100
            cpp 65
            python 50

Output  --> ================================
            java           100 
            cpp            065 
            python         050 
            ================================
*/


import java.util.*;
public class Solution {
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       int i,j;
       String st;
       int n,k;
       for(k=1;k<=32;k++)
       System.out.print("=");
       System.out.println();
       for(i=1;i<=3;i++)
       {
           int l=0;
           st=scan.next();
           n=scan.nextInt();
           l=st.length();
           System.out.print(st);
           for(j=l;j<15;j++)
           System.out.print(" ");
           if(n>=0 && n<=9)
           System.out.print("00"+n);
           else if(n>=10 && n<=99)
           System.out.print("0"+n);
           else
           System.out.print(n);
           System.out.println();
       }
       for(k=1;k<=32;k++)
       System.out.print("=");
    }
}