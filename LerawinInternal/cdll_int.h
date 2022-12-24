#pragma once

#include "client_class.h"

class IBaseClientDLL
{
public:
	// Virtual functions to pads bytes / placeholders.
	virtual void fn0() = 0;
	virtual void fn1() = 0;
	virtual void fn2() = 0;
	virtual void fn3() = 0;
	virtual void fn4() = 0;
	virtual void fn5() = 0;
	virtual void fn6() = 0;
	virtual void fn7() = 0;
	virtual ClientClass *GetAllClasses() = 0;
};