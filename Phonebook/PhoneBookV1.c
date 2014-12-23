// PhoneBook
// Author: Paul Maddox 
// Date: 2/25/14
    
    
#include <stdio.h>
#include <stdlib.h>

//Function Phototypes    
void AddEntry();
void RemoveEntry();
void ShowEntry();
    
    typedef struct {
            char *FirstName;
            char *LastName;
            char *PhoneNumber;
            } PhoneBook;
            
    PhoneBook *pb; //Pointer
    
    int counter = 0;
    
    main() {
           
		   int iResponse = 0;
           
           if (counter == 0) {
            pb = (PhoneBook *) malloc(sizeof(PhoneBook) + (counter*50) + 50);
         }
		 else {
            pb = (PhoneBook *) realloc(pb, sizeof(PhoneBook) + (counter*50) + 50);
         }
         
         if (pb == NULL) {
                printf("Unable to add contact due to lack of memory.\n");
         }
		  
		   
                 printf("\nPhone Book Application\n\n");
                 printf("\n(1)\tAdd Contact\n");
                 printf("\n(2)\tRemove Contact\n");
                 printf("\n(3)\tShow Phonebook\n");
                 printf("\n(4)\tExit\n");
                 
                 printf("\nWhat do you want to do? ");
                 scanf("%d", &iResponse);
                 
                 
           switch (iResponse) {
                  case 1:
                       AddEntry();
                  
					   return main ();
                       break;
                  
				  case 2:
                       RemoveEntry();
                       
					   return main ();
                       break;
                  
				  case 3:
                       ShowEntry();
                      
					   return main ();
                       break;
                  
				  case 4:
                       printf("\nGood Bye!\n");
                       
					   return 0;
                       break;
                    
                  default: // Invalid Inputs
					   printf("\nYou have entered an invalid input character.  Please try again.\n\n");
				
				       return main ();
				       break;  
                 }
           
           
           pb = NULL;
           free(pb);     
           
    }

    void AddEntry() {
                      
        
             pb[counter].FirstName = (char *) malloc(sizeof(char) * 15);
             pb[counter].LastName = (char *) malloc(sizeof(char) * 15);
             pb[counter].PhoneNumber = (char *) malloc(sizeof(char) * 10);
             printf("\nFirst Name: ");
             scanf("%s", pb[counter].FirstName);
             printf("\nLast Name: ");
             scanf("%s", pb[counter].LastName);
             printf("\nPhone Number: ");
             scanf("%s", pb[counter].PhoneNumber);
             
             counter++;
             printf("\nRecord added to the phone book!\n\n");
         
    }
    
    void RemoveEntry() {
         char *fName = (char *) malloc(sizeof(char) * 15);;
         char *lName = (char *) malloc(sizeof(char) * 15);;
         int i;
         int isRemoved = 0;
         
         printf("\nFirst Name (Case-Sensitive): ");
         scanf("%s", fName);
         printf("\nLast Name (Case-Sensitive): ");
         scanf("%s", lName);
         
         for (i = 0; i < counter; i++) {
             if ((strcmp(pb[i].FirstName, fName) == 0) && (strcmp(pb[i].LastName, lName) == 0)) {
                pb[i].FirstName = NULL;
                pb[i].LastName = NULL;
                pb[i].PhoneNumber = NULL;
                isRemoved = 1;
                break;                     
             } 
         }
         
         if (isRemoved == 1) {
            printf("\nRecord deleted from the phone book.\n\n");
         } else {
            printf("\nRecord not Found.\n\n");
         }
    }
    
    void ShowEntry() {
         int i;
         int printed = 0;
         
         printf("\n\tPhone Book: \n");
         for (i = 0; i < counter; i++) {
             if ((pb[i].FirstName != NULL) && (pb[i].LastName != NULL) && (pb[i].PhoneNumber != NULL)) {
                printf("\n(%d)\t%s\t%s\t%s\n", printed + 1, pb[i].FirstName, pb[i].LastName, pb[i].PhoneNumber);
                printed++;
             } 
         }
         printf("\n");
         if (!printed) {
            printf("No Entries Found!\n\n");
            }
    }
