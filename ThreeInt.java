/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labSheet;

import java.util.Scanner;

/**
 *
 * @author Roopak
 */
public class ThreeInt {
        public static void main(String[] args){
        Scanner enter = new Scanner(System.in);
        System.out.println("Enter three integer value");
        int a = enter.nextInt();
        int b = enter.nextInt();
        int c = enter.nextInt();
        int sum = a+b+c;
        System.out.println("Sum =   "+sum);
    }
}
