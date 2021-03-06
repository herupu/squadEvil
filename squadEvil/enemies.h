#pragma once
#include "accessories.h"
class skills;

class enemies :
	public accessories
{
public:
	enemies();
	~enemies();

	RectangleShape hpBar;
	virtual const bool getAttackState() { return targetActive; }
	virtual void hit(skills*);
	virtual bool update(); //return if delete object

	bool isDead;

	virtual int operator-=(int demage);
	operator Sprite() const { return sprite; }
protected:
	struct enemieStats
	{
		float demage;
		float HP = 100;
	} stats;
	
	struct enemyState {
		Vector2f pos;
		Vector2f dir;
		float speed;
		int angle = 0;
		float range;
	} enemie;
	bool targetActive;

	Clock hitTimer;
	Texture allTex[4];

	virtual Vector2f newDir(int rotation);

};

