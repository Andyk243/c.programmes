//Author:Andy Ondieki
//registration number:BCS-05-0553/2026
//Description:program to check exam eligibility

#include<stdio.h>

//Declare variables
int attendancepercentage; //%d
int marks;//%d


int main(){
	
	//prompt user to enter attendance and marks details
	
 printf("enter your attendance percentage\t");
    scanf("%d", &attendancepercentage);
    
     printf("enter your marks\t");
    scanf("%d", &marks);
	
	if(attendancepercentage>=75 &&marks>=40){
		
		//Program output
		
		printf("...FINAL EXAM ELIGIBILITY...\n");
		
		printf(" You Are Eligible \n");
	}
	else {
		
			printf("...FINAL EXAM ELIGIBILITY...\n");
		
		printf("You Are Not Eligible\n");
	}
	
	
	return 0;
	
}