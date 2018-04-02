#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR -1
#define MENU 1
#define DEFAULT 1
#define SORTED 2
#define BACK 2
#define NAMELEN 10
#define COURSES 4

typedef struct stu_info
{	char stu_name[NAMELEN];
	int id, score[COURSES];
	float avgScore;
	struct stu_info *next;
} STU_INFO;
STU_INFO *stu_list, *stu_node;

STU_INFO *insert_node_sorted(STU_INFO *stu_list, STU_INFO *stu_node){
/*Insert a student information into the list in the descending order. Return a new stu_list */

	// Case 1: Nodescore is the highest score, score insert at the first position.
	if (stu_list==NULL|| stu_list->avgScore < stu_node->avgScore ) {
		stu_node->next = stu_list;
		stu_list = stu_node;
		return stu_list;
	}

	// Case 2: Nodescore is not the highest score,, insert at p->next position.
	STU_INFO *p = stu_list;
	while (p->next != NULL&& p->next->avgScore > stu_node->avgScore ) {
		p = p->next;
	}
	stu_node->next = p->next;
	p->next = stu_node;
	return stu_list;
}

STU_INFO *insert_node(STU_INFO *stu_list, STU_INFO *stu_node){
//Insert a student information into the end of the list
	STU_INFO *p = stu_list;
	if (!p){
		p = stu_node;
		return p;
	}
	while (p->next){
		p=p->next;
	}//find the last node.
	p->next = stu_node;
	return stu_list;
}

void printInfo(int i){
	switch(i){
		case 0:
			printf("Welcome to the grade management system!\n");
			printf("Please enter the mode you want to enter!\n");
			printf("1. Default Mode\n");
			printf("2. Sorted Mode\n");
			break;
		case MENU:
			printf("\n**************************Main Menu**************************\n");
			printf("\t\t1. Show Current List\n");
			printf("\t\t2. Insert Student\n");
			printf("\t\t3. Delete Student\n");
			printf("\t\t4. Search Student\n");
			printf("\t\t5. Analyze Course\n");
			printf("\t\t6. Exit the program\n");
			printf("*************************************************************\n\n");
			printf("Please choose a option: ");
			break;
		case BACK:
			system("pause");
			printInfo(MENU);
			break;

		case ERROR:
			printf("Invalid input received, please try again!\n");
			break;
	}
}

void print_list(STU_INFO *stu_list)  {
	int i;
	if (stu_list == NULL) printf("Empty list!");
	printf("\n**************************List Info**************************\nID\t%10s\tCO1\tCO2\tCO3\tCO4\tAvg\n","Name");
	while ( stu_list != NULL ) {
		printf("%-8d%10s\t", stu_list->id,stu_list->stu_name);
		for (i=0; i<COURSES; i++) printf("%3d\t",stu_list->	score[i]);
		printf("%.1f%c",stu_list->avgScore,stu_list->next != NULL?'\n':'\t');
		stu_list = stu_list->next;
	}
	printf("\n*************************************************************\n\nPress any key to go back to main menu.\n");
	printInfo(BACK);
}

void analyzeCourse(STU_INFO *stList) {
	int coNum,stuCount=0,score_;
	STU_INFO *p;
	p = stList;
	float passRate = 0, avg = 0, max = -999999, min = 999999;
	printf("\nPlease input the course id you want to analyze:\n");
	scanf("%d",&coNum);
	if (coNum<=COURSES && coNum){
		while(p){
			score_ = p->score[coNum-1];
			max = score_>max ? score_ : max;
			min = score_<min ? score_ : min;
			avg += score_;
			passRate +=  score_>60 ? 1: 0;
			stuCount ++;
			p = p->next;
		}
		avg /= stuCount;
		passRate /= stuCount;
		printf("\nCourse Info of CO%d :\nMax = %.1f\nMin = %.1f\nAvg = %.1f\nPasssingRate = %.2f\n\n",
							coNum,max, min, avg, passRate );
	}else{
		printInfo(ERROR);
	}
	printInfo(BACK);
}


void findStu(STU_INFO *stList) {
	STU_INFO *p;
	int i;
	char name[NAMELEN];
	p = stList;
	printf("\nPlease enter the name of the student to search:\nName = ");
	scanf("%s",&name);
	while (p) {
		if (strcmp(name,p->stu_name)==0) break;
		p=p->next;
	}
	if (p) {
		printf("\nStudent Info:\nID\t%10s\tCO1\tCO2\tCO3\tCO4\tAvg\n\n","Name");
		printf("%-8d%10s\t", p->id,p->stu_name);
		for (i=0; i<COURSES; i++) printf("%3d\t",p->score[i]);
		printf("%.1f\n",p->avgScore) ;
	}
	else{
		printf("Student <%s> not found.\n\n",name);
	}
	printInfo(BACK);
}

STU_INFO *delStu(STU_INFO *stList) {
	int id;
	printf("\nPlease enter the id of the student to delete:\nId = ");
	scanf("%d",&id);
	printf("%s",listDelete(stList, id) == OK?"Delete operation complete\n":"Delete failed.\n");

	printInfo(BACK);
	return stList;
}

int listDelete(STU_INFO *L, int id) {
	STU_INFO *p, *q;
	p = L;
	if (p->id == id) { // First Node
		*p = *(p->next);
		return OK;
	}
	while (p->next) { // Not the first node
		if (p->next->id == id) break;
		p = p->next;
	}
	if (!p->next) {
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	return OK;
}


STU_INFO *initialList(int mode){
	STU_INFO *stList=NULL,*newStu;
	char nameArray[5][NAMELEN]={"Alice","Bob","Carol","Geek","Dave"};
	int i,j, scores[5][COURSES] ={{90,80,88,70},{88,30,78,77},{90,95,90,100},{100,98,100,100},{59,59,59,59}};
	float avg ;
	for (i=0; i<5; i++){
		avg = 0;
		newStu = malloc(sizeof(STU_INFO));
		newStu->id = i+1;
		strcpy(newStu->stu_name, nameArray[i]);
		for (j=0; j<COURSES;j++) {
			newStu->score[j] = scores[i][j];
			avg += scores[i][j];
		}
		newStu->avgScore = avg / COURSES;
		newStu->next = NULL;
		stList = mode==DEFAULT ? insert_node(stList,newStu) : insert_node_sorted(stList,newStu);
	}
	return stList;
}


STU_INFO *insert(STU_INFO *stList , int mode) {
	STU_INFO *newStu;
	int i;
	float avg = 0;
	newStu = malloc(sizeof(STU_INFO));
	printf("\nID of the new student:\n") ;
	scanf("%d",&newStu->id);
	printf("Name of the new student:\n") ;
	scanf("%s",newStu->stu_name);
	for (i=0; i<COURSES; i++){
		printf("Please input the score of CO%d\n", i+1) ;
		scanf("%d",&newStu->score[i]);
		avg += newStu->score[i];
	}
	newStu->avgScore = avg / COURSES;
	newStu->next = NULL;

	if (mode==DEFAULT)
		stList = insert_node(stList,newStu);
	else
		stList = insert_node_sorted(stList,newStu);
	printf("Insert complete.\n");
	printInfo(MENU);
	return stList;
}


int main(){
	int mode,op;
	STU_INFO *stList=NULL;

	printInfo(0);
	scanf("%d", &mode);
	printf("You have entered %s mode!\n", mode==DEFAULT?"default":"sorted");
	stList = initialList(mode);
	printInfo(MENU);
	scanf("%d",&op);
	while (op!=-1){
		switch (op){
			case 1:
				print_list(stList);
			break;
			case 2:
				stList = insert(stList,mode);
			break;
			case 3:
				stList = delStu(stList);
			break;
			case 4:
				findStu(stList);
			break;
			case 5:
				analyzeCourse(stList);
			break;
			case 6:
				exit(0);
			break;
			default:
				printInfo(ERROR);
			break;
		}
		scanf("%d",&op);
	}
	return 0;
}