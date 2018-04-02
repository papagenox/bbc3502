#include<stdio.h>

typedef struct stu_info
{	char student_name[20];
	char student_id[10];
	int math_score;
	int lang_score;
	int total_score;
	struct stu_info *next;
} stu_info;

stu_info *insert_node(stu_info *student_list, stu_info *student_node);		
//return a new student_list

int main()
{
	stu_info *student_list, *np, *tp;
	int i, key;
	
	student_list = NULL;	// Initially list is empty
	
	for (i = 0; i < 10; i++)
	{
		np = malloc(sizeof(stu_info));	//new a node and fill in data
		printf("Please input student name, id, math score, lang score: \n");
		scanf("%s%s%d%d", np->student_name, np->student_id,&np->math_score, &np->lang_score);
		np->total_score = np->math_score + np->lang_score;
		np->next = NULL;
		
		student_list = insert_node(student_list, np);		
	}
	
	tp = student_list;
	while (tp)
	{
		printf("%-20s   %d\n",tp->student_name,tp->total_score);
		tp = tp->next;
	}
	return 0;	
}

//insert student_node into student_list in an ascending order of total_score
stu_info *insert_node(stu_info *student_list, stu_info *student_node)
{
	stu_info *tp;
	if (student_list == NULL)
		return student_node;
	if (student_node->total_score <= student_list->total_score)
	{
		student_node->next = student_list;
		return student_node;
	}
	else
	{
		tp = student_list;
		tp->next = insert_node(student_list->next, student_node);
		return tp;
	}
}

