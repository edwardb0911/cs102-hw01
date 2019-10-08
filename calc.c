#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	if (argc != 4) {
    printf("Wrong number of arguments!\n");
    return(-1); // nonzero exit code indicates problem
   	}
	else{
		if (argv[1][0] == '+'){
			float x = (atof(argv[2]) + atof(argv[3]));
			printf("%g\n",  x);
			return 0;
		}
		if (argv[1][0] == '-'){
			float x = (atof(argv[2]) - atof(argv[3]));
			printf("%g\n",  x);
			return 0;
		}
		if (argv[1][0] == 'x'){
			float x = (atof(argv[2]) * atof(argv[3]));
			printf("%g\n",  x);
			return 0;
		}
		if (argv[1][0] == '/'){
			float x = (atof(argv[2]) / atof(argv[3]));
			printf("%g\n",  x);
			return 0;
		}
	}
	printf("Invalid Operator \n");
	return -1;
}



