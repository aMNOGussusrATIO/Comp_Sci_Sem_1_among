import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Do you want to be a wizard, warrior, or a rogue?");
	String p1 = sc.nextLine();
	if(!((p1.equals("wizard")) || (p1.equals("rogue")) || (p1.equals("warrior"))))
	{
	System.out.println("incorrect input");
	}
	if((p1.equals("wizard")))
	{
	System.out.println("ok, wizard it is!");
	}
	if((p1.equals("warrior")))
	{
	System.out.println("ok, warrior it is!");
	}
	if((p1.equals("rogue")))
	{
	System.out.println("ok, rogue it is!");
	}
	}
}
