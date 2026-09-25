//Author:Andy Ondieki
//Registration Number:BCS-05-0553/2026
//Description:program to compute the fine for library overdue books

#include<stdio.h>

int main(){
	
	int daysoverdue,fineamount,bookid,duedate,returndate,finerate;
	printf("Enter your book id:\t");
	scanf("%d",&bookid);
	
	printf("Enter your due date:\t");
	scanf("%d",&duedate);
	
	printf("Enter your return date:\t");
	scanf("%d",&returndate);
	
	//calculate days over due
	
		daysoverdue=returndate-duedate;
		
		
		
		//Determine the fine rate and calculate the total fine amount
		
		if(daysoverdue<=0){
			//if returned on time no fine
			
			daysoverdue=0;
			finerate=0;
			fineamount=0;
		}
	
	else if(daysoverdue <=7){
		
		finerate=20;
		fineamount=daysoverdue*finerate;
	}
	
	else if(daysoverdue>=8 &&daysoverdue<=14){
		finerate=50;
		fineamount=daysoverdue*finerate;
	}
	else{
		finerate=100;
		fineamount=daysoverdue*finerate;
	}
	//program output
	printf("...your fine details...\n");
	
	printf("Bookid:%d\n",bookid);
	
	printf("duedate:%d\n",duedate);
	
	printf("returndate:%d\n",returndate);
	
	printf("daysoverdue:%d\n",daysoverdue);
	
	printf("finerate:%d\n",finerate);
	
	printf("fineamount:%d\n",fineamount);
	
	
	
	return 0;
}