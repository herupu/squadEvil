#pragma once
#include "accessories.h"
class plate :
	public accessories
{
public:
	plate();
	~plate();

	virtual void eventP(player &);
};

