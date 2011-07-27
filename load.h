#include <math.h>

#define num_items 100
#define num_stages 4


typedef struct _work_ {
	int part[16];
} work_t;


work_t load[num_items];


void onemilli(){
	int i;
	double res = 4.0;
	
	for(i=0; i<141300; i++)
		res = pow(sqrt(res), 2.0);
}

void comp(int millis){
	int i;
	
	for(i=0; i < millis; i++)
		onemilli();
}

void init_costs(){
	int i,j;
	
	for(i=0; i<num_items; i++)
		for (j=0; j<16; j++)
			load[i].part[j] = 10;
}


/*
printf ("Start\n");
clock_t start = clock();
printf("Time elapsed: %f\n", ((double)clock() - start) / CLOCKS_PER_SEC);		
printf("End\n");
*/
