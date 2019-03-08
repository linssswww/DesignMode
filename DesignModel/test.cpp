#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "StrategyPattern.hpp"
#include "SimpleFactory.hpp"
#include "Decorator.hpp"
#include <memory>
SCENARIO("SimpleFactory", "[]") 
{
	OperationFactory oper_fatr;
	operation *oper = oper_fatr.CreateOperation('-');
	oper->SetNumberA(5);
	oper->SetNumberB(6);
	double result = oper->getResult();
}

SCENARIO("StratepyPattern", "[]")
{
	std::unique_ptr<ConcreteStrategyB> strategyB(new ConcreteStrategyB());
	context text(strategyB.get());
	text.contextStrategyAlgorithmInterface();
}
SCENARIO("Decorator", "[]")
{
	std::cout << "/n/n/n" << std::endl;
	std::cout << "start Decorator" << std::endl;
	std::unique_ptr<ConcreteStrategyB> strategyB(new ConcreteStrategyB());
	

	std::unique_ptr<Component> component(new Component());
	std::unique_ptr<ConcreteDecoratorA> decoratorA(new  ConcreteDecoratorA);
	std::unique_ptr<ConcreteDecoratorB> decoratorB(new  ConcreteDecoratorB);
	decoratorA.get()->SetComponent(component.get());
	decoratorB.get()->SetComponent(decoratorA.get());
	decoratorB.get()->operate();

	std::cout << "end Decorator" << std::endl;
}
