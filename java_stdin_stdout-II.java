/*
Problem --> We have to take value from user and then print it

Input   --> 42
            3.1415
            Welcome to HackerRank's Java tutorials!

Output  --> String: Welcome to HackerRank's Java tutorials!
            Double: 3.1415
            Int: 42
*/


import java.util.*;
public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
        Double d=scan.nextDouble();
        scan.nextLine();
        String s=scan.nextLine();
        System.out.println("String: "+s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}