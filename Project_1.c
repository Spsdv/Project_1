#include<stdio.h>
main(){
	int n,i=0,x,outpn,count=0,u=35000;
	printf("\t\t\t\tThis program is used to find prime numbers.\n\n\t\t\t\t\t  (ENTER TO CONTINUE) ");
	getchar();
	system("cls");
	printf("\t\tThe number on the left is the sequence.\t\tThe number on the right is the prime number.");
	printf("\n\n\t\t--------------------------------------------------------------------------------------------\n");
	printf("\n\tExample:\n\n\t\t\t\t[sequence]\t\t\t\t\t[prime number]\n");
	printf("\n\t\t\t---------------------------------------------------------------------------------\n");
	printf("\n\t\t\t\t\t\t  (ENTER TO CONTINUE)");
	getchar();
	system("cls");
	for(n=1;n<=u;n++){
		while(n<=u){
			i+=1;
			for(x=1;x<=i;x++){			
				if(i%x==0)count+=1;
			}
			if(count==2){outpn=i; break;}
			count=0;		
		}
		count=0;
		printf("%d      %d\n",n,outpn);
	}
}
