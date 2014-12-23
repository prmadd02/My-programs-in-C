// Fourth Program: Advanced Calculator
// Author: Paul Maddox
// Date: 1/30/2014

#include<stdio.h>

	void addition(float, float);
	
	void subtraction(float, float);
	
	void multiplication(float, float);
	
	void division(float, float);
	
	void modulus(int, int);
	
	void prime(int);

	void factorial(int);

	void exponent(float, float);

	void fibonacci(int);
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
	
	int fact = 1;
	int count = 1;
	int fact1 = 1;
	
	float base = 0;
	float power = 0;
	float exp = 0;
	
	int number = 0;
	int cat = 0;
	long int arr[100]; 
	
	
	//Main Menu for Calculator
	
	int iresponse1 = 0;
	
	printf("\n\nAdvanced Calculator Menu:\n");
	
	printf("\n(1)\tAddition\n");
	printf("(2)\tSubtraction\n");
	printf("(3)\tMultiplication\n");
	printf("(4)\tDivision\n");
	printf("(5)\tModulus (Integers Only)\n");
	printf("(6)\tTest if Prime (Integers Only)\n");
	printf("(7)\tFactorial (Integers Only)\n");
	printf("(8)\tPower\n");
	printf("(9)\tFibonacci\n");
	printf("(0)\tExit\n");
	
	printf("\nPlease choose an operation: ");
	scanf("%d", &iresponse1);
	
	
	
	
		switch (iresponse1)	{
						
			case 1: //Addition
				
				printf("\nEnter the First Number: ");
				scanf("%f", &add1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &add2);
				
				addition (add1, add2);
				
				return main ();
				break;
				
					
			case 2: //Subtraction
				
				printf("\nEnter the First Number: ");
				scanf("%f", &sub1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &sub2);
				
				subtraction (sub1, sub2);
				
				return main ();
				break;
				
			case 3: //Multiplication
				
				printf("\nEnter the First Number: ");
				scanf("%f", &mul1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &mul2);
				
				multiplication (mul1, mul2);
				
				return main ();
				break;
								
			case 4: //Division
				
				printf("\nEnter the First Number: ");
				scanf("%f", &div1);
				
				printf("\nEnter the Second Number: ");
				scanf("%f", &div2);
				
				division (div1, div2);
				
				return main ();
				break;
							
			case 5: //Modulus
				
				printf("\nEnter the First Number: ");
				scanf("%d", &mod1);
									
				printf("\nEnter the Second Number: ");
			  	scanf("%d", &mod2);
					
				modulus (mod1, mod2);	
								
				return main ();
				break;
			
			case 6: //Prime
			
				printf("\nEnter a number to be tested: ");		
				scanf("%d", &pri1);
				
				prime (pri1);
				
				return main ();
				break;
			
			case 7: //Factorial
			
				printf("\nEnter a number to calculate it's factorial: ");
				scanf("%d", &fact1);
					
				factorial (fact1);	
					
				return main ();
				break;
			
			case 8: //Power
			
				printf("\nPlease enter the number for your base: ");
				scanf("%f", &base);
				
				printf("\nPlease enter the number for your exponent: ");
				scanf("%f", &power);
					
				exponent (base, power);		
					
				return main ();
				break;
				
			case 9: //Fibonacci
			
				printf("\nPlease enter the number of terms: ");
				scanf("%d", &number);
				
				fibonacci (number);
				
				return main ();
				break;
				
			case 0: //Exit
			
				
				printf("Good Bye!\n");
				return 0;
				break;
		
		
			default:
				
				printf("\nYou have entered an invalid input character.  Please try again.\n\n");
				return main ();
				break;
				
		} //End Switch
					
	
}
void addition(float add1, float add2){
	printf("\n%.2f + %.2f = %.2f",
			add1, add2, add1 + add2);
}
void subtraction(float sub1, float sub2) {
	printf("\n%.2f - %.2f = %.2f",
			sub1, sub2, sub1 - sub2);
}
void multiplication(float mul1, float mul2) {
	printf("\n%.2f X %.2f = %.2f",
			mul1, mul2, mul1 * mul2);
}
void division(float div1, float div2) {
	printf("\n%.2f / %.2f = %.2f",
			div1, div2, div1 / div2);
}
void modulus(int mod1, int mod2) {
		if (mod1 < 0) {	
			mod1 = mod1 * (-1);}
		if (mod2 < 0) {	
			mod2 = mod2 * (-1);}
		printf("\n%d mod %d = %d",
			mod1, mod2, mod1 % mod2);
}
void prime(int pri1) {
	int c = 0;
		for (c = 2; c <= pri1 - 1; c++) {
			if (pri1%c == 0) {
				printf("%d = %d X %d\n", pri1, c, pri1 / c);
				printf("%d is not prime.\n", pri1);
				break;
						}
					}		
			if (c == pri1)
				printf("%d is prime.\n", pri1);
}
void factorial(int fact1) {
	int count = 1; 
	int fact = 1;
		for (count = 1; count <= fact1; count++)
						fact = fact * count;
			printf("Factorial of %d = %d\n", fact1, fact);
}
void exponent(float base, float power) {
	float exp = 1;
	int count = 1; 
		for (count = 0; count < power; count++)
			{exp *= base;}
		printf("\n%.2f raised to the power of %.2f is %.2f", base, power, exp);
}
void fibonacci (int n) {
	int iresults[n], cat;
             iresults[0] = 0;
             iresults[1] = 1;
             for(cat = 2; cat < n; cat++){
                      iresults[cat] = iresults[cat-1] + iresults[cat-2];
                      }
             for(cat = 0; cat < n; cat++){
                   printf("%d ", iresults[cat]);}
                    
}
