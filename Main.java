/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator;

import java.util.Scanner;

/**
 *
 * @author Roopak
 */
public class Main {
    public static void main(String [] args){
    Scanner s = new Scanner(System.in);
    System.out.println("Enter First Number");
    int a = s.nextInt();
    System.out.println("Enter Second Number");
    int b = s.nextInt();
    System.out.println("Enter 1 for add , 2 for sub , 3 for div and 4 for mul");
    int c = s.nextInt();
    
    switch(c) {
        case 1 : System.out.println("Add =" +Process.add(a,b));
                 break;
        case 2 : System.out.println("Sub =" +Process.sub(a,b));
                 break;
        case 3 : System.out.println("Div =" +Process.div(a,b));
                 break;
        case 4 : System.out.println("Mul =" +Process.mul(a,b));
                 break;
        default : System.out.println("Invalid Command");
                 
    }
    
}
}
