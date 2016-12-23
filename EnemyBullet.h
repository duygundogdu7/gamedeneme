#pragma once
#include "Bullet.h"

class EnemyBullet : public Bullet
{
public:
	EnemyBullet();
	~EnemyBullet();

	void drawBullet (int);
	void deleteAll();
	void deletePassing (void);
};

