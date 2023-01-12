#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char **argv)
{
	int i;
	long n;
	long sum = 0;

	char *endptr;

	for(i = 1; i < argc; i++){
		errno = 0;
		n = strtol(argv[i], &endptr, 10);

		if(errno != 0){
			perror("strtol");
			exit(EXIT_FAILURE);
		}

		if(argv[i] == endptr){
			fprintf(stderr, "no digits\n");
			exit(EXIT_FAILURE);

		}

		printf("got %ld\n", n);

		if(n > 0){
			usleep(n * 1000);
		}
		sum += n;
	}

	return EXIT_SUCCESS;
}

