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
public class Name {
    
        public static void main(String[] args){
        Scanner enter = new Scanner(System.in);
        System.out.println("Enter your name");
        String name = enter.nextLine();
        System.out.println("Hello "+name);
    }
}
