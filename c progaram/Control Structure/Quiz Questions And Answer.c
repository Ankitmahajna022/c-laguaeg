#include<stdio.h>
#include<conio.h>

int main()

{
	char answers;
	
	printf("Quiz Questions And Answer\n");
	
	printf("1. Who is the father of C language?\n");
	printf("a) Steve Jobs\n");
	printf("b) James Gosling\n");
	printf("c) Dennis Ritchie\n");
	printf("d) Rasmus Lerdorf\n");
	
	printf("Entr your answer:");
	scanf("%c",&answers);
	
	switch(answers)
	{
		case 'a': printf("Your answer incorrect And your marks is:0/10");
		break;
		case 'b': printf("Your answer incorrect And your marks is:0/10");
        break;		
		case 'c':printf("2. Which of the following is not a valid C variable name?\n");
		       printf("a) int number\n");
			   printf("b) float rate\n");
			   printf("c) int variable_count\n");
			   printf("d) int main\n");
			   
			   printf("Entr your answer:");
	           scanf("%s",&answers);
	           
	           switch(answers)
	           {
	           	case 'a':printf("Your answer incorrect And your marks is:1/10");
	           	break;
	           	case 'b':printf("Your answer incorrect And your marks is:1/10");
	           	break;
	           	case 'c':printf("Your answer incorrect And your marks is:1/10");
	           	break;
	           	case 'd':printf("3. All keywords in C are in ____________\n");
	            printf("a) LowerCase letters\n");
			    printf("b) UpperCase letters\n");
			    printf("c) CamelCase letters \n");
			    printf("d) None of the mentioned\n");
			   
			    printf("Entr your answer:");
	            scanf("%s",&answers);
	            
	            
	         switch(answers)
	         {
	         	case 'a':printf("4.Which of the following is true for variable names in C?\n");
	         	        printf("a) They can contain alphanumeric characters as well as special characters\n");
	         	        printf("b) It is not an error to declare a variable to be one of the keywords(like goto, static)\n");
	         	        printf("c) Variable names cannot start with a digit\n");
	         	        printf("d) Variable can be of any length");
	         	       
	         	       printf("Entr your answer:");
	                   scanf("%s",&answers);
	                   
	                   switch(answers)
	                   {
	                   	case 'a':printf("Your answer incorrect And your marks is:3/10");
	                   	break;
	                   	case 'b':printf("Your answer incorrect And your marks is:3/10");
	                   	break;
	                   	case 'c':printf("5. Which is valid C expression?\n");
	                   	       printf("a) int my_num = 100,000\n");
	                   	       printf("b) int my_num = 100000\n");
	                   	       printf("c) int my num = 1000\n");
	                   	       printf("d) int $my_num = 10000\n");
	                   	       
	                   	        printf("Entr your answer:");
	                            scanf("%s",&answers);
	                            
	                            switch(answers)
	                            {
	                            	case 'a':printf("Your answer incorrect And your marks is:4/10");
									break;
									case 'b':printf("6. Which of the following cannot be a variable name in C?]\n");
									       printf("a) volatile\n");
									       printf("b) true\n");
									       printf("c) friend\n");
									       printf("d) export\n");
									       
									       printf("Entr your answer:");
	                                       scanf("%s",&answers);
	                                       
	                                       switch(answers)
									       {
									       	case 'a':printf("7. What is short int in C programming?\n");
									       	       printf("a) The basic data type of C\n");
									       	       printf("b) Qualifier\n");
									       	       printf("c) Short is the qualifier and int is the basic data type\n");
									       	       printf("d) All of the mentioned\n");
									       	       
									       	       printf("Entr your answer:");
	                                               scanf("%s",&answers);
	                                               
	                                               switch(answers)
	                                               {
	                                               	case 'a':printf("Your answer incorrect And your marks is:/10");
	                                               	break;
	                                               	case 'b':printf("Your answer incorrect And your marks is:6/10");
	                                               	break;
	                                               	case 'c':printf("8. Which of the following declaration is not supported by C language?\n");
	                                               	       printf("a) String str\n");
	                                               	       printf("b) char *str\n");
	                                               	       printf("c) float str = 3e2\n");
	                                               	       printf("d) Both “String str;” and “float str = 3e2”\n");
	                                               	       
	                                               	       printf("Entr your answer:");
	                                                       scanf("%s",&answers);
	                                                       
	                                                       switch(answers)
	                                                       {
	                                                       	case 'a':printf("9. Which keyword is used to prevent any changes in the variable within a C program?\n");
	                                                       	       printf("a) immutable\n");
	                                                       	       printf("b) mutable\n");
	                                                       	       printf("c) const\n");
	                                                       	       printf("d) volatile\n");
	                                                       	       
	                                                       	        printf("Entr your answer:");
	                                                                scanf("%s",&answers);
	                                                                
	                                                                switch(answers)
	                                                                {
	                                                                	case 'a':printf("Your answer incorrect And your marks is:8/10");
	                                                                	break;
	                                                                    case 'b':printf("Your answer incorrect And your marks is:8/10");
	                                                                	break;
	                                                                	case 'c':printf("10. What is the result of logical or relational expression in C?\n");
	                                                                	       printf("a) True or False\n");
	                                                                	       printf("b) 0 or 1\n");
	                                                                	       printf("c) 0 if an expression is false and any positive number if an expression is true\n");
	                                                                	       printf("d) None of the mentioned\n");
	                                                                	       
	                                                                	       printf("Entr your answer:");
	                                                                           scanf("%s",&answers);
	                                                                           
	                                                                           switch(answers)
	                                                                           {
	                                                                           	case 'a':printf("Your answer incorrect And your marks is:9/10");
	                                                                           	break;
	                                                                           	case 'b':printf("Your exma is comlpete And your marks is :10/10");
	                                                                           	break;
	                                                                           	case 'c':printf("Your answer incorrect And your marks is:9/10");
	                                                                           	break;
	                                                                           	case 'd':printf("Your answer incorrect And your marks is:9/10");
	                                                                           	break;
	                                                                           	default:printf("Enter valid input");
																			   }
	                                                                	       
	                                                                	break;
	                                                                	case 'd':printf("Your answer incorrect And your marks is:8/10");
	                                                                	break;
	                                                                	default:printf("Enter valid input");
																	}
	                                                       	       
																	  
	                                                       	       
	                                                       	break;
	                                                       	case 'b':printf("Your answer incorrect And your marks is:7/10");
	                                                       	break;
	                                                       	case 'c':printf("Your answer incorrect And your marks is:7/10");
	                                                       	break;
	                                                       	case 'd':printf("Your answer incorrect And your marks is:7/10");
	                                                       	break;
	                                                       	default:printf("Enter valid input");
	
														   }
	                                               
	                                               	break;
	                                               	case 'd':printf("Your answer incorrect And your marks is:6/10");
	                                               	break;
	                                               	default:printf("Enter valid input");
	                                               }
									       	break;
									       	case 'b':printf("Your answer incorrect And your marks is:5/10");
									       	break;
									       	case 'c':printf("Your answer incorrect And your marks is:5/10");
									       	break;
									       	case 'd':printf("Your answer incorrect And your marks is:5/10");
									       	break;
									       	default:printf("Enter valid input");	
										   }
									break;
									case 'c':printf("Your answer incorrect And your marks is:4/10");
									break;
									case 'd':printf("Your answer incorrect And your marks is:4/10");
									break;	
									default:printf("Enter valid input");							
								}
	                   
	                   	       
	                   	break;
	                   	case 'd':printf("Your answer incorrect And your marks is:3/10");
	                   	break;
	                   	default:printf("Enter valid input");
	                   	
					   }

	         	break;
	         	case 'b':printf("Your answer incorrect And your marks is:2/10");
	         	break;
	         	case 'c':printf("Your answer incorrect And your marks is:2/10");
	         	break;
	         	case 'd':printf("Your answer incorrect And your marks is:2/10");
	         	break;
	         	default:printf("Enter valid input");
			 }
	           	
	           	
			   }
		break;	
		case 'd':printf("Your answer incorrect And your marks is:0/10");
		break;
		default:printf("Enter valid input");
   }
}
