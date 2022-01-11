import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Random rand = new Random();
	int rand_num1 = rand.nextInt(10);
	int rand_num2 = rand.nextInt(100)+1;
	double rand_num3 = rand.nextDouble()+2.5;
	int rand_num4 = rand.nextInt(575)+14;
	System.out.println(rand_num1);
	System.out.println(rand_num2);
	System.out.println(rand_num3);
	System.out.println(rand_num4);

	}
}
