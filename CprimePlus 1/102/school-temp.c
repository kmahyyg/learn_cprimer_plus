// Filename : school-temp.c
// Created by Yyg
// Description : just used to test some grammar , which is gitignored.

//#include <stdio.h>
//#include <string.h>
//
//int main(void){
//    char test[100];
//    gets(test);
//    size_t sst;
//    sst = strlen(test);
//    printf("%d",sst);
//    printf("%c",220);
//    return 0;
//}

#include <locale.h>
#include <stdio.h>
#include <wchar.h>      /* wint_t */

int main(void)
{
    setlocale(LC_ALL, "");
    printf("%c",(wint_t)1421);
    return 0;
}