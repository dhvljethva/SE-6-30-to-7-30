
#include <stdio.h>
#include<conio.h>
#include<string.h>

void main()
{ 
    char name[50];
    char surname[50];
    char email[50];
    char password[50]; 
    char loginEmail[100];
    char loginPassword[100]; 
     
     printf("\n user regisration");
     
     
    printf("\n\nEnter your name: ");
    scanf("%s",&name);
    
    printf("Enter your surname: ");
    scanf("%s",&surname);
    
    printf("Enter your email: ");
    scanf("%s",&email);
    
    printf("Enter your password: ");
    scanf("%s",&password); 
    
         printf("\n user login");

     
    printf("\n \nEnter email: ");
    scanf("%s",&loginEmail);
    
    printf("Enter password: ");
    scanf("%s",&loginPassword);
    
    if(strcmp(email,loginEmail) == 0 && strcmp(password,loginPassword) == 0)
    {
        printf("Login succesfully");
    }
    else{
        printf("Login fail");
        
        
        }
    
    
    
    
    
  getch();
}
