//this code is a demo or visual of how my code should dummy the values ,don't consider wrong results of waiting time ,here waiting time 
//only depends upon burst time same as in FCFS

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of processes:");
    scanf("%d",&n);
    int burstTime[n],priority[n],arrivalTime[n],wTime[n],wt=0;
    for(int i=0;i<n;i++){
        printf("Enter the burstTime for %d process = ",i+1);
        scanf("%d",&burstTime[i]);
        wTime[i]=wt;
        wt=wt+burstTime[i];

    }
    for(int i=0;i<n;i++){
        printf("Enter the arrivalTime for %d process = ",i+1);
        scanf("%d",&arrivalTime[i]);
    }
    for(int i=0;i<n;i++){
        printf("Enter the priority for %d process = ",i+1);
        scanf("%d",&priority[i]);
    }
    printf("Pid \t\t BT \t\t AT \t\t PR \t\t WT\n");
    for(int i=0;i<n;i++){
        printf("%d \t\t %d \t\t %d \t\t %d \t\t %d\n",i+1,burstTime[i],arrivalTime[i],priority[i],wTime[i]);
    }
    return 0;
}