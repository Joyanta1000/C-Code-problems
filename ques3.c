#include<stdio.h>
#include<math.h>
main(){
	int i,j=10;
	i=j++;
	printf("i=%d j=%d\n",i,j);
	i=--j;
	printf("i=%d j=%d\n",i,j);
	j=97;
	printf("i=%d j=%c\n",i,j);
	i = j++;
	printf("i=%c j=%c\n",i,j);
	i=--j;
	printf("i=%d j=%c\n",i,j);
}
