#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int avt[10],but[10],ret[10],eT,i,s1;
int r1=0,n1,t1,wait=0,turnaround=0;
Sleep(2000);
printf("loading..");Sleep(2000);
printf("\nloading....");Sleep(2000);
printf("\nloading......\n");Sleep(2000);
printf("Your Software has been Successfully Loaded \n please tap ENTER button");
getch();
printf("\n<--------------------------Welcome To The Prasanth Scheduler Design Software------------------------>\n\n");
Sleep(2000);
printf("Please Read the following instructions carefully \n\n");Sleep(2000);
printf("1.Do Not Enter FLOAT Values\n\n");
Sleep(2000);
printf("Enter number of Processes : ");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{	
printf("Enter Arrival time for Process P%d : ",i+1);
scanf("%d",&avt[i]);
printf("Enter Burst   time for Process P%d : ",i+1);
scanf("%d",&but[i]);
ret[i]=but[i];
}
printf("\n\nProcess\t||Turn around Time|| Waiting Time\n\n");
ret[9]=9999;
for(t1=0;r1!=n1;t1++)
{
s1=9;
for(i=0;i<n1;i++)
{
if(avt[i]<=t1 && ret[i]<ret[s1] && ret[i]>0)
{
s1=i;
}}

}
