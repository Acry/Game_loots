//BEGIN DESCRIPTION
//END   DESCRIPTION

//BEGIN INCLUDES
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
//END   INCLUDES

//BEGIN CPP DEFINITIONS
//END   CPP DEFINITIONS

//BEGIN DATASTRUCTURES
struct monster{
	int droprate;
};
struct monster barbar={ 30 };
//END	DATASTRUCTURES

//BEGIN GLOBALS
//END   GLOBALS

//BEGIN FUNCTION PROTOTYPES
void monster_dies	(struct monster);
bool decide_ini_drop	(struct monster);
void decide_item_drop	(struct monster);
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
srand (time(NULL));
//END   INIT

monster_dies(barbar);

//BEGIN CLEAN UP
//END   CLEAN UP
return EXIT_SUCCESS;
}
//END   MAIN FUNCTION

//BEGIN FUNCTIONS
void monster_dies(struct monster entity)
{
//monster dies sound
//monster dies animation
if (decide_ini_drop(entity))
	;
else
	printf("Monster dropped nothing!\n");
//set respawn timer
}

bool decide_ini_drop(struct monster entity)
{
if (rand()%100 < entity.droprate){
	printf("Monster dropped something!\n");
	return true;
}
return false;
}

//END   FUNCTIONS
