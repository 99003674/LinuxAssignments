
#include<pthread.h>
#include<stdio.h>

int arr[500]={22, 47, 14, 28, 32, 31, 5, 37, 16, 46, 14, 43, 33, 18, 25, 5, 25, 21, 39, 33, 38, 13, 41, 29, 4, 30, 33, 31, 12, 37, 34, 39, 21, 15, 18, 6, 31, 33, 31, 13, 2, 38, 17, 28, 11, 33, 20, 7, 8, 15, 37, 48, 11, 17, 48, 11, 25, 13, 49, 12, 46, 1, 7, 10, 6, 10, 16, 37, 38, 37, 44, 35, 26, 32, 27, 34, 35, 12, 50, 13, 18, 22, 8, 1, 16, 38, 21, 9, 9, 42, 27, 7, 42, 38, 9, 41, 47, 43, 4, 10, 13, 39, 37, 9, 33, 37, 22, 6, 41, 38, 12, 38, 32, 19, 9, 26, 38, 47, 10, 41, 37, 27, 36, 25, 26, 48, 24, 16, 30, 36, 41, 3, 38, 25, 29, 31, 27, 35, 28, 17, 5, 32, 40, 16, 50, 44, 40, 48, 18, 45, 35, 48, 33, 5, 41, 41, 2, 12, 39, 40, 6, 47, 10, 4, 34, 29, 19, 14, 4, 28, 22, 5, 43, 4, 20, 36, 11, 44, 44, 43, 14, 3, 41, 20, 20, 21, 45, 29, 39, 17, 45, 47, 19, 32, 31, 43, 14, 34, 24, 48, 29, 30, 28, 33, 31, 9, 29, 35, 24, 42, 31, 6, 33, 30, 2, 46, 24, 42, 16, 37, 15, 12, 42, 37, 49, 18, 1, 48, 47, 3, 22, 25, 50, 21, 46, 8, 15, 20, 39, 34, 2, 42, 28, 9, 13, 28, 27, 10, 5, 32, 9, 2, 3, 50, 32, 42, 32, 16, 32, 50, 3, 4, 25, 22, 43, 31, 23, 1, 3, 32, 21, 45, 14, 46, 49, 16, 38, 39, 2, 13, 6, 2, 11, 39, 50, 21, 9, 39, 18, 15, 15, 2, 27, 44, 16, 31, 34, 11, 18, 13, 35, 25, 33, 16, 22, 17, 50, 19, 36, 44, 19, 36, 26, 45, 37, 13, 37, 16, 18, 24, 44, 31, 5, 33, 9, 31, 48, 47, 7, 32, 8, 35, 5, 8, 32, 6, 36, 20, 4, 14, 33, 42, 17, 4, 23, 45, 25, 29, 14, 23, 32, 2, 47, 21, 28, 44, 38, 5, 41, 49, 13, 8, 7, 46, 27, 28, 8, 48, 34, 27, 20, 7, 8, 15, 2, 46, 44, 28, 45, 47, 35, 47, 33, 1, 45, 50, 20, 29, 15, 5, 35, 2, 10, 14, 5, 32, 30, 27, 37, 9, 34, 35, 24, 46, 33, 28, 46, 44, 7, 13, 37, 33, 32, 41, 34, 20, 47, 5, 24, 49, 29, 4, 29, 13, 49, 39, 25, 49, 28, 18, 27, 50, 7, 9, 28, 15, 15, 36, 19, 27, 34, 6, 39, 39, 39, 12, 33, 40, 19, 33, 11, 50, 30, 29, 49, 31, 14, 30, 10, 41, 8, 20, 50, 20, 23, 43, 33, 22, 3, 21, 32, 6, 42, 25, 17, 50, 4, 12, 2, 30, 31, 41, 31, 5, 36, 25, 48, 38, 5, 30, 1, 38, 11, 28, 45, 39, 5, 17, 45, 6, 5};
int x=0,sum=0,y=100;

void* task_body1(void *arg)
{
char* pv=arg;
for(int i=x;i<y;i++)
{
sum=sum+arr[i];
}
x=x+100;
y=y+100;
printf("Your Sum is %d\n",sum);




}
void* task_body2(void *arg)
{
char* pv=arg;
for(int i=x;i<y;i++)
{
sum=sum+arr[i];
}
x=x+100;
y=y+100;
printf("Your Sum is %d\n",sum);




}
void* task_body3(void *arg)
{
char* pv=arg;
for(int i=x;i<y;i++)
{
sum=sum+arr[i];
}
x=x+100;
y=y+100;
printf("Your Sum is %d\n",sum);




}
void* task_body4(void *arg)
{
char* pv=arg;
for(int i=x;i<y;i++)
{
sum=sum+arr[i];
}
x=x+100;
y=y+100;
printf("Your Sum is %d\n",sum);




}
void* task_body5(void *arg)
{
char* pv=arg;
for(int i=x;i<y;i++)
{
sum=sum+arr[i];
}
x=x+100;
y=y+100;
printf("Your Sum is %d\n",sum);




}

int main()
{
void* status;
pthread_t pt1; //thread handle
pthread_t pt2; //thread handle
pthread_t pt3; //thread handle
pthread_t pt4; //thread handle
pthread_t pt5; //thread handle
pthread_create(&pt1,NULL,task_body1,"SUM100"); //create thread
pthread_create(&pt2,NULL,task_body2,"SUM200"); //create thread
pthread_create(&pt3,NULL,task_body3,"SUM300"); //create thread
pthread_create(&pt4,NULL,task_body4,"SUM400"); //create thread
pthread_create(&pt5,NULL,task_body5,"SUM500"); //create thread
pthread_join(pt1,&status);
pthread_join(pt2,NULL);
pthread_join(pt3,NULL);
pthread_join(pt4,NULL);
pthread_join(pt5,NULL);
printf("thread exit status is :%ld\n", (long)status);
return 0;
}
