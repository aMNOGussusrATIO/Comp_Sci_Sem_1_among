import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	Scanner sc = new Scanner(System.in);
	System.out.println("What do you want to be called?");
	String pn = sc.nextLine();
	System.out.println("ok " + pn + "! Do you want to be a wizard, warrior, or a rogue?");

	String pr = sc.nextLine();
	if(!((pr.equals("wizard")) || (pr.equals("rogue")) || (pr.equals("warrior"))))
	{
	System.out.println("incorrect input");
	}
	if((pr.equals("wizard")))
	{
	System.out.println("ok, wizard it is!");
	}
	if((pr.equals("warrior")))
	{
	System.out.println("ok, warrior it is!");
	}
	if((pr.equals("rogue")))
	{
	System.out.println("ok, rogue it is!");
	}
	int sp = 25;
	System.out.println("You have " + sp + " stat points!");
	System.out.println("You can spend a maximum of 10 stat points on 1 trait.");
	System.out.println("There are 5 traits: strength, dexterity, intelligence, constitution.");
	System.out.println("Would you like to spend your stat points right now? y/n");
	String s1 = sc.nextLine();
	if((s1.equals("y")))
	{
	System.out.println("Ok! Which trait would you like?: strength, dexterity, intelligence, constitution");
	String b1 = sc.nextLine();
	if(!((b1.equals("strength")) || (b1.equals("dexterity")) || (b1.equals("intelligence")) || (b1.equals("constitution"))))
	{
	System.out.println("incorrect input");
	}
	if(((b1.equals("strength")) || (b1.equals("dexterity")) || (b1.equals("intelligence")) || (b1.equals("constitution"))))
	{
	System.out.println("Ok! " + b1 + " it is! How many points would you like to spend on that trait? (max 10)");
	int ap = sc.nextInt();
	boolean bn;
	bn = (ap <= 10);
	if((bn))
	{
	boolean bn1;
	bn1 = (sp - ap > 0);
	if ((bn1))
	{
	System.out.println("You have " + (sp - ap) + " points left, would you like to spend it on another trait? y/n");
	String s2 = sc.nextLine();
	}
	}
	else
	{
	System.out.println("The max number of points you can spend on 1 trait is 10!");
	}
	}
	System.out.println("");
	String s1 = sc.nextLine();
	if((s1.equals("y")))
	{
	System.out.println("Ok! Which trait would you like?: strength, dexterity, intelligence, constitution");
	String b1 = sc.nextLine();
	if(!((b1.equals("strength")) || (b1.equals("dexterity")) || (b1.equals("intelligence")) || (b1.equals("constitution"))))
	{
	System.out.println("incorrect input");
	}
	if(((b1.equals("strength")) || (b1.equals("dexterity")) || (b1.equals("intelligence")) || (b1.equals("constitution"))))
	{
	System.out.println("Ok! " + b1 + " it is! How many points would you like to spend on that trait? (max 10)");
	int ap = sc.nextInt();
	boolean bn;
	bn = (ap <= 10);
	if((bn))
	{
	boolean bn1;
	bn1 = (sp - ap > 0);
	if ((bn1))
	{
	System.out.println("You have " + (sp - ap) + " points left, would you like to spend it on another trait? y/n");
	String s2 = sc.nextLine();
	}
	}
	else
	{
	System.out.println("The max number of points you can spend on 1 trait is 10!");
	}
	}
	}
	}
	}
}
