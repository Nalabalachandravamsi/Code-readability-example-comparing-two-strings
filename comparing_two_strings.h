#include<stdio.h>
#include<stdlib.h>


char string1[100],string2[100];


void comparing_two_strings(char *,char *);
char lenght(char *);
void checking(char *,char *);
void input();



char lenght(char *ptr){
    char count=0;
    while(*ptr){
        count++;
        ptr++;
    }
    return count;
}
void input(){
    printf("enter the string1 : ");
    fgets(string1,sizeof(string1),stdin);
    printf("enter the string2 : ");
    fgets(string2,sizeof(string2),stdin);
}
void checking(char *ptr1,char *ptr2){
    char same=1;
    while(*ptr1){
        if(*ptr1!=*ptr2){
            printf("strings are not same.");
            same=0;
            break;
        }
        ptr1++;
        ptr2++;
    }
    if(same){
            printf("strings are same.");
    }
}
void comparing_two_strings(char *ptr1,char *ptr2){
    char count1=0,count2=0;
    ptr1=string1;
    ptr2=string2;
    count1=lenght(ptr1);
    count2=lenght(ptr2);
    if(count1!=count2){
        printf("strings are not same.");
    }
    else{
        checking(string1,string2);
    }
}
