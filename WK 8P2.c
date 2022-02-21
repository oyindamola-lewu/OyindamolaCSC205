#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *Pop(void* args)
{
	printf("Pop is a genre of popular music that originated in its modern form during the mid-1950s in the United States and the United Kingdom. The terms popular music and pop music are often used interchangeably, although the former describes all music that is popular and includes many disparate styles. \n");
	return NULL;
}
void *RNB(void* args)
{
	printf("Rhythm and blues, often abbreviated as R&B or RnB, is a genre of popular music that originated in African-American communities in the 1940s. \n");
	return NULL;
}
void *Folk(void* args)
{
	printf("Folk music is a music genre that includes traditional folk music and the contemporary genre that evolved from the former during the 20th-century folk revival. Some type of folk music may be called world music. \n");
	return NULL;
}
void *Classic(void* args)
{
	printf("Classical music generally refers to the formal musical tradition of the Western world, considered to be distinct from Western folk music or popular music traditions. \n");
	return NULL;
}


int main(){
	int x;
	char name[100];

	printf("Input your name: \n");
	scanf("%s", name);
	loop:
	printf("Enter your genre of interest: \n Press 1 for Pop. \n Press 2 for Rhythm and Blues.\n Press 3 for Folk. \n Press 4 for Classical. \n");
	scanf("%d",&x);

pthread_t pop;
pthread_t rnb;
pthread_t folk;
pthread_t classic;

if(x==1){
pthread_create(&pop,NULL,Pop,(void *)&pop);
		sleep(1);
}
else if(x==2){
pthread_create(&rnb,NULL,RNB,(void *)&rnb);
		sleep(1);
}
else if(x==3){
pthread_create(&folk,NULL,Folk,(void *)&folk);
		sleep(1);
}
else if(x==4){
pthread_create(&classic,NULL,Classic,(void *)&classic);
		sleep(1);
}
else{
printf("Invalid input. Try again. \n");
goto loop;
}}