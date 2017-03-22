/***********************************************************************
 * Module:  Player_A.cpp
 * Author:  wangjs
 * Modified: 2017Äê3ÔÂ21ÈÕ 10:29:02
 * Purpose: Implementation of the class Player_A
 ***********************************************************************/
#include "stdafx.h"
#include "PlayImp.h"

////////////////////////////////////////////////////////////////////////
// Name:       Player_A::Working()
// Purpose:    Implementation of Player_A::Working()
// Return:     int
////////////////////////////////////////////////////////////////////////

int CPlayer_A::Working(void)
{
   // TODO : implement
	return m_pBehavior->Work();
	
}

int CPlayer_B::Working(void)
{
	// TODO : implement
	return m_pBehavior->Work();
}

int CPlayer_C::Working(void)
{
	// TODO : implement
	return m_pBehavior->Work();
}