#include<stdio.h>
#include<math.h>
main(){
	int salary, da, hra;
	printf("Basic Salary ");
	scanf("%d",&salary);
	da = (salary*45)/100;
	hra = (salary*25)/100;
	printf("Gross Salary is %d\n",salary+da+hra);
}
