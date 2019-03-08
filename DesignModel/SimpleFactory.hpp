#pragma once
#include "stdio.h"
#include <string>

class operation
{
public:
	operation() {};
	virtual ~operation() {};
	virtual double getResult()=0;

	double GetNumberA() { return numberA; };
	double GetNumberB() { return numberB; };
	void SetNumberA(double d) { numberA = d; };
	void SetNumberB(double d) { numberB = d; };

private:
	double numberA;
	double numberB;
};

class OperationAdd: public operation
{
public:
	OperationAdd() {};
	~OperationAdd() {};
	double getResult() 
	{
		return GetNumberA() + GetNumberB();
	};
};

class OperationSub:public operation
{
public:
	OperationSub(){}
	~OperationSub(){}
	double getResult()
	{
		return GetNumberA() - GetNumberB();
	}
};
class OperationMul:public operation
{
public:
	OperationMul(){}
	~OperationMul(){}
	double getResult()
	{
		return GetNumberA() * GetNumberB();
	}
};

class OperationFactory
{
public:
	OperationFactory(){}
	~OperationFactory(){}
	operation* CreateOperation(char operate)
	{
		operation *oper = nullptr;
		switch (operate)
		{
		case '+':
			oper = new OperationAdd();
			break;
		case '-':
			oper = new OperationSub();
			break;
		case '*':
			oper = new OperationMul();
			break;
		default:
			break;
		}
		return oper;
	}
	
};

