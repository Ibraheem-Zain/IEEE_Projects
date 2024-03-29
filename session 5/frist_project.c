# include <stdio.h>
# include "STD_TYPES.h"
# include "admin.h"
# include "user.h"
# include "admin.c"
# include "user.c"

int main (){

u32 funNum = 0;
u32 check = 0;
    

if(funNum != 4)
{
while ( funNum != 4)
{

    printf ("How can i help you:\n");
    printf ("if you want to know about a book enter 0\n");
    printf ("if you want to add a book enter 1\n");
    printf ("if you want to clear a book enter 2\n");
    printf ("if you want to see all books enter 3\n");
    printf ("if you want to exit enter 4\n");
    scanf ("%d",&funNum);
    
    if (funNum > 4){
        printf ("invalide input.\n");
    }

    if (funNum == 4){
        printf ("thanks and goodbye!\n");
        break;
    }

    if (funNum == 1 || funNum == 2){
        while(check != PIN){
        printf ("enter the PIN:\n");
        scanf("%d",&check);

        if (check != PIN){
            printf ("INCORRECT try again\n");
        }
        }
    }

    u32 (*funptr [4])(void) = {know_about,add_book,clear_book,show_books};

    funptr[funNum] ();
}
}
}

