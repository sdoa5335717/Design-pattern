#if !defined(PLAYER_H)
#define PLAYER_H

#include "Behavior.h"

// define abstract class, 
class CPlayer
{
public:
	CPlayer(){m_pBehavior = NULL;};
	Behavior *m_pBehavior;

	// composition behavior interface
	virtual int Working(void)=0;
	// change behavior
	void SetBehavior(Behavior* pBehavior)
	{
		// delete old strategy
		COMMON_CLASS_SAFEFREE(m_pBehavior);
		m_pBehavior = pBehavior;
	}

protected:
	
private:

};

#endif