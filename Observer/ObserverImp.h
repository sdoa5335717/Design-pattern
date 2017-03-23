/************************************************************************/
/* The declaration of oberver class and subject class
/* add by wangjs
/************************************************************************/
#ifndef OBSERVERIMP_H
#define OBSERVERIMP_H

#include "stdafx.h"
typedef struct EmployeeInformation
{
	INT m_nID;
	TCHAR* m_pName;
	TCHAR* m_pAddress;
}EInfo;
// simulate data
class CEmployee
{
public:
	CEmployee();
	~CEmployee();
public:
	EInfo GetEmployeeInfo(){return m_stEmployee;}
	void SetEmployeeInfo(EInfo stInfo)
	{
		m_stEmployee.m_nID = stInfo.m_nID;
		m_stEmployee.m_pName = stInfo.m_pName;
		m_stEmployee.m_pAddress = stInfo.m_pAddress;
	}
private:
	EInfo m_stEmployee;
};

class CSubject_A : public CSubject
{
public:
	CSubject_A(EInfo stInfo)
	{
		m_aEmployArray.push_back(stInfo);
	}
	void AddObserver(CObserver *pObserver)
	{
		m_aRegObserverArray.push_back(pObserver);
	}
	void RemoveOberver(CObserver *pObserver)
	{
		vector<CObserver*>::iterator ita = find(m_aRegObserverArray.begin(), m_aRegObserverArray.end(), pObserver);
		if (ita != m_aRegObserverArray.end())
		{
			m_aRegObserverArray.erase(ita);
		}
		else
		{
			COMMON_USEPRINTF();
			COMMON_PRINTF(_T("The observer is not registered!\n"));
		}
	}
	void NotifyObserver()
	{
		for (unsigned int i=0; i<m_aRegObserverArray.size(); i++)
		{
			m_aRegObserverArray[i]->UpdateOberver((void*)&m_aEmployArray);
		}
	}
private:
	vector<EInfo> m_aEmployArray;
};

class CObserver_A : public CObserver
{
public:
	BOOL UpdateOberver(void* pData)
	{
		m_aEmployArray.clear();
		vector<EInfo>*pTmp = (vector<EInfo>*)pData;
		for (unsigned int i=0; i< pTmp[0].size();i++)
		{
			m_aEmployArray.push_back(pTmp[0][i]);
		}
		
		return TRUE;
	}
	void Display()
	{
		COMMON_USEPRINTF();
		for (unsigned int i=0; i< m_aEmployArray.size();i++)
		{
			COMMON_PRINTF(_T("%d %s %s"), m_aEmployArray[i].m_nID, 
				m_aEmployArray[i].m_pName, m_aEmployArray[i].m_pAddress);
		}
	}
private:
	vector<EInfo> m_aEmployArray;
};
class CObserver_B : public CObserver
{
public:
	BOOL UpdateOberver(void* pData)
	{
		m_aEmployArray.clear();
		vector<EInfo>*pTmp = (vector<EInfo>*)pData;
		for (unsigned int i=0; i< pTmp[0].size();i++)
		{
			m_aEmployArray.push_back(pTmp[0][i]);
		}
		return TRUE;
	}
	void Display()
	{
		COMMON_USEPRINTF();
		for (unsigned int i=0; i< m_aEmployArray.size();i++)
		{
			COMMON_PRINTF(_T("%d %s %s"), m_aEmployArray[i].m_nID, 
				m_aEmployArray[i].m_pName, m_aEmployArray[i].m_pAddress);
		}
	}
private:
	vector<EInfo> m_aEmployArray;
};
#endif