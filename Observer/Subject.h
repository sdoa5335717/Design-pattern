/************************************************************************/
/* define subject abstract class
/* add by wangjs
/************************************************************************/
#ifndef SUBJECT_H
#define SUBJECT_H

#include "stdafx.h"
class CSubject
{
public:
	// add observer
	virtual void AddObserver(CObserver *pObserver) = NULL;
	// Remove observer
	virtual void RemoveOberver(CObserver *pObserver) = NULL;
	// Notify observer
	virtual void NotifyObserver() = NULL;

	vector<CObserver*> m_aRegObserverArray;
};

#endif