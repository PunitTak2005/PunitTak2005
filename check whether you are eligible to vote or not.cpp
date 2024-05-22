#include <stdio.h>
int main()
{
	int age;
	char gender;
	printf("Enter your age");
	scanf("%d",&age);
	printf("Enter your gender (M/F)");
	scanf(" %c",&gender);
	
	
	if (age >= 18){
		if ( gender == 'M' || gender == 'm'){
		
		
		printf("You are eligible for men's category.\n "); }
		else if ( gender == 'f'  ||  gender == 'F'){
			printf ( "you are eligible for women's category. \n");
		}
		else{printf("invalid input");
	}
	
		}else{printf("Not eligible");
		
		}return 0 ;
		
		}
	

