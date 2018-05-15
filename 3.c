//BEGIN DESCRIPTION
//END   DESCRIPTION

//BEGIN INCLUDES
#include <stdio.h>
#include <stdlib.h>
//END   INCLUDES

//BEGIN CPP DEFINITIONS
//END   CPP DEFINITIONS

//BEGIN DATASTRUCTURES

//END	DATASTRUCTURES

//BEGIN GLOBALS
//END   GLOBALS

//BEGIN FUNCTION PROTOTYPES
//END	FUNCTION PROTOTYPES

/* DEFINED PROGRESS GOALS
 * 
 * todo todo todo
 *
 */

//BEGIN MAIN FUNCTION
int main(void)
{

//BEGIN INIT
int rn; //generated random number
int dr; //initial drop rate

dr=100;  // should be 100% chance to drop something
int i;
//END   INIT


for (i=0;i<20;i++){
	rn=rand()%100;
	if(rn<dr){
		printf("Monster dropped something!\n");
		if(rn>98)
			printf("AA\n");
		else if (rn>89)
			printf("magic\n");
		else
			printf("common\n");
	}
}


//BEGIN CLEAN UP
//END   CLEAN UP
return EXIT_SUCCESS;
}
//END   MAIN FUNCTION

//BEGIN FUNCTIONS
//END   FUNCTIONS
