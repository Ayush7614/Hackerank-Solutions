/* 
Problem --> Given an integer, , perform the following conditional actions:
            If  is odd, print Weird
            If  is even and in the inclusive range of  to , print Not Weird
            If  is even and in the inclusive range of  to , print Weird
            If  is even and greater than , print Not Weird

Input   --> 3
Output  --> Weird

Input   --> 24
Output  --> Not Weird
*/


import java.util.*;
public class Solution {
    public static void main(String[] args) {
       Scanner scan=new Scanner(System.in);
       int n=scan.nextInt();
       if(n%2!=0)
       System.out.println("Weird");
       if(n%2==0 && n>=2 && n<=5)
       System.out.println("Not Weird");
       if(n%2==0 && n>=6 && n<=20)
       System.out.println("Weird");
       if(n%2==0 && n>20)
       System.out.println("Not Weird");
    }
}