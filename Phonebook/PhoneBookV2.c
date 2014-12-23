// Eighth Program: Advanced PhoneBook
// Author: Paul Maddox 
// Date: 3/5/14

    
#include <stdio.h>
#include <stdlib.h>

//Function Phototypes    
void AddEntry();
void RemoveEntry();
void ShowEntry();
void SortEntry();
void FindEntry();
void DisplayRandom();
void DeleteAll();
void Open ();
void Save ();

    
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
                return 0;
         }
		  
		   		//Main Menu
                 printf("\nPhone Book Application\n\n");
                 printf("\n(1)\tAdd Contact\n");
                 printf("\n(2)\tRemove Contact\n");
                 printf("\n(3)\tShow Phonebook\n");
                 printf("\n(4)\tSort by First\\Last Name\n");
                 printf("\n(5)\tSearch Phonebook\n");
                 printf("\n(6)\tDisplay a Random Friend\n");
                 printf("\n(7)\tDelete All Friends\n");
                 printf("\n(8)\tOpen Phonebook\n");
                 printf("\n(9)\tSave Phonebook\n");
                 printf("\n(0)\tExit\n");
                 
                 printf("\nWhat do you want to do? ");
                 scanf("%d", &iResponse);
                 
                 
           switch (iResponse) { //Function Calls
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
                  	   SortEntry();
                  	   
                  	   return main ();
                  	   break;
                  	   
                  case 5:
                  	   FindEntry();
                  	   
                  	   return main();
                  	   break;
                  
                  case 6:
                  	   DisplayRandom();
                  	   
                  	   return main();
                  	   break;
                
                  case 7:
                  	   DeleteAll();
                  	   
                  	   return main();
                  	   break;
                  
				  case 8:
				  	   Open();
                  	   
                  	   return main ();
                  	   break;
                       
                  case 9:
                  	   Save();
                  	   
                  	   return main ();
                  	   break;
                  
                  case 0:
                       printf("\nGood Bye!\n");
                       
					   return 0;
                       break;
                    
                  default: // Invalid Inputs
					   printf("\n\nYou have entered an invalid input character.  Please try again.\n\n");
				
				       return main ();
				       break;  
                 }
           
           
           pb = NULL;
           free(pb);     
           
    }
	//Functions
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
            printf("\nNo Entries Found!\n\n");
            }
    }
    
    void SortEntry() {
    	int a;
		int b;
		int i;
		int printed = 0;
		PhoneBook *temp;
		temp = (PhoneBook *) malloc(sizeof(PhoneBook) + 50);
		int type = 0;
		system("cls");
			if (counter == 0) {
				printf("The Phonebook is Empty!\n");
			}
			else {
				printf("\nSort by:\n\n");
                 printf("\n(1)\tFirst Name\n");
                 printf("\n(2)\tLast Name\n");
                 printf("\nPlease make a choice: ");
                 scanf("%d", &type);
                 
                 switch(type) {
                 			case 1:
                 				for(a = 0; a < counter; a++) {
                 					for (b = 0; b < counter; b++) {
                 						if(strcmp(pb[a].FirstName, pb[b].FirstName) < 0) {
                 							temp [0] = pb[a];
                 							pb[a] = pb[b];
                 							pb[b] = temp[0];
                 							
                 						}
                 					}
                 				}
                 				
                 				printf("\n\n\tPhone Book: \n");
         							for (i = 0; i < counter; i++) {
             							if ((pb[i].FirstName != NULL) && (pb[i].LastName != NULL) && (pb[i].PhoneNumber != NULL)) {
                						printf("\n(%d)\t%s\t%s\t%s\n", printed + 1, pb[i].FirstName, pb[i].LastName, pb[i].PhoneNumber);
                						printed++;
             							} 
         							 }
         							if (!printed) {
            						printf("\nNo Entries Found!\n\n");
            						}
            					break;	
            				 
							 case 2:
            				 	for(a = 0; a < counter; a++) {
                 					for (b = 0; b < counter; b++) {
                 						if(strcmp(pb[a].LastName, pb[b].LastName) < 0) {
                 							temp [0] = pb[a];
                 							pb[a] = pb[b];
                 							pb[b] = temp[0];
                 							
                 						}
                 					}
                 				}
                 				printf("\n\tPhone Book: \n");
         							for (i = 0; i < counter; i++) {
             							if ((pb[i].FirstName != NULL) && (pb[i].LastName != NULL) && (pb[i].PhoneNumber != NULL)) {
                						printf("\n(%d)\t%s\t%s\t%s\n", printed + 1, pb[i].FirstName, pb[i].LastName, pb[i].PhoneNumber);
                						printed++;
             							} 
         							 }
         							if (!printed) {
            						printf("\nNo Entries Found!\n\n");
            						}
            						break;
                 }
                 
			}
    }
void FindEntry() {
	system("cls");
	if (counter == 0) {
		printf("\nThe phonebook is empty.\n");
	}
	else{
		char *fName = (char *) malloc(sizeof(char) * 15);;
    	char *lName = (char *) malloc(sizeof(char) * 15);;
        int i;
        int isFound = 0;
		
		printf("\nFirst Name: ");
    	scanf("%s", fName);
        printf("\nLast Name: ");
        scanf("%s", lName);	
		
		for (i = 0; i < counter; i++) {
            if ((strcmp(pb[i].FirstName, fName) == 0) && (strcmp(pb[i].LastName, lName) == 0)) {
                 printf("\n%s\t%s\t%s\n\n", pb[i].FirstName, pb[i].LastName, pb[i].PhoneNumber);
                 isFound = 1;
                 break;
                 }
             }

             if (isFound == 0) {
                printf("\n%s %s was not Found.\n\n", fName, lName);
             }	
	}
}

void DisplayRandom() {
	int r = 0;
         system("cls");
         if (counter == 0){
                   printf("\nThe Phonebook is Empty.\n");
         } 
		 else {
             r = rand()%counter;
             printf("%s\t%s\t%s\n\n", pb[r].FirstName, pb[r].LastName, pb[r].PhoneNumber);
         }
}

void DeleteAll() {
     system("cls");
         if (counter == 0) {
             printf("\nThe Phonebook is empty.\n");
         }
         
         free(pb);
         pb = 0;
         counter = 0;

         if (pb == 0) {
             printf("\nThe Phonebook has been completely deleted.\n");
         }
}

void Open() {
	char* path[100];
	int response;
         FILE *pRead;
         printf("ould you like to define where your Phonebook is saved?\n(0)\t No\n\t(1) - Yes\n");
         scanf("%d", &response);
         if (response == 1) {
            printf("Where is the phonebook located?\n(Default is Current Folder)\n");
            scanf("%s", path);
            pRead = fopen(path, "r");
            } else 
			  {
              pRead = fopen("phonebook.txt", "r");
              }
         if (pRead == NULL) {
            printf("Phonebook cannot be opened.\n");
            } else 
			{
              counter = 0;
              free(pb);
              pb = NULL;
              while (!feof(pRead)) {
                    if (counter == 0) {
                       pb = (PhoneBook *) malloc(sizeof(PhoneBook) + (counter*50) + 50);
                    } else {
                       pb = (PhoneBook *) realloc(pb, sizeof(PhoneBook) + (counter*50) + 50);
                    }
                    
                    if (pb == NULL) {
                       printf("You cannot add more friends because: OUT OF MEMORY\n");
                       } else {
                         pb[counter].FirstName = (char *) malloc(sizeof(char) * 15);
                         pb[counter].LastName = (char *) malloc(sizeof(char) * 15);
                         pb[counter].PhoneNumber = (char *) malloc(sizeof(char) * 10);
                         fscanf(pRead, "%s %s %s\n", pb[counter].FirstName, pb[counter].LastName, pb[counter].PhoneNumber);
                         counter++;
                         }
                    }
            fclose(pRead);
            printf("Phonebook opened sucessfully.\n");
            }
         }

void Save() {
         char* path[100];
         int response;
         FILE *pWrite;
         printf("Would you like to define where your Phonebook is saved?\n(0) - No\n(1) - Yes\n");
         scanf("%d", &response);
         if (response == 1) {
            printf("Where would you like to save your Phonebook?\n(Default is Current Folder)\n");
            scanf("%s", path);
            pWrite = fopen(path, "w");
            } else {
              pWrite = fopen("phonebook.txt", "w");
              }
         
         if (pWrite == NULL) {
            printf("Phonebook cannot be saved.\n");
            } else 
			{
              int i;
              for (i = 0; i < counter; i++) {
                  if (pb[i].FirstName != NULL && pb[i].LastName != NULL && pb[i].PhoneNumber != NULL) {
                          fprintf(pWrite, "%s %s %s\n", pb[i].FirstName, pb[i].LastName, pb[i].PhoneNumber);
                  }
              }
              fclose(pWrite);
              printf("Phonebook saved sucessfully.\n");
            }
}
