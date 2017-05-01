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
public class ThreeDouble {
        public static void main(String[] args){
        Scanner enter = new Scanner(System.in);
        System.out.println("Enter three double value");
        double a = enter.nextDouble();
        double b = enter.nextDouble();
        double c = enter.nextDouble();
        double mul = a*b*c;
        System.out.println("Multiplication =   "+mul);
    }
    
}
