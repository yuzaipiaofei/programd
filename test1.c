#include "pthread.h"
#include "stdio.h"

void *pthread_test(void *ptr)
{

	while(1)
	{
		printf("i am pthread\n");

	}
}
int main()
{	phread_t pid;
	pthread_create(&pid,NULL,pthread_test,NULL);
	while(1)
	{
	printf("i am main pthread!!!\n");
	
	}
return 0;

}
