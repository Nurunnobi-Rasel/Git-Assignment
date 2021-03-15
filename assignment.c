#include <stdio.h>

int main() {
   char line[1000000];
   int T;
   scanf("%d",&T);
   while(T--) {
       scanf(" %[^\n]",line);
       int i;
       int count = 0;
       for (i = 0;; i++) {
           if (line[i] == '\0') {
               count++;
               break;
           }
           if (line[i] == ' ' && line[i + 1] != ' ') {
               count++;
           }

       }
       printf("%d\n", count);
   }
    return 0;
}