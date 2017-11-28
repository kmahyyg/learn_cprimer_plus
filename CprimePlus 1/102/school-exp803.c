#define __USE_MINGW_ANSI_STDIO 1     // To help solve the warning of fucking msvcrt dll 
  
 #include <stdio.h> 
  
 #define MAXSTRLENGTH 1025 
  
 void repeat_prt(char c, int n) { 
     for (int i = 0; i < n; ++i) { 
         putchar(c); 
     } 
 } 
  
 void swap(int *num_a, int *num_b) { 
     int temp = *num_b; 
     *num_b = *num_a; 
     *num_a = temp; 
 }         // Item in array swap succuessful example 
  
 int main(void) { 
     int stdloadin, charno = 0, lineno = 0, maxline = 0; 
     int length[MAXSTRLENGTH]; 
     int linerecord[MAXSTRLENGTH]; 
     while ((stdloadin = getchar()) != EOF) { 
         ++charno; 
         if (stdloadin == '\n') { 
             linerecord[lineno] = lineno + 1; 
             length[lineno] = charno; 
             maxline = lineno; 
             ++lineno; 
             charno = 0; 
         } 
     } 
     int p, q,min; 
 
     for (p = 0; p < maxline; p++) { 
         min = p; 
         for (q = p + 1; q < maxline + 1; q++) 
             if (length[min] > length[q])  
                 min = q; 
              
      swap(&length[min], &length[p]); 
         swap(&linerecord[min],&linerecord[p]); 
         
     } 
     printf("==================================================== \n"); 
     printf("|Length| = = = = = = |Linenum| = = = = = = |Graphic| \n"); 
     for (int k = 0; k <= maxline; k++) { 
         printf("   %2d            ", length[k]); 
         printf("        %d                   ", linerecord[k]); 
         repeat_prt('*', length[k]); 
         printf("\n"); 
     } 
     getchar(); 
     return 0; 
 }