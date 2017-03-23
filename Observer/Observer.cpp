// Observer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Observer.h"
#include "Subject.h"
#include "ObserverImp.h"

int _tmain(int argc, _TCHAR* argv[])
{
	EInfo stInfo_A;
	stInfo_A.m_nID = 101;
	stInfo_A.m_pAddress = _T("beijing");
	stInfo_A.m_pName = _T("ABC");

	CObserver *pObserver_A = new CObserver_A;
	CObserver *pObserver_B = new CObserver_B;

	CSubject *pSub_A = new CSubject_A(stInfo_A);
	pSub_A->AddObserver(pObserver_A);
	pSub_A->AddObserver(pObserver_B);

	pSub_A->NotifyObserver();

	((CObserver_A*)pObserver_A)->Display();
	((CObserver_B*)pObserver_B)->Display();

	system("pause");
	return 0;
}

