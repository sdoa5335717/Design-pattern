/***********************************************************************
 * Module:  BehaviorImp.h
 * Author:  wangjs
 * Modified: 2017Äê3ÔÂ21ÈÕ 10:27:54
 * Purpose: implement of the virtual class Behavior
 ***********************************************************************/

#if !defined(__strategy_Behavior_A_h)
#define __strategy_Behavior_A_h

#include "Behavior.h"

class Behavior_A : public Behavior
{
public:
   int Work(void);

protected:
private:

};

class Behavior_B : public Behavior
{
public:
	int Work(void);

protected:
private:

};

class Behavior_C : public Behavior
{
public:
	int Work(void);

protected:
private:

};

#endif