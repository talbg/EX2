#include <stdio.h>
#include "myBank.h"


double accounts[50][2]={0};

int full(){
int i=0,count=0;
while(count<=50){
if(accounts[i][0]==0){
return count;
}
else{
i=i+1;
count=count+1;
}
}
return 0;}

int myBankOpen(){
double x;
int i = full();
if(i==51){
printf("Sorry, there's no available accounts\nBack to menu\n");
return 0 ;
}
printf("Please type your i‫‪nitial‬‬ ‫‪deposit‬‬: ");
if (scanf("%lf", &x)== 1){
accounts[i][0]=x;
accounts[i][1]=1;
int accountNum = (901+i);
printf("Congrats! You have a new bank account.\nYour account number is: %d \n" , accountNum);
return 0;
}
else{
printf("Invalid deposite number\nBack to menu \n");
return 0;}
}


void myBankBalance(){
double x;
printf("Please enter your account number‬‬: ");
if (scanf("%lf", &x)!= 1){
printf("Invalid number account \nBack to menu \n");
return;}
int num = x-901;
if(x<=950&&x>=901){
if(accounts[num][1]==0){
printf("Sorry,There's no such account number\nBack to menu\n");
return;
}
else{
double y = accounts[num][0];
printf("Your Balance is: %.2f \nBack to menu \n",y);
}}
else{
printf("\nSorry,There's no such account number\nBack to menu\n");
}
}

void myBankDeposite(){
double x,y;
printf("Please enter your account number‬‬: ");
if (scanf("%lf", &x)== 1){
int num = x-901;
if(x>950||x<901){
printf("\nSorry,There's no such account number\nBack to menu:\n");
return;
}
if(accounts[num][1]==0){
printf("\nSorry,There's no such account number\nBack to menu:\n");
return;
}
printf("Please enter your deposite amount: ");
scanf("%lf",&y);
if(y<=0){
printf("\nSorry, we can't deposite negative number\nBack to menu:\n");
return;
}
accounts[num][0]+=y;
printf("\nYour new balance is: %.2f",accounts[num][0]);}
else{
printf("\nSorry,There's no such account number\nBack to menu:\n");
} 
}

void myBankWithdrawal(){
double x,y;
printf("Please enter your account number‬‬: ");
scanf("\n%lf",&x);
int num = x-901;
if(x>950||x<901){
printf("\nThere's no such account number\nBack to menu\n");
return;
}
if(accounts[num][1]==0){
printf("\nThere's no such account number\nBack to menu\n");
return;
}
printf("Please enter your withdrawal amount: ");
scanf("\n%lf",&y);
if(y<=0){
printf("\nSorry, we can't withdraw negative number\nBack to menu\n");
return;
}
if(y>accounts[num][0]){
printf("\nSorry, Your balance smaller then the withdrawal amount you ask for\nBack to menu\n ");
return;
}
accounts[num][0]=accounts[num][0]-y;
printf("\nYour new balance is: %.2f\nBack to menu\n",accounts[num][0]);
}

void myBankClose(){
double x;
printf("Please enter your account number‬‬: ");
scanf("\n%lf",&x);
int num = x-901;
if(x>950||x<901){
printf("There's no such account number\nBack to menu\n");
return;
}
if(accounts[num][1]==0) {
printf("Sorry,There's no such account number\nBack to menu\n");
return;
}
else{
accounts[num][0]=0;
accounts[num][1]=0;
printf("Your bank account closed! thank you for choosing our bank, hope to see you again.\nBack to menu\n");
}}

void myBankInterest(){
double x;
int i=0;
printf("Please enter interest amount: ");
scanf("\n%lf",&x);
if(x<=0){
printf("Negative interest error\nBack to menu\n");
return;
}
while(i!=50){
if(accounts[i][1]==1){
accounts[i][0]= (((accounts[i][0]*x)/100)+accounts[i][0]);
int Num = 901+i;
printf("\nInterest added to bank Account: %d ",Num);}
i++;	
}
}
void myBankPrint(){
int i=0;
int Num=0;
int count =0;
while(i!=50){
if(accounts[i][1]==1){
Num = 901+i;
printf("\nIn number Account: %d the balance is:%.2f\n",Num,accounts[i][0]);
count++;
}
i++;
}
if (count ==0){
printf("Sorry, all bank accounts are empty\nBack to menu\n");
return;}
else{
printf("\nBack to menu\n");
return;
}
}

void myBankExit(){
int i=0;
while(i==51){
if(accounts[i][1]==1){
accounts[i][1]=0;
accounts[i][0]=0;
}
}}




