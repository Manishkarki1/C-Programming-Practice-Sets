/*#include<stdio.h>
void main(){
	char name[20];
	printf("Enter your name: ");
	gets(name);
	printf("Hey %s,Welcome",name);
}

#include<stdio.h>
#include<string.h>
void main(){
	char str[30];
	unsigned int len;
	printf("enter a string: ");
	gets(str);
	len=strlen(str);
	printf("lngth of %s is %d",str,len);
}*/
/*
#include<stdio.h>
int length(char str);
void main(){
	char str[30];
     int len;
	printf("enter a string: ");
	gets(str);
	len=length(char str);
	printf("length of %s is %d",str,len);
}
int length(char str){
	int i=0,count=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	return count;
}

#include<stdio.h>
#include<string.h>
void main(){
	char str[30],temp;
	printf("enter a string: ");
	gets(str);
	int i=0,j;
	j=strlen(str);
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("reverse string is %s",str[i+j]);
}
#include<stdio.h>
void main(){
    char str[20];
    printf("Input the string: ");
    scanf("%s",str);
    //gets(str);
    //printf("The string you entered is : %s",str);
    puts(str);
}
#include<stdio.h>
#include<string.h>
void main(){
    char str[30];
    char  rev[30];
    printf("Enter your name: ");
    gets(str);
    strrev(str);
    printf("the reverse is %s",str);
    
}
#include<stdio.h>
#include<string.h>
void main(){
	char str1[10],str2[10];
	printf("Enter your name: ");
	gets(str1);
	strcpy(str2,str1);
	puts(str2);
}
*/
#include<stdio.h>
void main(){
	char str[30];
	int i,count=0;
	printf("Enter your name: ");
    gets(str);
	for(i=0;str[i]!=0;i++){
		count++;
	}
	printf("The length of the name is %d",count);
}
//	printf("\nThe reverse of the name is:");
//	for(j=count;j>=0;j--){
//		printf("%c",str[j]);
//	}

/*
#include<stdio.h>
void main(){
	char str1[30],str2[30];
	int i,j;
	printf("Enter the first word: ");
	gets(str1);
	printf("Enter the second word: ");
	gets(str2);
	for(i=0;str1[i]!='\0';i++){
		for(j=0;str2[j]!='\0';j++){
		}
	}
	if(i>j){
		printf("The string of first word is greater than second word");
	}
	else if(i==j){
		printf("Both is equal");
	}
	else{
		printf("The string of second word is greater than first word");
	}
}
#include <stdio.h>
int main() {
    char s1[100], s2[100], i,s3[100];
    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s2: ");
    gets(s2);

    for (i = 0; s1[i] != '\0'; i++) {
    	s3[i]=s1[i];
        s1[i] = s2[i];
        s2[i] = s3[i];
    }

//    s2[i] = '\0';
    printf("String s1: %s", s1);
    printf("\nString s2: %s", s2);
    return 0;
}
#include<stdio.h>
void main(){
	char i;
	for(i=97;i<=122;i++){
		printf("%c\t",i);
	}
}

//program to convert string to lowercase using header file
#include<stdio.h>
#include<string.h>
void main(){
	char ch[30];
	printf("Enter any string: ");
	gets(ch);
	strlwr(ch);
	printf("The string in lowercase: %s",ch);
}

//to lowercase without using header files
//A=65,a=97 here the difference is 97-65=32
#include<stdio.h>
void main(){
	char ch[30];
	int i,j;
	printf("Enter your string: ");
	gets(ch);
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]>='A' && ch[i]<='Z'){
			ch[i]=ch[i]+32;
		    
		}
		else{
			ch[i]=ch[i]-32;
		
			}
		
	}
	printf("%s",ch);
	
	
}
*/
/*
#include<stdio.h>
void main(){
	char str[60];
	int i,j,temp;
	for(i=0;i<5;i++){
		printf("Enter your name: ");
	    gets(str);
	}
	for(i=0;i<5;i++){
		for(j+1;j<5;j++){
			if(str[i]>str[j]){
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
			
		}
	}
	for(i=0;i<5;i++){
		printf("%s\n",str);
	}
}	*/
