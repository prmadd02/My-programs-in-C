// Story Generator
// Author: Paul Maddox 
// Date: 2/11/14

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Strings and Arrays
char color[14] = {'\0'};
char* ac = color;

char name[30] = {'\0'};
char* an = name;

int age[4] = {'\0'};
int* p = age;

char* car[8]={"Mustang","Ferrari","Lamborghini","Mercedes","McLaren","BMW","Audi","Prius"};

main() {
	
	// Establish Varriables and Random Number Generators
	int irandom = 0;
	int irancar = 0;
	
	srand(time(NULL));
	irandom = rand() % 3 + 1;
	irancar = rand() % 8 + 1;
	int iresponse1 = 0;		
	
	// Main Menu
	printf("Welcome to the Story Generator\n");
	printf("\n(1)\tCreate a New Story.\n");
	printf("\n(2)\tExit the Program.\n");
	printf("\nPlease choose an option: ");
		scanf("%d", &iresponse1);
		
	switch (iresponse1) {
		
		case 1: // Story Generator 
		
			printf ("\nWhat is your name? ");
				scanf ("%s", name);
			
			printf ("\nHow old are you? ");
				scanf ("%s", age);
			
			printf ("\nWhat's your favorite color? ");
				scanf ("%s", color);
			
				switch (irandom) { //Switch for Stories
					
					case 1: 
						
						printf ("\nHello, %s. You are a patient in a doctor's office which involves wiring yourself to a machine.\n", an);
						
						printf ("\nAs the conversation continues, it becomes clear that the doctor's office is in a prison and this is part of the release procedure.\n");
						
						printf ("\nYou have just been acquitted, and the prison wants to make sure that at the age of %s you are healthy before they turn you lose with your brand new %s.\n", p, car[irancar]);

						printf ("\nFinally, the doctor tells you to hold still, and pushes the %s button. There is an instant of surprise on your face as you slump over dead.\n", ac);

						printf ("\nSorry, %s. It turns out that you were actually convicted, not acquitted--but didn't know it.\n", an);
						
						printf ("\nIt was decided that although it was necessary to execute criminals, you could at least be spared the horror of knowing that you were about to be executed.\n\n");
						return main();
						break;
						
					case 2:
						
						printf ("\nHello, %s. You decide that at the age of %s, you decide to have another kid.\n", an, p);
						
						printf ("\nAbout a week after the baby comes home from the hospital--a week of extreme sleep deprivation for both you and your significant other--you decide you need a little break.\n");
						
						printf ("\nYou decide to get in your %s go out and buy a %s colored stasis box. You get home and put the baby in stasis for two days while you recover. Then take the baby out and continue.\n", car[irancar], ac);
						
						printf ("\nGradually, the breaks get longer since babies are a lot of work, and suddenly %s you are 84 with a 2 year old child. Congratulations!!\n\n", an); 
						return main();
						break;	
						
						
					case 3:
						
						printf ("\nHello, %s. You are a IT professional and you have just learned that their is %s million dollars that hackers are attempting to steal from a computer.\n", an, p);
						
						printf ("\nYou quickly put on your %s jumpsuit and %s mask and quickly get to work.\n", ac, ac);
						
						printf ("\nAfter successfully completing your mission. Suddenly, the people who hired you are now after you.\n");
						
						printf ("\nAs it turns out, you successfully stopped the hackers by stealing the %s million dollars for yourself and your now on the run in your %s. Good Luck!!\n\n", p, car[irancar]);
						return main();
						break;
					
					}
			
				
		case 2: // Exit
			printf("\nGood Bye!\n");
				
				return 0;
				break;
		
		default: // Invalid Inputs
			printf("\nYou have entered an invalid input character.  Please try again.\n\n");
				
				return main ();
				break;
	}
}
