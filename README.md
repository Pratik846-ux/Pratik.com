

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

sign_in( int random_number_1){

 
char Name[20] ;
printf("\n\nEnter your Name :");
scanf("%s",Name);
fflush(stdin);
 char emaill[20];
printf("Enter your emaill :");
scanf("%s",emaill);
fflush(stdin);
 char  passwordd[15];
 printf("Enter your password :");
scanf("%s",&passwordd);  
fflush(stdin);
 
 
  
if ( passwordd != "" && emaill != "" && Name != ""){
 
 /*
 
    int *Fil;
    Fil = fopen("filename.txt","w");
    fprintf(Fil," %s %s %s ",*Name, *emaill, *passwordd);
    fclose(Fil);*/
srand(time(0));
 random_number_1 = rand()% (10000-1+1) + 1;
    printf("Now it's Your Password code for login :%d\n",random_number_1);
    
        int *Fil;
    Fil = fopen("filename.txt","w");
    fprintf(Fil," %d ",random_number_1);
    fclose(Fil);// for now(right now) it is useless 😑  code but may in future 
    
    
  
printf("\n\nEnter 0 for login : ");
    int login_0;
    scanf("%d",&login_0);
    fflush(stdin);
    clearerr(stdin);
if ( login_0 == 0){
login(random_number_1);
}
    }
return 0;}


login(int random_number_9){
//int random_number_pass; 
printf("\n Enter Your login Code :");
int random_number_pass;
scanf("%d",&random_number_pass);
if ( random_number_pass == random_number_9)
{
int Salery,contact,age,date;
char Post,firstnm,Lastnm,emil[15],Qualification[25],Discription[100];
printf("**Welcome to the Yeaxo\n\n **");
printf("Enter the Post of Employee :");
scanf("%s",&Post);  
fflush(stdin);
printf("\nEnter the First Name of Employee :");
scanf("%s",&firstnm);  
fflush(stdin);
printf("\nEnter the Last Name  of Employee :");
scanf("%s",&Lastnm);  
fflush(stdin);
printf("\nEnter the Email of Employee :");
scanf("%s",emil);  
fflush(stdin);
printf("\nEnter the conact of Employee :");
scanf("%d",&contact);  
fflush(stdin);
clearerr(stdin);
printf("\nEnter the age of Employee :");
scanf("%d",&age);  
fflush(stdin);
clearerr(stdin);
printf("\nEnter the Qualification of Employee :");
scanf("%s",Qualification);  
fflush(stdin);
printf("\nEnter the Salery of Employee :");
scanf("%d",Salery);  
fflush(stdin);
clearerr(stdin);
printf("\nEnter the Joining date of Employee :");
scanf("%d",&date);  
fflush(stdin);
clearerr(stdin);
//scanf(yeaxo,Discription);  
//fflush(stdin);

char *yeaxo;
yeaxo = fopen("yeaxo_company.txt","w");
fprintf(yeaxo,"Data of %s ",&firstnm);
fprintf(yeaxo, "%s %s",&firstnm, &Lastnm);
fprintf(yeaxo, "%s ",&Post);
fprintf(yeaxo, "%s ",Qualification);
fprintf(yeaxo, "%d",&Salery);
fprintf(yeaxo, "contact %s %d",emil,&contact );
fprintf(yeaxo,"Joining date %d",&date);
fprintf(yeaxo, "%d",&age);
//fputs(yeaxo,Discription,stdin);
}
else{

printf("hi");
}
return 0;
}




 add_data() {
 int random_number;
    printf("*********Welcome*********\n");
    printf("1:Sign in\n");
    printf("2:Log in\n");
    printf("0:Exit\n");
    printf("Enter your choice **1-2-0**\n");
    int choice_1;
    scanf("%hd",&choice_1);
    fflush(stdin);
    clearerr(stdin);
    switch(choice_1) {
    case 1: {
    sign_in( random_number);
    break;
    }

    case 2:
    {
    login (random_number);
        break;
    }
default:{
printf("Invalid input");
break;
}
   
    }
return 0;
}







 ram( ) {
    short choice ;
    printf("1:Add data\n");

    printf("2:Check data\n");

    printf("3:Dairy\n");


    printf("0:Exit\n");
    printf("Enter your choice **1-2-3-0**\n");
    scanf("%hd",&choice);
    fflush(stdin);
    clearerr(stdin);
    switch(choice) {
    case 1: {
        printf("\n\n");
        add_data();
        break ;    }

    case 2: {
        printf("\n\n");
        break ;
    }
    case 3: {
        printf("1:Add data");
        break ;    }
    case 0: {
        printf("\n\n\n\n");
        ram();
        break ;    }
    default: {
        printf("Invalid input");
        break ;    }
    
    }
    
    /*
    int *Fil;
    Fil = fopen("filename.txt","w");
    fprintf(Fil,"hyyyudujd");
    fclose(Fil);


    int b;
    scanf("%d",&b);
    if( b == 0 ) {
        ram();
    }
    */
    return 0; }





int main() {

    for (int a = 1; a<45; a++) {
        printf("*");

    }

    printf("             *****  Welcome  *****\n\n\n\n\n");

    int b;
    char code_1[5]="a00b";
    char code[5];
    printf("Enter the code of id :");
    fgets(code,sizeof(code),stdin);
    fflush(stdin);
    clearerr(stdin);
    //printf("Entered code: %s\n", code);
    //  printf("Target code: %s\n", code_1);
    if(strcmp(code,code_1) != 0) {
        
            printf("\n");
        printf("Invalid input \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        for (int c = 1; c<45; c++) {
        printf("*");


    }
    }

    
    else {
    ram();
        }

    

    return 0;
}


    
