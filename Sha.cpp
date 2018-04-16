#include<stdio.h>
int main()
{
    int no,B[20],W[20],TA[20],AVW=0,AVTA=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<no;i++)
    {
        printf("[%d]:",i+1);
        scanf("%d",&B[i]);
    }
    W[0]=0;    
    for(i=1;i<no;i++)
    {
        W[i]=0;
        for(j=0;j<i;j++)
            W[i]+=B[j];
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        TA[i]=B[i]+W[i];
        AVW+=W[i];
    AVT+=TA[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,B[i],W[i],TA[i]);
    }                         
    AVW/=i;
    AVT/=i;
    printf("\n\nAverage Waiting Time:%d",AVW);
    printf("\nAverage Turnaround Time:%d",AVT);
    return 0;
}