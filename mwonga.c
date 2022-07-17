/*
zetech c snack bar
created by brian mwonga
GNU GCC compiler
MIT license
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item;
    printf("\tToday's Menu\n");
    printf("1.smokie - Ksh 150\n");
    printf("2.Milkshake - Ksh 150\n");
    printf("3.Hamburger - Ksh 300\n");
    printf("4.Samosa - Ksh 50\n");
    printf("5.African tea - Ksh 60\n");
    printf("6.Enter item no: ");
    scanf("%d",&item);
    if(item > 0 && item<= 3){
        printf("item added to cart\n");
    }
    else{
        printf("Invalid item\n");
        menu(.);
    }
    return item;
}












