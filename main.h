#ifndef __MAIN_H
#define __MAIN_H

/*
struct Player {
	UBYTE x, y;
	UBYTE xdir, ydir, yspeed;
	UBYTE jumped, bounce;
};
*/

struct Enemy {
	UBYTE type, sprite;
	UBYTE x, y;
	UBYTE state, frame;
	UBYTE dir;
};

void initIngame();
void updateInput();
void updatePlayer();
void bouncePlayer();
void updateEnemy(struct Enemy* e);
void updateEnemies();
void spawnWaterEnemy();
void spawnLowEnemy();
void spawnHighEnemy();
void killEnemy(struct Enemy *e);

#endif
