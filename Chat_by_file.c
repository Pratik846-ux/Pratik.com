#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ram() {
char message[50];
FILE *ptr;
printf("Enter ur message");
fgets(message,sizeof(message),stdin);
ptr = fopen("https://github.com/Pratik846-ux/Pratik.com/blob/main/A00b.txt","w");
//printf("Enter ur message");
puts(message);
fflush(stdin);
fclose(ptr);

}


int main() {
    char code_1[5]="a00b";
    char code[5];
    printf("Enter the code of id :");
    fgets(code,sizeof(code),stdin);
    fflush(stdin);
    clearerr(stdin);
    //printf("Entered code: %s\n", code);
  //  printf("Target code: %s\n", code_1);
    if(strcmp(code,code_1) == 0) {   
    ram();
    }
    else {
        printf("hi");
    }
    return 0;
}
