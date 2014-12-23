// Second Program: Currency Converter
// Author: Paul Maddox
// Date: 01/16/2014

#include<stdio.h>

int main()
{
	//variable declarations and initializations
	//currency conversions good as of 1/16/14
	
	//US Dollar (USD)
	const float USDtoUSD = 1;
	const float USDtoGBP = 0.608568;
	const float USDtoIND = 61.639158;
	const float USDtoEUR = 0.738441;
	const float USDtoMEX = 13.268126;
	const float USDtoBRA = 2.354043;
	const float USDtoEMI = 3.672950;
	
	//British Pound (GBP)
	const float GBPtoUSD = 1.642709;
	const float GBPtoGBP = 1;
	const float GBPtoIND = 101.339043;
	const float GBPtoEUR = 1.213342;
	const float GBPtoMEX = 21.806941;
	const float GBPtoBRA = 3.862521;
	const float GBPtoEMI = 6.033587;
	
	//Indian Rupee (IND)
	const float INDtoUSD = 0.016230;
	const float INDtoGBP = 0.009880;
	const float INDtoIND = 1;
	const float INDtoEUR = 0.011998;
	const float INDtoMEX = 0.215589;
	const float INDtoBRA = 0.038186;
	const float INDtoEMI = 0.059611;
	
	//Euro (EUR)
	const float EURtoUSD = 1.352846;
	const float EURtoGBP = 0.823662;
	const float EURtoIND = 83.355614;
	const float EURtoEUR = 1;
	const float EURtoMEX = 17.964676;
	const float EURtoBRA = 3.180740;
	const float EURtoEMI = 4.968936;
	
	//Mexican Peso (MEX)
	const float MEXtoUSD = 0.075258;
	const float MEXtoGBP = 0.045819;
	const float MEXtoIND = 4.637016;
	const float MEXtoEUR = 0.055617;
	const float MEXtoMEX = 1;
	const float MEXtoBRA = 0.176850;
	const float MEXtoEMI = 0.276419; 
	
	//Brazilian Real (BRA)
	const float BRAtoUSD = 0.425158;
	const float BRAtoGBP = 0.258943;
	const float BRAtoIND = 26.196112;
	const float BRAtoEUR = 0.314243;
	const float BRAtoMEX = 5.647925;
	const float BRAtoBRA = 1;
	const float BRAtoEMI = 1.561584;
	
	//Emirati Dirham (EMI)
	const float EMItoUSD = 0.272261;
	const float EMItoGBP = 0.165856;
	const float EMItoIND = 16.775345;
	const float EMItoEUR = 0.201224;
	const float EMItoMEX = 3.615307;
	const float EMItoBRA = 0.639991;
	const float EMItoEMI = 1;
	
	
	
		float ioperand1 = 0;
		int iresponse1 = 0;
		
			printf("Welcome to the Currency Converter.\n");
		
			printf("\n1\tUS Dollar (USD)\n");
			printf("2\tBritish Pound (GBP)\n");
			printf("3\tIndian Rupee (IND)\n");
			printf("4\tEuro (EUR)\n");
			printf("5\tMexican Peso (MEX)\n");
			printf("6\tBrazilian Real (BRA)\n");
			printf("7\tEmirati Dirham (EMI)\n\n");
		
			printf("Please select your inital currency (1-7): ");
			scanf("%d", &iresponse1);
		
			printf("\nAmount: ");
			scanf("%f", &ioperand1);		
		
		switch (iresponse1)	{
			
			case 1:
				printf("\n:       |       USD:       GBP:       IND:       EUR:       MEX:       BRA:      EMI:");  
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * USDtoUSD, ioperand1 * GBPtoUSD, ioperand1 * INDtoUSD, ioperand1 * EURtoUSD, ioperand1 * MEXtoUSD, ioperand1 * BRAtoUSD, ioperand1 * EMItoUSD);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * USDtoGBP, ioperand1 * GBPtoGBP, ioperand1 * INDtoGBP, ioperand1 * EURtoGBP, ioperand1 * MEXtoGBP, ioperand1 * BRAtoGBP, ioperand1 * EMItoGBP);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * USDtoIND, ioperand1 * GBPtoIND, ioperand1 * INDtoIND, ioperand1 * EURtoIND, ioperand1 * MEXtoIND, ioperand1 * BRAtoIND, ioperand1 * EMItoIND);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * USDtoEUR, ioperand1 * GBPtoEUR, ioperand1 * INDtoEUR, ioperand1 * EURtoEUR, ioperand1 * MEXtoEUR, ioperand1 * BRAtoEUR, ioperand1 * EMItoEUR); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * USDtoMEX, ioperand1 * GBPtoMEX, ioperand1 * INDtoMEX, ioperand1 * EURtoMEX, ioperand1 * MEXtoMEX, ioperand1 * BRAtoMEX, ioperand1 * EMItoMEX); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * USDtoBRA, ioperand1 * GBPtoBRA, ioperand1 * INDtoBRA, ioperand1 * EURtoBRA, ioperand1 * MEXtoBRA, ioperand1 * BRAtoBRA, ioperand1 * EMItoBRA);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * USDtoEMI, ioperand1 * GBPtoEMI, ioperand1 * INDtoEMI, ioperand1 * EURtoEMI, ioperand1 * MEXtoEMI, ioperand1 * BRAtoEMI, ioperand1 * EMItoEMI); 
				printf("\n-------------------------------------------------------------------------------------");
					break;
			
			case 2:
				printf("\n:       |       GBP:       IND:       EUR:       MEX:       BRA:       EMI:      USD:");  
				printf("\n-------------------------------------------------------------------------------------");
    			                    
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * GBPtoGBP, ioperand1 * INDtoGBP, ioperand1 * EURtoGBP, ioperand1 * MEXtoGBP, ioperand1 * BRAtoGBP, ioperand1 * EMItoGBP, ioperand1 * USDtoGBP);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * GBPtoIND, ioperand1 * INDtoIND, ioperand1 * EURtoIND, ioperand1 * MEXtoIND, ioperand1 * BRAtoIND, ioperand1 * EMItoIND, ioperand1 * USDtoIND);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * GBPtoEUR, ioperand1 * INDtoEUR, ioperand1 * EURtoEUR, ioperand1 * MEXtoEUR, ioperand1 * BRAtoEUR, ioperand1 * EMItoEUR, ioperand1 * USDtoEUR);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * GBPtoMEX, ioperand1 * INDtoMEX, ioperand1 * EURtoMEX, ioperand1 * MEXtoMEX, ioperand1 * BRAtoMEX, ioperand1 * EMItoMEX, ioperand1 * USDtoMEX); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * GBPtoBRA, ioperand1 * INDtoBRA, ioperand1 * EURtoBRA, ioperand1 * MEXtoBRA, ioperand1 * BRAtoBRA, ioperand1 * EMItoBRA, ioperand1 * USDtoBRA); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * GBPtoEMI, ioperand1 * INDtoEMI, ioperand1 * EURtoEMI, ioperand1 * MEXtoEMI, ioperand1 * BRAtoEMI, ioperand1 * EMItoEMI, ioperand1 * USDtoEMI);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * GBPtoUSD, ioperand1 * INDtoUSD, ioperand1 * EURtoUSD, ioperand1 * MEXtoUSD, ioperand1 * BRAtoUSD, ioperand1 * EMItoUSD, ioperand1 * USDtoUSD); 
				printf("\n-------------------------------------------------------------------------------------");
					break;
			
			case 3:
				printf("\n:       |       IND:       EUR:       MEX:       BRA:       EMI:       USD:      GBP:");  
				printf("\n-------------------------------------------------------------------------------------");
    			                    
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * INDtoIND, ioperand1 * EURtoIND, ioperand1 * MEXtoIND, ioperand1 * BRAtoIND, ioperand1 * EMItoIND, ioperand1 * USDtoIND, ioperand1 * GBPtoIND);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * INDtoEUR, ioperand1 * EURtoEUR, ioperand1 * MEXtoEUR, ioperand1 * BRAtoEUR, ioperand1 * EMItoEUR, ioperand1 * USDtoEUR, ioperand1 * GBPtoEUR);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * INDtoMEX, ioperand1 * EURtoMEX, ioperand1 * MEXtoMEX, ioperand1 * BRAtoMEX, ioperand1 * EMItoMEX, ioperand1 * USDtoMEX, ioperand1 * GBPtoMEX);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * INDtoBRA, ioperand1 * EURtoBRA, ioperand1 * MEXtoBRA, ioperand1 * BRAtoBRA, ioperand1 * EMItoBRA, ioperand1 * USDtoBRA, ioperand1 * GBPtoBRA); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * INDtoEMI, ioperand1 * EURtoEMI, ioperand1 * MEXtoEMI, ioperand1 * BRAtoEMI, ioperand1 * EMItoEMI, ioperand1 * USDtoEMI, ioperand1 * GBPtoEMI); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * INDtoUSD, ioperand1 * EURtoUSD, ioperand1 * MEXtoUSD, ioperand1 * BRAtoUSD, ioperand1 * EMItoUSD, ioperand1 * USDtoUSD, ioperand1 * GBPtoUSD);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * INDtoGBP, ioperand1 * EURtoGBP, ioperand1 * MEXtoGBP, ioperand1 * BRAtoGBP, ioperand1 * EMItoGBP, ioperand1 * USDtoGBP, ioperand1 * GBPtoGBP); 
				printf("\n-------------------------------------------------------------------------------------");
					break;
				
			case 4:
				printf("\n:       |       EUR:       MEX:       BRA:       EMI:       USD:       GBP:      IND:");  
				printf("\n-------------------------------------------------------------------------------------");
    			                    
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * EURtoEUR, ioperand1 * MEXtoEUR, ioperand1 * BRAtoEUR, ioperand1 * EMItoEUR, ioperand1 * USDtoEUR, ioperand1 * GBPtoEUR, ioperand1 * INDtoEUR);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EURtoMEX, ioperand1 * MEXtoMEX, ioperand1 * BRAtoMEX, ioperand1 * EMItoMEX, ioperand1 * USDtoMEX, ioperand1 * GBPtoMEX, ioperand1 * INDtoMEX);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EURtoBRA, ioperand1 * MEXtoBRA, ioperand1 * BRAtoBRA, ioperand1 * EMItoBRA, ioperand1 * USDtoBRA, ioperand1 * GBPtoBRA, ioperand1 * INDtoBRA);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EURtoEMI, ioperand1 * MEXtoEMI, ioperand1 * BRAtoEMI, ioperand1 * EMItoEMI, ioperand1 * USDtoEMI, ioperand1 * GBPtoEMI, ioperand1 * INDtoEMI); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EURtoUSD, ioperand1 * MEXtoUSD, ioperand1 * BRAtoUSD, ioperand1 * EMItoUSD, ioperand1 * USDtoUSD, ioperand1 * GBPtoUSD, ioperand1 * INDtoUSD); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EURtoGBP, ioperand1 * MEXtoGBP, ioperand1 * BRAtoGBP, ioperand1 * EMItoGBP, ioperand1 * USDtoGBP, ioperand1 * GBPtoGBP, ioperand1 * INDtoGBP);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EURtoIND, ioperand1 * MEXtoIND, ioperand1 * BRAtoIND, ioperand1 * EMItoIND, ioperand1 * USDtoIND, ioperand1 * GBPtoIND, ioperand1 * INDtoIND); 
				printf("\n-------------------------------------------------------------------------------------");
					break;
					
			case 5:
				printf("\n:       |       MEX:       BRA:       EMI:       USD:       GBP:       IND:      EUR:");  
				printf("\n-------------------------------------------------------------------------------------");
    			                    
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * MEXtoMEX, ioperand1 * BRAtoMEX, ioperand1 * EMItoMEX, ioperand1 * USDtoMEX, ioperand1 * GBPtoMEX, ioperand1 * INDtoMEX, ioperand1 * EURtoMEX);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * MEXtoBRA, ioperand1 * BRAtoBRA, ioperand1 * EMItoBRA, ioperand1 * USDtoBRA, ioperand1 * GBPtoBRA, ioperand1 * INDtoBRA, ioperand1 * EURtoBRA);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * MEXtoEMI, ioperand1 * BRAtoEMI, ioperand1 * EMItoEMI, ioperand1 * USDtoEMI, ioperand1 * GBPtoEMI, ioperand1 * INDtoEMI, ioperand1 * EURtoEMI);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * MEXtoUSD, ioperand1 * BRAtoUSD, ioperand1 * EMItoUSD, ioperand1 * USDtoUSD, ioperand1 * GBPtoUSD, ioperand1 * INDtoUSD, ioperand1 * EURtoUSD); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * MEXtoGBP, ioperand1 * BRAtoGBP, ioperand1 * EMItoGBP, ioperand1 * USDtoGBP, ioperand1 * GBPtoGBP, ioperand1 * INDtoGBP, ioperand1 * EURtoGBP); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * MEXtoIND, ioperand1 * BRAtoIND, ioperand1 * EMItoIND, ioperand1 * USDtoIND, ioperand1 * GBPtoIND, ioperand1 * INDtoIND, ioperand1 * EURtoIND);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * MEXtoEUR, ioperand1 * BRAtoEUR, ioperand1 * EMItoEUR, ioperand1 * USDtoEUR, ioperand1 * GBPtoEUR, ioperand1 * INDtoEUR, ioperand1 * EURtoEUR); 
				printf("\n-------------------------------------------------------------------------------------");
					break;
					
			case 6:
				printf("\n:       |       BRA:       EMI:       USD:       GBP:       IND:       EUR:      MEX:");  
				printf("\n-------------------------------------------------------------------------------------");
    			                    
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * BRAtoBRA, ioperand1 * EMItoBRA, ioperand1 * USDtoBRA, ioperand1 * GBPtoBRA, ioperand1 * INDtoBRA, ioperand1 * EURtoBRA, ioperand1 * MEXtoBRA);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * BRAtoEMI, ioperand1 * EMItoEMI, ioperand1 * USDtoEMI, ioperand1 * GBPtoEMI, ioperand1 * INDtoEMI, ioperand1 * EURtoEMI, ioperand1 * MEXtoEMI);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * BRAtoUSD, ioperand1 * EMItoUSD, ioperand1 * USDtoUSD, ioperand1 * GBPtoUSD, ioperand1 * INDtoUSD, ioperand1 * EURtoUSD, ioperand1 * MEXtoUSD);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * BRAtoGBP, ioperand1 * EMItoGBP, ioperand1 * USDtoGBP, ioperand1 * GBPtoGBP, ioperand1 * INDtoGBP, ioperand1 * EURtoGBP, ioperand1 * MEXtoGBP); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * BRAtoIND, ioperand1 * EMItoIND, ioperand1 * USDtoIND, ioperand1 * GBPtoIND, ioperand1 * INDtoIND, ioperand1 * EURtoIND, ioperand1 * MEXtoIND); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * BRAtoEUR, ioperand1 * EMItoEUR, ioperand1 * USDtoEUR, ioperand1 * GBPtoEUR, ioperand1 * INDtoEUR, ioperand1 * EURtoEUR, ioperand1 * MEXtoEUR);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * BRAtoMEX, ioperand1 * EMItoMEX, ioperand1 * USDtoMEX, ioperand1 * GBPtoMEX, ioperand1 * INDtoMEX, ioperand1 * EURtoMEX, ioperand1 * MEXtoMEX); 
				printf("\n-------------------------------------------------------------------------------------");
					break;	
			
			case 7:
				printf("\n:       |       EMI:       USD:       GBP:       IND:       EUR:       MEX:      BRA:");  
				printf("\n-------------------------------------------------------------------------------------");
    			                    
				printf("\n:    EMI|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
				 	ioperand1 * EMItoEMI, ioperand1 * USDtoEMI, ioperand1 * GBPtoEMI, ioperand1 * INDtoEMI, ioperand1 * EURtoEMI, ioperand1 * MEXtoEMI, ioperand1 * BRAtoEMI);  
				printf("\n-------------------------------------------------------------------------------------");
     			
				printf("\n:    USD|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EMItoUSD, ioperand1 * USDtoUSD, ioperand1 * GBPtoUSD, ioperand1 * INDtoUSD, ioperand1 * EURtoUSD, ioperand1 * MEXtoUSD, ioperand1 * BRAtoUSD);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    GBP|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EMItoGBP, ioperand1 * USDtoGBP, ioperand1 * GBPtoGBP, ioperand1 * INDtoGBP, ioperand1 * EURtoGBP, ioperand1 * MEXtoGBP, ioperand1 * BRAtoGBP);  
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    IND|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EMItoIND, ioperand1 * USDtoIND, ioperand1 * GBPtoIND, ioperand1 * INDtoIND, ioperand1 * EURtoIND, ioperand1 * MEXtoIND, ioperand1 * BRAtoIND); 
				printf("\n-------------------------------------------------------------------------------------");
      			
				printf("\n:    EUR|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EMItoEUR, ioperand1 * USDtoEUR, ioperand1 * GBPtoEUR, ioperand1 * INDtoEUR, ioperand1 * EURtoEUR, ioperand1 * MEXtoEUR, ioperand1 * BRAtoEUR); 
				printf("\n-------------------------------------------------------------------------------------");
    			
				printf("\n:    MEX|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EMItoMEX, ioperand1 * USDtoMEX, ioperand1 * GBPtoMEX, ioperand1 * INDtoMEX, ioperand1 * EURtoMEX, ioperand1 * MEXtoMEX, ioperand1 * BRAtoMEX);
				printf("\n-------------------------------------------------------------------------------------");
				
				printf("\n:    BRA|   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f   :   %.2f  :",
					ioperand1 * EMItoBRA, ioperand1 * USDtoBRA, ioperand1 * GBPtoBRA, ioperand1 * INDtoBRA, ioperand1 * EURtoBRA, ioperand1 * MEXtoBRA, ioperand1 * BRAtoBRA); 
				printf("\n-------------------------------------------------------------------------------------");
					break;				
		}
}
