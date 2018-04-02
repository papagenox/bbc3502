/* Desc: 用二维数组来存储多个学生的多课成绩单
    1，输出全部学生的各科成绩
    2，找出最高得分
    3，计算每位同学的平均分
    4，计算每门课的平均分
Author: Liutong XU
Date: 2016/12/01
*/
#include<stdio.h>
#define STUDENTS 3
#define COURSES 4

int maximum(int grades[STUDENTS][COURSES],int students,int courses);
void printArray(int grades[STUDENTS][COURSES],int students,int courses);
float avgForStudent (int setOfGrades[],int courses);
float avgForCourse(int grades[STUDENTS][COURSES],int students, int course);

int main()
{
    int studentGrades[STUDENTS][COURSES] = {{89,98,67,77},{98,77,65,88},{90,80,89,66}};
    int i;

    printArray(studentGrades,STUDENTS,COURSES);

    printf("\nThe max score is %d\n\n",maximum(studentGrades,STUDENTS,COURSES));

    for (i=0; i<STUDENTS; i++)
        printf("The avg score of student #%d = %f\n",i,avgForStudent(studentGrades[i],COURSES));
    printf("\n");

    for (i=0; i<COURSES; i++)
        printf("The avg score of course #%d is %f\n",i,avgForCourse(studentGrades,STUDENTS,i));

    return 0;

}

//Output all scores
void printArray(int grades[STUDENTS][COURSES],int students,int courses)
{
    int i,j;
    for(i=0; i<=students-1; i++)
    {
        printf("studentGrades[%d] ",i);
        for(j=0; j<=courses-1; j++)
            printf("%-5d",grades[i][j]);
        printf("\n");
    }
}

//calculate the highest score among all students
int maximum(int grades[STUDENTS][COURSES],int students, int courses)
{
    int i,j,highGrade=0;

    for(i=0; i<=students-1; i++)
        for(j=0; j<=courses-1; j++)
            if(grades[i][j]>highGrade)
                highGrade=grades[i][j];

    return highGrade;
}

//Calculate average score for each student
float avgForStudent(int setOfGrades[],int courses)
{
    int i,total=0;

    for(i=0; i<=courses-1; i++)
        total+=setOfGrades[i];

    return (float)total/courses;
}



float avgForCourse(int grades[STUDENTS][COURSES],int students, int course)
{
    int i,total=0;
    for(i=0; i<=students-1; i++)
        total+=grades[i][course];

    return (float)total/students;
}