// Strategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CommonHeader.h"

int _tmain(int argc, _TCHAR* argv[])
{

	CPlayer *pPlayA = new CPlayer_A;
	pPlayA->SetBehavior(new Behavior_A);
	pPlayA->Working();

	CPlayer *pPlayB = new CPlayer_B;
	pPlayB->SetBehavior(new Behavior_B);
	pPlayB->Working();
	// Change strategy
	pPlayB->SetBehavior(new Behavior_C);
	pPlayB->Working();

	system("pause");
	return 0;
}

