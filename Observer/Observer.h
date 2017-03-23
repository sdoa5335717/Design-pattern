/************************************************************************/
/* The declaration of observer abstract class
/* add by wangjs
/************************************************************************/
#ifndef OBSERVER_H
#define OBSERVER_H

class CObserver{
public: 
	virtual BOOL UpdateOberver(void* pUpdate) = NULL;
	//virtual void Display() = NULL;
};
#endif