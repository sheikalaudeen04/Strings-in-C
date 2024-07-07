#include <stdio.h>
int main() {
    char s1[1000], s2[1000];
    int choice;
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    printf("\n1.String Length\n");
    printf("2.String Copy\n");
    printf("3.String Compare\n");
    printf("4.String Reverse\n");
    printf("5.String Lower\n");
    printf("6.String Upper\n");
    printf("7.String Compare (case insensitive)\n");
    printf("8.String Concatenation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:{
            int length1=0,length2=0,i;
            //for(i=0;s1[i]!='\0';i+=1);
            while(s1[length1]!='\0')
            	length1++;
            //length1=i;
            for(i=0;s2[i]!='\0';i+=1);
            length2=i;
            printf("Length of string 1: %d\n",length1);
            printf("Length of string 2: %d\n",length2);
            break;
        }
        case 2:{
        	int i;
            for(i=0;s2[i]!='\0';i+=1){
				s1[i]=s2[i];
            }
            s1[i]='\0';
            printf("String 1 after copy: %s\n",s1);
            break;
        }
        case 3:{
            int equal=1,i=0;
            while(s1[i]!='\0'||s2[i]!='\0') {
                if(s1[i]!=s2[i]){
                    equal=0;
                    break;
                }
                i++;
            }
            if(equal==1)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        }
        case 4:{
            int len=0,i;
            while(s1[len]!='\0')
                len++;
            for(i=0;i<len/2;i++){
                char temp=s1[i];
                s1[i]=s1[len-i-1];
                s1[len-i-1]=temp;
            }
            len=0;
            while(s2[len]!='\0')
                len++;
            for(i=0;i<len/2;i++){
                char temp=s2[i];
                s2[i]=s2[len -i-1];
                s2[len-i-1]=temp;
            }
            printf("Reversed string 1: %s\n",s1);
            printf("Reversed string 2: %s\n",s2);
            break;
        }
        case 5:{
        	int i;
        	for(i=0;s1[i]!='\0';i+=1){
            if(s1[i]>='A'&&s1[i]<='Z')
        		s1[i]+=32;
            }
            for(i=0;s2[i]!='\0';i+=1){
            if(s2[i]>='A'&&s2[i]<='Z')
        		s2[i]+=32;
            }
            printf("Lowercase string 1: %s\n",s1);
            printf("Lowercase string 2: %s\n",s2);
            break;
        }
        case 6:{
        	int i;
            for(i=0;s1[i]!='\0';i+=1){
        	if(s1[i]>='a'&&s1[i]<='z')
        		s1[i]-=32;
            }
            for(i=0;s2[i]!='\0';i+=1){
        	if(s2[i]>='a'&&s2[i]<='z')
        		s2[i]-=32;
            }
            printf("Uppercase string 1: %s\n",s1);
            printf("Uppercase string 2: %s\n",s2);
            break;
        }
        case 7:{
        	int i;
        	for(i=0;s1[i]!='\0';i+=1){
            if(s1[i]>='A'&&s1[i]<='Z')
        		s1[i]+=32;
            }
            for(i=0;s2[i]!='\0';i+=1){
            if(s2[i]>='A'&&s2[i]<='Z')
        		s2[i]+=32;
            }
            int equal=1;
			i=0;
            while(s1[i]!='\0'||s2[i]!='\0'){
                if(s1[i]!=s2[i]){
                    equal=0;
                    break;
                }
                i++;
            }
            if(equal)
                printf("Strings are equal (case insensitive)\n");
            else
                printf("Strings are not equal (case insensitive)\n");
            break;
        }
        case 8:{
            int len1=0,len2=0;
            while(s1[len1]!='\0')
                len1++;
            while(s2[len2]!='\0')
                len2++;
            int i=len1,j=0;
            while(j<len2){
                s1[i]=s2[j];
                i++;
                j++;
            }
            s1[i]='\0';
            printf("Concatenated string: %s\n",s1);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

