#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
void *mythread(void *vargp)
{
	sleep(1);
	printf("welcome to threads\n");
	return NULL;
	
}
int main()
{
	pthread_t tid;
	printf("before thread\n");
	pthread_create(&tid,NULL,mythread,NULL);
	pthread_join(tid,NULL);
	pthread_join(tid,NULL);
	exit(0);
	
}
