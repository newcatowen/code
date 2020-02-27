#include<stdio.h>
int main()
{
	 double number1=0.0;
	  double number2=0.0;
	  char open=0;

	  printf("\n Enter:\n");
	  scanf("%lf%c%lf",&number1,&open,&number2);

	   switch(open)
	  {
	  case '+':
							              printf("=%lf\n",number1+number2);
								                break;

									      case '-':
								           printf("=%lf\n",number1-number2);
										              break;

									            case '*':
							                 printf("=%lf\n",number1*number2);
											            break;

																          case '/':
															               if(number2==0)
														                    printf("\n error!\n");
																                  else
															               printf("=%lf\n",number1/number2);
																             break;

																           case '%':
															                if((long)number2==0)  
															             printf("\n error!\n"); 
																           else
																							                printf("=%ld\n",(long)number1%(long)number2);      
															              break;

																							            default:
																							                printf("\n error!\n");
																									          break;          
																										      }
    return 0;
}



