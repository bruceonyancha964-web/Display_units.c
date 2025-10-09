/*
Name:BRUCE ONYANCHA
Reg No:PA106/G/28827/25
Description:Loop program for withdrawal of cash
*/
#include <stdio.h>

int main(){
	float balance,withdraw;
	
	//User to enter amount balance
	printf("Enter amount balance\t");
	scanf("%f",&balance);

	//loop while balance is zero
	while (balance>0){
		printf("Enter amount to withdraw");
        scanf("%f",&withdraw);
         
    //check if withdrawal is possible
    if(withdraw<=0){
		printf("Invalid amount.Enter a positive amount");
	}
		
	if(withdraw>balance){
		printf("Insufficient funds.You can only withdraw upto%.2f\n",balance);
	}
	
	balance-=withdraw;
	printf("Withdrawal succesful.Current balance is %.2f\n",balance);
}

printf("Account balance is zero or negative.No more withdrawals allowed\n");

return 0;
}

