#include<stdio.h>
struct  date{
       int year;       
       int month;   
       int day;       
 };

struct  student{  
       char  no[7]; 
       char  name[9];
       char  sex[5];    
       struct date birthday;  
} ; 


int main()		//example 1
{		  		
	struct student stu={"000102","Tom","Male",{1980,9,20}};
    struct student * ptr = &stu;
	printf("No:%s\n", ptr->no);
	
	printf("Name:%s\n", ptr->name);	
	printf("Sex:%s\n", ptr->sex);
	printf("Birthday:%d-", ptr->birthday.year);
	printf("%d-", ptr->birthday.month);
	printf("%d\n", ptr->birthday.day);
	
	scanf("%s", ptr->no);
	scanf("%s", ptr->name);	
	scanf("%s", ptr->sex);
	scanf("%d", &(&stu)->birthday.year);
	scanf("%d", &(&stu)->birthday.month);
	scanf("%d", &(&stu)->birthday.day);     

	printf("No:%s\n", (*ptr).no);
	printf("Name:%s\n", (*ptr).name);	
	printf("Sex:%s\n", (*ptr).sex);
	printf("Birthday:%d-", (*ptr).birthday.year);
	printf("%d-", (*ptr).birthday.month);
	printf("%d\n", (*ptr).birthday.day);

	

	return 0;	 
}

/*
int main()		//example2
{		  		
	struct student stu={"000102","Tom","Male",{1980,9,20}}; struct student * ptr=&stu;
	printf("No:%s\n", (*ptr).no);
	printf("Name:%s\n", (*ptr).name);	
	printf("Sex:%s\n", (*ptr).sex);
	printf("Birthday:%d-", (*ptr).birthday.year);
	printf("%d-", (*ptr).birthday.month);
	printf("%d\n", (*ptr).birthday.day);

	return 0;	 
}*/

/*
int main()		//example 3
{		  		
	struct student stu,*ptr=&stu;
	scanf("%s", ptr->no);
	scanf("%s", ptr->name);	
	scanf("%s", ptr->sex);
	scanf("%d", (&stu)->birthday.year);
	scanf("%d", (&stu)->birthday.month);
	scanf("%d", (&stu)->birthday.day);     

    return 0;
}*/
