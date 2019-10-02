#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	if (argc != 4) {
    printf("Wrong number of arguments!\n");
	printf("%s\n", argv[1]);
    return(-1); // nonzero exit code indicates problem
   	}
	else{
		if (argv[1][0] == '+'){
			float x = (atof(argv[2]) + atof(argv[3]));
			printf("%f\n",  x);
		}
	}








return 0;
}



