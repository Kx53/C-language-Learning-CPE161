#include<stdio.h>
#include<conio.h>
main()
{
   int base10;
   int base8;
   int base16;
    base10 = 10;
    base8 = 012;
    base16 = 0x10;
    printf("%d\n", base10);
    printf("%o\n", base8);
    printf("%d\n", base16);
    printf("%X\n", base16);
   getch();
   return 0;
}
