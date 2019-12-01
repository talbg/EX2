#include "stdio.h"
#include "myBank.h"

int myProgram(char x){
if(x== 'O'){
myBankOpen();
return 0;}
if(x== 'B'){
myBankBalance();
return 0;}
if(x== 'D'){
myBankDeposite();
return 0;}
if(x== 'W'){
myBankWithdrawal();
return 0;}
if(x== 'C'){
myBankClose();
return 0;}
if(x== 'I'){
myBankInterest();
return 0;}
if(x== 'P'){
myBankPrint();
return 0;}
return 0 ;}

int gttt(void){
char x;
printf("\nO - Opening a new bank account.\nB - Show's your balance.\nD - Deposite.\nW - Withdrawal.\nC - Cloesed your bank account.\nI - Add interest to all bank acounts.\nP - Show's you all the bank accounts balance.\nE - Close all bank account and finish the program.\n");
printf("Enter letter:");
scanf("\n%s",&x);

if(x!='O'&&x!='B'&&x!='D'&&x!='W'&&x!='I'&&x!='C'&&x!='P'&&x!='E'){
printf("\nWrong input, Please try again:\n");
gttt();
}
if(x=='E'){
return 0;}
myProgram(x);
gttt();
return 0;
}



int main(){
printf("Wellcome to our bank! how can we help you?\n");
gttt();
myBankExit();
printf("All bank accounts are closed. \n Ending Programe");
return 0;}
