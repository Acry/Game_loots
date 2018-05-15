//BEGIN DESCRIPTION
//https://ideone.com/uWk6Tz
//END   DESCRIPTION

//BEGIN INCLUDES
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
//END   INCLUDES

//BEGIN CPP DEFINITIONS
#define RARITY_GRADES 3

//COLORS
//https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
//END   CPP DEFINITIONS

//BEGIN DATASTRUCTURES
struct grade{
	char name[30];
	int dr;
};
struct grade rarity[RARITY_GRADES];

struct drops{
	char name[30];
	struct grade rarity[RARITY_GRADES];
};
struct drops helmet1;

struct monster{
	char name[30];
	int droprate;
//	int hp;
	struct drops items;
};
struct monster barbar;
//END	DATASTRUCTURES

//BEGIN GLOBALS
//END   GLOBALS

//BEGIN FUNCTION PROTOTYPES
void monster_dies	(struct monster);
bool drop		(struct monster);
void item		(struct monster);
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
strcpy(rarity[0].name , "Junk");
rarity[0].dr= 0;
strcpy(rarity[1].name , "Magic");
rarity[1].dr= 89;
strcpy(rarity[2].name , "Ancient Artefact");
rarity[2].dr= 98;

int i;
for (i=0; i<RARITY_GRADES; i++){
	helmet1.rarity[i]=rarity[i];
}

strcpy(helmet1.name, "Wonderhelm");
strcpy(barbar.name , "Barbar");

barbar.droprate=30;
barbar.items=helmet1;
//END   INIT

for (i=0; i<100; i++){
	monster_dies(barbar);
}


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
if (drop(entity))
	item(entity);
else
	printf("%s dropped nothing!\n",entity.name);
//set respawn timer
}

bool drop(struct monster entity)
{
if (rand()%100 < entity.droprate){
	return true;
}
return false;
}

void item(struct monster entity)
{
printf("%s dropped %s in ",entity.name,entity.items.name);
int rn;
rn=rand()%100;

if(rn>entity.items.rarity[2].dr)
	printf(KMAG "%s",entity.items.rarity[2].name);
else if (rn>entity.items.rarity[1].dr)
	printf(KBLU "%s",entity.items.rarity[1].name);
else
	printf(KWHT "%s",entity.items.rarity[0].name);
printf(KNRM " rarity\n");

}
//END   FUNCTIONS
