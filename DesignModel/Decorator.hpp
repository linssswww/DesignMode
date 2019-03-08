#pragma once
#include<string>
#include<iostream>
class Component
{
public:
	Component() {};
	~Component() {};
	virtual void operate(){};
};

class ConcreteDecorator:public Component
{
public:
	ConcreteDecorator() {}
	~ConcreteDecorator() {}
	
};
class Decorator:public Component
{
public:
	Decorator() {}
	~Decorator() {}
	void operate() 
	{
		if(this->component!= NULL)
		{
			this->component->operate();
		}
	};
	void SetComponent(Component *component)
	{
		this->component = component;
	}
protected:
	Component *component;

};
class ConcreteDecoratorA:public Decorator
{
public:
	ConcreteDecoratorA(){}
	~ConcreteDecoratorA(){}
	void operate() 
	{
		component->operate();
		AddBehavior();
	}

private:
	void AddBehavior() 
	{
		printf("װ������Ϊ");
	};
};

class ConcreteDecoratorB :public Decorator
{
public:
	ConcreteDecoratorB() {}
	~ConcreteDecoratorB() {}
	void operate() 
	{
		component->operate();
		this->add_state  = "װ����״̬";
		std::cout << this->add_state << std::endl;
	}

private:
	std::string add_state;
};

