/*****************************************/
/* Author  :  Abdullah Mohamed  soliman  */
/* Version :  V01                        */
/* Date    : 27 Dec 2021                 */
/*****************************************/

#include<stdio.h>
#include<string.h>
#include "typedef.h"
#include "stack_interface.h"

typedef struct m
{
	uint8_t arr[10];
	sint16_t top;
}strSTACKconfig_t;

extern strSTACKconfig_t gstr_stackConfig;





void main()
{
   gstr_stackConfig.top=-1;
uint8_t line[]="{5+6}*2*3";
   uint8_t *line2=NULL;
   line2 = compilor (line);
	printf("%s",line2);
	//display();
}
