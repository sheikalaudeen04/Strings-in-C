/*#include<stdio.h>
int main(){
	int i,j=0,k;
	char a[1000],temp;
	printf("Enter your string:");//hello world go
	gets(a);
	for(i=0;a[i]!='\0';i+=1);
	for(i=0;a[i]!='\0';i+=1){
        if(a[i]==' '||a[i+1]=='\0'){
		if(a[i]==' ')
			k=i-1;
		else
			k=i; 
            while(j<k){
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                j+=1;
                k-=1;
            }
            j=i+1;
        }
    }
	printf("%s",a);	
	return 0;
}*/
#include<stdio.h>
int main(){
    int i,j=0,k;
    char a[1000],temp;
    printf("Enter your string:");//hello world go
    gets(a);
    for(i=0;a[i]!='\0';i+=1);
    
    for(i=0;a[i]!='\0';i+=1){
        if(a[i]==' ' || a[i+1]=='\0'){ // <-- Check for end of string too
            k=(a[i]==' ')?i-1:i; // <-- If it's a space, set k=i-1, else k=i
            while(j<k){
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                j+=1;
                k-=1;
            }
            j=i+1;
        }
    }
    printf("%s",a);    
    return 0;
}

