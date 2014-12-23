// Third Program: Simple Calculator
// Author: Paul Maddox
// Date: 1/23/2014

#include<stdio.h>

int main () 
{
	//establish variables
	float add1 = 0;
	float add2 = 0;
	
	float sub1 = 0;
	float sub2 = 0;
	
	float mul1 = 0;
	float mul2 = 0;
	
	float div1 = 0;
	float div2 = 0;
	
	int mod1 = 0;
	int mod2 = 0;
	
	int pri1 = 0;
	int c = 0;
	
	//Main Menu for Calculator
	
	int iresponse1 = 0;
	
	printf("\n\nSimple Calculator Menu:\n");
	
	printf("\n(1)\tAddition\n");
	printf("(2)\tSubtraction\n");
	printf("(3)\tMultiplication\n");
	printf("(4)\tDivision\n");
	printf("(5)\tModulus (Integers Only)\n");
	printf("(6)\tTest if Prime (Integers Only)\n");
	printf("(7)\tExit\n");
	
	printf("\nPlease choose an operation: ");
	scanf("%d", &iresponse1);
	
	
	
	
		switch (iresponse1)	{
						
			case 1: //Addition
				
				printf("\nEnter the First Number: ");
				scanf("%f", &add1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &add2);
				
				printf("\n%.2f + %.2f = %.2f",
					add1, add2, add1 + add2);
				return main ();
				break;
				
					
			case 2: //Subtraction
				
				printf("\nEnter the First Number: ");
				scanf("%f", &sub1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &sub2);
				
				printf("\n%.2f - %.2f = %.2f",
					sub1, sub2, sub1 - sub2);
				return main ();
				break;
				
			case 3: //Multiplication
				
				printf("\nEnter the First Number: ");
				scanf("%f", &mul1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &mul2);
				
				printf("\n%.2f X %.2f = %.2f",
					mul1, mul2, mul1 * mul2);
				return main ();
				break;
								
			case 4: //Division
				
				printf("\nEnter the First Number: ");
				scanf("%f", &div1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &div2);
				
				printf("\n%.2f / %.2f = %.2f",
					div1, div2, div1 / div2);
				return main ();
				break;
							
			case 5: //Modulus
				
				printf("\nEnter the First Number: ");
				scanf("%d", &mod1);
					if (mod1 < 0) {	
						mod1 = mod1 * (-1);
					}
					
				printf("\nEnter the Second Number: ");
			  	scanf("%d", &mod2);
					if (mod2 < 0) {	
						mod2 = mod2 * (-1);
					}
			
				printf("\n%d mod %d = %d",
					mod1, mod2, mod1 % mod2);
				return main ();
				break;
			
			case 6: //Prime
			
				printf("\nEnter a number to be tested: ");		
				scanf("%d", &pri1);
					for (c = 2; c <= pri1 - 1; c++) {
						if (pri1%c == 0) {
							printf("%d = %d X %d\n", pri1, c, pri1 / c);
							printf("%d is not prime.\n", pri1);
							break;
						}
					}		
					if (c == pri1)
						printf("%d is prime.\n", pri1);
						return main ();
						break;
			
			case 7: //Exit
				
				printf("Good Bye!\n");
				return 0;
				break;
		
		
			default:
				
				printf("\nYou have entered an invalid input character.  Please try again.\n\n");
				return main ();
				break;
				
		} //End Switch
					
	
}
