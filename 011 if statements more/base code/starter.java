import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
		System.out.println("Write a random number");
		int n1 = sc.nextInt();
		System.out.println("Write another random number");
		int n2 = sc.nextInt();
		if(n1 == n2)
	{
	System.out.println("Both numbers are the same");
	}
	if(n1 != n2)
	{
	System.out.println("Both numbers are not the same");
	}
	}
}
