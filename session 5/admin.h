#ifndef ADMIN_H
#define ADMIN_H
#include "STD_TYPES.h"

typedef struct {
    u8 *book_name [50];
    u8 frist_letter;
    f32 price;
}book;

u32 i = 0;
u32 j = 0;
u32 k = 0;
u32 PIN = 1234;
book arr [50];
book *arrptr = &arr[0];
book *arrptr2 = &arr[1];

u32 add_book (void);
void sort (book arr []);
u32 clear_book (void);

#endif