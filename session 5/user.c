#include "STD_TYPES.h"
#include "admin.h"
#include "user.h"
#include <stdio.h>


u32 know_about (void){

    u8 letter;
    u32 flag;
    u32 stop = 1;
    while(stop == 1){
    printf("enter the book frist letter in capital:\n");
    scanf(" %c",&letter);
    if(letter < 'A' || letter > 'Z'){
    while (letter < 'A' || letter > 'Z'){
        printf("the letter in small please try again.\n");
        printf("enter the book frist letter in capital:\n");
        scanf(" %c",&letter);   
    }
    }
    for (j = 0; j < 49; ++j){
         if(arr[j].frist_letter == letter){
            flag = 1;
            break;
         }
    }

    if(flag == 1){
        printf ("book's name is: %s\n",arr[j].book_name);
        printf ("book's price is: %f\n",arr[j].price);
    }
    else{
        printf("there is NO book start with this character.\n");
    }

    printf("if you want to know about any book else enter 1\n");
    printf("if you want to go back enter 0\n");
    scanf ("%d",&stop);

    if(stop != 0 && stop != 1){
        while(stop != 0 && stop != 1){
            printf("invalide input please try again.\n");
            printf("if you want to know about any book else enter 1\n");
            printf("if you want to go back enter 0\n");
            scanf ("%d",&stop);
        }
    }

    else if (stop == 0){
        return 0;
    }

    }
    j = 0;
    return 1;
}

u32 show_books (void){

    for (k = 0; k < 50; ++k){
        printf("the name of the book is: %s\n",arr[k].book_name);
        printf("the price of the book is: %f\n",arr[k].price);
        printf("\n");
    }
}
