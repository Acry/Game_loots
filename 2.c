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

dr=30;  // should be roughly 30% chance to drop something
int i;
//END   INIT


for (i=0;i<10;i++){
	rn=rand()%100;
	if(rn<dr)
		printf("Monster dropped something!\n");
}


//BEGIN CLEAN UP
//END   CLEAN UP
return EXIT_SUCCESS;
}
//END   MAIN FUNCTION

//BEGIN FUNCTIONS
//END   FUNCTIONS
