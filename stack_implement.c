
/*****************************************/
/* Author  :  Abdullah Mohamed  soliman  */
/* Version :  V01                        */
/* Date    : 27 Dec 2021                 */
/*****************************************/

#include<stdio.h>
#include<string.h>
#include "typedef.h"

/*declare global struct*/
typedef struct m
{
	uint8_t arr[10];
	sint16_t top;
}strSTACKconfig_t;

strSTACKconfig_t gstr_stackConfig;

 /*stack function implementation*/
 
void  push(uint8_t ch)
{
	if(gstr_stackConfig.top == 10)
	{
		printf("full gstr_stackConfig\n");
	}  
	else 
	{
		gstr_stackConfig.top=gstr_stackConfig.top+1;
		gstr_stackConfig.arr[gstr_stackConfig.top]=ch ;
	}
	
}


void pop(void)
{
	uint8_t var=0;
	if(gstr_stackConfig.top == -1)
	{
		printf("gstr_stackConfig is empty\n");
	}  
	else 
	{
		var=gstr_stackConfig.arr[gstr_stackConfig.top];
		printf("the pop uint8_t is %c\n",var);
		gstr_stackConfig.top =gstr_stackConfig.top-1;
	}
	
}

void  display  (void)
{
	
	for (sint16_t itration=gstr_stackConfig.top;itration>=0;itration--)
	{
		printf("%c>>>>",gstr_stackConfig.arr[itration]);
	}
	
	 printf(">>>>null");
}


uint8_t * compilor (uint8_t *ptr)
	{
		static uint8_t res[]="not balance";
		sint16_t au16_itration_=0;
		while(ptr[au16_itration_]!='\0')                        //"5+6}*{(2)*3"
		{
		if(ptr[au16_itration_]== '}' ||ptr[au16_itration_]== ')')
		{
			return res;
		}			
	  else if(ptr[au16_itration_]== '{' ||ptr[au16_itration_]== '(')
		  {		  
     uint8_t r[]="balance";	
	 uint8_t *pointer=NULL;
	sint16_t itration=0;
	sint16_t open_prac1=0;
	sint16_t open_prac2=0;
	sint16_t close_prac1=0;
	sint16_t close_prac2=0;
	sint16_t res_prac1=0;
	sint16_t ind2=0;
	while(ptr[itration]!='\0')
	  {    
		push(ptr[itration]);
	    if(ptr[itration]=='{')
		{
			open_prac1++;
		}
		else if(ptr[itration]=='(')
		{
			open_prac2++;
		}
		
		else if (ptr[itration] == '}')
		{
			close_prac1++;
		}
		else if (ptr[itration] == ')')
		{
			close_prac2++;
		}
		else{/*don`t do any thing*/}
				
		itration++;
	  }
	  printf("%d----%d",open_prac1,close_prac1);
	  if((open_prac1 == close_prac1 )&&(open_prac2 == close_prac2))
		{
			pointer=strcpy(res,r);
			return pointer ;
		}
		else
		{
			
			return res;
		}
	  
	}
	au16_itration_++;
	  }


	}