import java.util.Scanner;

public class Game_Rank
{
    public static int checkCap(int n){
        if (n > 20){
            return 2;
        }
        if (n > 15){
            return 3;
        }
        if (n > 10){
            return 4;
        }
        else {
            return 5;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        int rank = 25;
        int cap = 2;
        int contin = 0;
        int star = 0;
        for (int i = 0 ; i < a.length() ; i++){
            if (rank == 0){
                System.out.println("Legend");
                return;
            }
            cap = checkCap(rank);
            if (a.charAt(i) == 'W'){
                star++;
                if (contin < 3){
                    contin++;
                }
                if (rank > 5 && contin >= 3){
                    star++;
                }
                if (star > cap){
                    rank--;
                    star -= checkCap(rank+1);
                }
            }
            else if (a.charAt(i) == 'L'){
                contin = 0;
                if (rank < 21){
                    star--;
                    if (star < 0){
                        if (rank == 20){
                            star = 0;
                        }
                        else {
                            rank++;
                            star = checkCap(rank) - 1;
                        }
                    }
                }

            }
        }
        if (rank == 0){
            System.out.println("Legend");
            return;
        }
        System.out.println(rank);
    }
}

