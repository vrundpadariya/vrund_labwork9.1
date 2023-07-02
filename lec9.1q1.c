#include<stdio.h>
main()
{
	char str[100];
	int i;
	printf("enter string:");
	scanf("%s",&str);
	for(i=0;i<100;i++){
	
	if(str[i]>=97 && str[i]<=122){
		str[i]=str[i]-32;
		}
	}
		printf("upper case string is:%s",str);
}
