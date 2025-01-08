#include<stdio.h>
#include<stdlib.h>


int main(){
    char string1[100],string2[100];
    char count1=0,count2=0,same=1;
    char *ptr1,*ptr2;
    ptr1=string1;
    ptr2=string2;
    printf("enter the string1 : ");
    fgets(string1,sizeof(string1),stdin);
    printf("enter the string2 : ");
    fgets(string2,sizeof(string2),stdin);
    while(*ptr1){
        count1++;
        ptr1++;
    }
    while(*ptr2){
        count2++;
        ptr2++;
    }   
    ptr1=string1;
    ptr2=string2;
    if(count1!=count2){
        printf("strings are not same.");
    }
    else{        
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
    
}





