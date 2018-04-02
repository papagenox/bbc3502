/* Desc:  Merge Sort

Author: Liutong Xu
Date: 2016/11/27
*/

#include<stdio.h>
#define SIZE 16
void MergeSort(int B[], int iBegin, int iEnd, int A[]);
void Merge(int A[],int iBegin,int iMiddle,int iEnd,int B[]);
void CopyArray(int A[],int iBegin,int iEnd,int B[]);
void PrintArray(int A[],int iBegin,int iEnd);

int main()
{
    int A[SIZE] = {88,52,32,65,23,21,2,66,90,8,10,3,11,5,70,66};
    int B[SIZE];
    //int i;

    PrintArray(A,0,SIZE);
    // Array A[] has the items to sort; array B[] is a work array.
    CopyArray(A, 0, SIZE, B);       // duplicate array A[] into B[]

    MergeSort(B, 0, SIZE, A);  		// sort data from B[] into A[]

    return 0;
}


// Sort the given run of array A[] using array B[] as a source.
// iBegin is inclusive; iEnd is exclusive (A[iEnd] is not in the set).
void MergeSort(int B[],int iBegin, int iEnd,int A[])
{
    int iMiddle;
    if(iEnd - iBegin > 1)                       // if run size == 1
    {                                            //   consider it sorted
        // split the run longer than 1 item into halves
        iMiddle = (iEnd + iBegin) / 2;              // iMiddle = mid point
        // recursively sort both runs from array A[] into B[]
        MergeSort(A, iBegin,  iMiddle, B);  // sort the left  run
        MergeSort(A, iMiddle,    iEnd, B);  // sort the right run
        // merge the resulting runs from array B[] into A[]
        Merge(B, iBegin, iMiddle, iEnd, A);
    }
    PrintArray(A,iBegin,iEnd);
}

// Left source half is  A[iBegin:iMiddle-1].
// Right source half is A[iMiddle:iEnd-1   ].
// Result is            B[ iBegin:iEnd-1   ].
void Merge(int A[],int iBegin,int iMiddle,int iEnd,int B[])
{
    int i,j,k;
    i = iBegin;
    j = iMiddle;

    // While there are elements in the left or right runs...
    for (k = iBegin; k < iEnd; k++) {
        // If left run head exists and is <= existing right run head.
        if (i < iMiddle && (j >= iEnd || A[i] <= A[j])) {
            B[k] = A[i];
            i = i + 1;
        } else {
            B[k] = A[j];
            j = j + 1;
        }
    }
}

void CopyArray(int A[],int iBegin,int iEnd,int B[])
{
    int k;
    for(k = iBegin; k < iEnd; k++)
        B[k] = A[k];
}


void PrintArray(int A[],int iBegin,int iEnd)
{
    int i;
    for(i=0;i<iBegin;i++)
        printf("     ");
    for(i=iBegin;i<iEnd;i++)
        printf("%5d",A[i]);
    printf("\n\n");
}