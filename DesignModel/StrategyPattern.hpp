#pragma once
#include "stdio.h"
#include <string>
#include <memory>

class Strategy
{
public:
	Strategy() {};
	virtual ~Strategy() {};
	virtual void AlgorithmInterface() 
	{
		printf("Strategy");
	};
};

class ConcreteStrategyA:public Strategy
{
public:
	ConcreteStrategyA() {};
	~ConcreteStrategyA() {};
	void AlgorithmInterface() 
	{
		printf("StrategyConcreteA");
	};
};

class ConcreteStrategyB: public Strategy
{
public:
	ConcreteStrategyB() {};
	~ConcreteStrategyB() {};
	void AlgorithmInterface() 
	{
		printf("StrategyConcreteB");
	};
};

class ConcreteStrategyC: public Strategy
{
public:
	ConcreteStrategyC() {};
	~ConcreteStrategyC() {};
	void AlgorithmInterface() 
	{
		printf("StrategyConcreteC");
	};
};

class context
{
public:
	context(Strategy *strategy)
	{
		this->strategy = strategy;
	};
	~context() {};
	void contextStrategyAlgorithmInterface() 
	{
		this->strategy->AlgorithmInterface();
	}
	Strategy *strategy;
};