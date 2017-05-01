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
public class Circumference {
    public static void main(String[] args){
        Scanner enter = new Scanner(System.in);
        double d;
        double PIE=3.14;
        System.out.println("Enter diameter");
        d = enter.nextDouble();
        System.out.println("Circumference =   "+2*d/2*PIE);
    }
}
