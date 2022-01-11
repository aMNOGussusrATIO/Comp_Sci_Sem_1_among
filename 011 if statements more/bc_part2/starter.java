import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Write a random number");
		int n1 = sc.nextInt();
		System.out.println("Write another random number");
		int n2 = sc.nextInt();
		System.out.println("Write another random number");
		int n3 = sc.nextInt();
		if((n1 > n2) && (n1 > n3))
	{
	System.out.print(n1);
	System.out.println(" is the greatest integer");
	}
		if((n2 > n1) && (n2 > n3))
	{
	System.out.print(n2);
	System.out.println(" is the greatest integer");
	}
		if((n3 > n1) && (n3 > n2))
	{
	System.out.print(n3);
	System.out.println(" is the greatest integer");
	}
		if((n1 < n2) && (n1 < n3))
	{
	System.out.print(n1);
	System.out.println(" is the smallest integer");
	}
		if((n2 < n1) && (n2 < n3))
	{
	System.out.print(n2);
	System.out.println("is the smallest integer");
	}
		if((n3 < n1) && (n3 < n2))
	{
	System.out.println(n3);
	System.out.println(" is the smallest intger");
	}
	}
}
