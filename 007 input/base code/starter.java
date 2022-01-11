import java.util.Scanner;

class starter {
	public static void main(String args[]) {

		Scanner sc = new Scanner(System.in);
		System.out.print("What's your periods 1-3? ");
		String p1 = sc.nextLine();
		System.out.print("GPA for period 1? ");
		double p1gpa = sc.nextInt();
		System.out.print("GPA for period 2? ");
		double p2gpa = sc.nextInt();
    	System.out.print("GPA for period 3? ");
		double p3gpa = sc.nextInt();
		System.out.print("total GPA - " + ((p1gpa+p2gpa+p3gpa)/3.0));
	}
}
