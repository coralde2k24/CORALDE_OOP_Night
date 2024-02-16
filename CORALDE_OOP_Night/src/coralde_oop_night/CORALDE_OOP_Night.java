package coralde_oop_night;

import java.util.Scanner;

public class CORALDE_OOP_Night {


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter some words: ");
        String sentence = scanner.nextLine();

        if (sentence.startsWith(sentence.substring(0, 1).toUpperCase())) {
            System.out.println("UwU");
        } else {
            System.out.println("JEJE");
        }
    }
}

    

