#include<stdio.h>
int main(){
	int i,j=0,k;
	char a[1000]="This\nis",temp;
	//printf("Enter your string:");
	//gets(a);
	for(i=0;a[i]!='\0';i+=1){
		if(a[i]==' '){
			k=i-1;
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
	while(j<i-1){
			temp=a[j];
			a[j]=a[i-1];
			a[i-1]=temp;
			j+=1;
			i-=1;
	}
	printf("%s",a);	
	return 0;
}
