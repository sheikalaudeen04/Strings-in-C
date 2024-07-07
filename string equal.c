#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i,la,lb;
    printf("Enter the string 1:");
    gets(a);
    printf("Enter the string 2:");
    gets(b);
    for(i=0;a[i]!='\0';i+=1);
    la=i;
    for(i=0;b[i]!='\0';i+=1);
    lb=i;
    i=0;
if(la==lb){
    while (a[i] != '\0' && b[i] != '\0')
    {
        if(a[i]!=b[i])
        {
            break;
        }
        i++;
    }
    if(i<la){
    	printf("String not equal");
	}
	else{
		printf("String equal");
	}
}
else{
	printf("Len of strings are not equal");
}
    return 0;
}

