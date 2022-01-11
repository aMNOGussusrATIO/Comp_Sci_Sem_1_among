import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int rn1 = rand.nextInt(999)+1;
	System.out.println("Pick a number between 1 and 1000");
	int n1 = sc.nextInt();
	boolean b1;
	b1 = (rn1 == n1);
	if(b1)
	{
	System.out.println("You guessed correctly!");
	}
	else
	{
	System.out.println("You didn't guess correctly.");
	}
	}
}