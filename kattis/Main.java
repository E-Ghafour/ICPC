import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        if (Math.abs((m-n)) == 1){
            if (n > m){
                System.out.println("Dr. Chaz needs " + (n-m) + " more piece of chicken!\n");
            }
            else if (m > n){
                System.out.println("Dr. Chaz will have " + (m - n) +" piece of chicken left over!\n");
            }
        }
        else {
            if (n > m){
                System.out.println("Dr. Chaz needs " + (n-m) + " more pieces of chicken!\n");
            }
            else if (m > n){
                System.out.println("Dr. Chaz will have " + (m - n) +" pieces of chicken left over!\n");
            }
        }
    }
}
