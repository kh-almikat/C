#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct User {
    char username[50];
    char password[50];
};

void registerUser();
void loginUser();

int main(){
    int choice;
    while(1){
        printf("\n--- Login System ---\n");
        printf("1. Register\n2. Login\n3. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: registerUser(); break;
            case 2: loginUser(); break;
            case 3: exit(0);
        }
    }
}

void registerUser(){
    struct User u;
    FILE *fp = fopen("users.txt","a");
    printf("Enter username: "); scanf("%s",u.username);
    printf("Enter password: "); scanf("%s",u.password);
    fprintf(fp,"%s %s\n",u.username,u.password);
    fclose(fp);
    printf("Registration successful!\n");
}

void loginUser(){
    char uname[50], pass[50];
    struct User u;
    int found=0;
    FILE *fp = fopen("users.txt","r");
    printf("Username: "); scanf("%s",uname);
    printf("Password: "); scanf("%s",pass);
    while(fscanf(fp,"%s %s",u.username,u.password)!=EOF){
        if(strcmp(uname,u.username)==0 && strcmp(pass,u.password)==0){
            found=1; break;
        }
    }
    fclose(fp);
    if(found) printf(" Login Successful!\n");
    else printf("Invalid credentials.\n");
}

