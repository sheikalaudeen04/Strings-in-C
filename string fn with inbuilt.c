#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s1[1000],s2[1000];
    int choice;
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    do{
    printf("\n1.String Length\n");
    printf("2.String Copy\n");
    printf("3.String Compare\n");
    printf("4.String Reverse\n");
    printf("5.String Lower\n");
    printf("6.String Upper\n");
    printf("7.String Compare(case insensitive)\n");
    printf("8.String Concatenation\n");
    printf("Enter any other numto exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Length of string 1: %d\n",strlen(s1));
            printf("Length of string 2: %d\n",strlen(s2));
            break;
        case 2:
            strcpy(s1,s2);
            printf("String 1 after copy: %s\n",s1);
            break;
        case 3:
            if(strcmp(s1,s2)==0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 4:
            printf("Reversed string 1: %s\n",strrev(s1));
            printf("Reversed string 2: %s\n",strrev(s2));
            break;
        case 5:
            strlwr(s1);
            strlwr(s2);
            printf("Lowercase string 1: %s\n",s1);
            printf("Lowercase string 2: %s\n",s2);
            break;
        case 6:
            strupr(s1);
            strupr(s2);
            printf("Uppercase string 1: %s\n",s1);
            printf("Uppercase string 2: %s\n",s2);
            break;
        case 7:
            if(strcasecmp(s1,s2)==0)
                printf("Strings are equal(case insensitive)\n");
            else
                printf("Strings are not equal(case insensitive)\n");
            break;
        case 8:
            strcat(s1,s2);
            printf("Concatenated string: %s\n",s1);
            break;
        default:
            printf("You are exiting\n");
    }
}while(choice>=1&&choice<=8);

    return 0;
}

