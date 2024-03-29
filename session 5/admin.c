#include "STD_TYPES.h"
#include "admin.h"
#include "user.h"
#include <stdio.h>
#include <string.h>

u32 add_book (void){

    u32 booknumber = 1;
    while (booknumber == 1)
    {
    arr [i];
    printf("enter the book name:\n");
    scanf(" %s",&arr[i].book_name);

    printf("enter the book frist letter in capital:\n");
    scanf(" %c",&arr[i].frist_letter);
    if(arr[i].frist_letter < 'A' || arr[i].frist_letter > 'Z'){
    while (arr[i].frist_letter < 'A' || arr[i].frist_letter > 'Z'){
        printf("the letter in small please try again.\n");
        printf("enter the book frist letter in capital:\n");
        scanf(" %c",&arr[i].frist_letter);   
    }
    }

    printf("enter the book price:\n");
    scanf("%f",&arr[i].price);

    printf("if you want to add another book enter 1.\n");
    printf("to go back enter 0.\n");
    scanf(" %i",&booknumber);

    if (booknumber != 1 && booknumber != 0){
    while (booknumber != 1 && booknumber != 0){
            printf("invalide input please try again.\n");
            printf("if you want to add another book enter 1.\n");
            printf("to go back enter 0.\n");
            scanf(" %i",&booknumber); 
        }
    }

    else if (booknumber == 0)
    {
        return 0;
    }
    ++i;
    }
    
    return 1;
}

void sort (book arr []){}

    /*for (int i = 0; i < 49; ++i){
        for (int j = 0; j < 49; ++j){
            if (arr[i].frist_letter > arr[i+1].frist_letter){
               u8 temp = arr[i].frist_letter ^ arr[i + 1].frist_letter;
               arr[i].frist_letter = temp ^ arr[i+1].frist_letter;
               arr[i+1].frist_letter = temp ^ arr[i].frist_letter;
            }
        }
    }

}*/

u32 clear_book (void){
 
    u8 letter;
    u32 flag;
    u32 cntn = 1;

while (cntn == 1){
    printf("enter the book frist letter of the book that you want to clear in capital:\n");
    scanf(" %c",&letter);
    if(letter < 'A' && letter > 'Z'){
    while (letter < 'A' && letter > 'Z'){
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

    strcpy(arr[i].book_name, " ");
    arr[j].frist_letter = 0;
    arr[j].price = 0;

    printf("if you want to clear another book enter 1.\n");
    printf("to go back enter 0.\n");
    scanf(" %i",&cntn);

    if (cntn != 1 && cntn != 0){
    while (cntn != 1 && cntn != 0){
            printf("invalide input please try again.\n");
            printf("if you want to add another book enter 1.\n");
            printf("to go back enter 0.\n");
            scanf(" %i",&cntn); 
        }
    }

    else if (cntn == 0)
    {
        return 0;
    }
}
return 1;
}