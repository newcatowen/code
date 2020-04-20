
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>

int main()
{
	char *hdata =(char*)malloc(1024*1024*1024);
	int i =0;
	for(;i<32;i++)
	{
	memset(hdata +i*1024*1024*32,'a',1024*1024*32);
	sleep(1);
	}
	printf("i will fork!\n");
	pid_t pid =fork();
	assert(-1 !=pid);
	if(pid == 0)
	{
	printf("child start\n");
	int i =0;
	for(;i<32;i++)
	{
		memset(hdata +i*1024*1024*32,'b',1024*1024*32);
		sleep(1);
	}
	}
}





