/***********************************************************************
 * Module:  Behavior_A.cpp
 * Author:  wangjs
 * Modified: 2017��3��21�� 10:27:54
 * Purpose: Implementation of the class Behavior_A
 ***********************************************************************/
#include "stdafx.h"
#include "BehaviorImp.h"

////////////////////////////////////////////////////////////////////////
// Name:       Behavior_A::Work()
// Purpose:    Implementation of Behavior_A::Work()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Behavior_A::Work(void)
{
   // TODO : implement
	GRS_USEPRINTF();
	GRS_PRINTF(_T("Behavior A\n"));

	return 0;
}

int Behavior_B::Work(void)
{
	// TODO : implement
	GRS_USEPRINTF();
	GRS_PRINTF(_T("Behavior B\n"));

	return 0;
}

int Behavior_C::Work(void)
{
	// TODO : implement
	GRS_USEPRINTF();
	GRS_PRINTF(_T("Behavior C\n"));

	return 0;
}