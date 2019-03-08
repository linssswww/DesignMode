#include "SimpleFactory.hpp"
int main1()
{
	OperationFactory oper_fatr;
	operation *oper = oper_fatr.CreateOperation('-');
	oper->SetNumberA(5);
	oper->SetNumberB(6);
	double result = oper->getResult();
    return 0;
}

