import java.util.ArrayList;
import java.util.Scanner;

public class Day {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long money = 100;
        long m = 0;
        long j = 0;
        long[] main = new long[n];
        for (int i = 0 ; i < n ; i++){
            main[i] = sc.nextInt();
        }
        if (n == 1) {
            System.out.println(100);
            return;
        }
        for (int i = 0 ; i < n - 1 ; i++){
            int k = i;
            while (k < n -1 && main[k+1] >= main[k]){
                k++;
            }
            m = money / main[i];
            if (m > 100000){
                m = 100000;
            }
            j = money - main[i] * m;

            money = m * main[k];
            money += j;
            i = k;
        }
        System.out.println(money);
    }
}

