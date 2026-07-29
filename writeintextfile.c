#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int i;
    
    // 1. Create/Open file in write mode
    fp = fopen("data.txt", "w");
    
    if (fp == NULL) {
        printf("Error: Could not create file");
        return 1;
    }
    
    printf("Enter 10 characters:\n");
    
   
    for(i = 1; i <= 10; i++) {
        printf("Character %d: ", i);
        scanf(" %c", &ch);   // space before %c to skip enter
        fputc(ch, fp);       // write character to file
    }
    
    fclose(fp);
    printf("\n10 characters written to data.txt successfully!");
    
    return 0;
}