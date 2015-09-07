#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	char buff[255];
	
	f = fopen("/num.txt","r");
	fgets(buff, 255, (FILE*)f);
	printf("%s\n",buff);
	return 0;
}
