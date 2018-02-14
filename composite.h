#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "component.h"

using namespace std;

class composite : public Base{
	protected:
		Base* left;
		Base* right;
	public:
 		virtual double evaluate() = 0;
};


class Operand : public Base
{
	protected:
		double number;
	public:
		Operand(): number(0) {}
		Operand(double x): number(x) {}
		double evaluate()
		{
			return number;
		}
};
class Add : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Add(): left(NULL), right(NULL) {}
		Add(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() + this->right->evaluate();
		}
};
class Subtract : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Subtract(): left(NULL), right(NULL) {}
		Subtract(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() - this->right->evaluate();
		}
};
class Multiply : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Multiply(): left(NULL), right(NULL) {}
		Multiply(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() * this->right->evaluate();
		}
};
class Division : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Division(): left(NULL), right(NULL) {}
		Division(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() / this->right->evaluate();
		}
};
class Squared : public Base
{
	protected:
		Base* child;
	public:
		Squared(): child(NULL) {}
		Squared(Base* one): child(one) {}
		double evaluate()
		{
			return this->child->evaluate() * this->child->evaluate();
		}
};

class Ceiling: public Base
{
	protected:
		Base* child;
	public:
		Ceiling(): child(NULL) {}
		Ceiling(Base* number): child(number) {}
		double evaluate()
		{
			return ceil(child->evaluate());
		}
};
class Floor: public Base
{
	protected:
		Base* child;
	public:
		Floor(): child(NULL) {}
		Floor(Base* number): child(number) {}
		double evaluate()
		{
			return floor(child->evaluate());
		}
};
class Absolute: public Base
{
	protected:
		Base* child;
	public:
		Absolute(): child(NULL) {}
		Absolute(Base* number): child(number) {}
		double evaluate()
		{
			return fabs(child->evaluate());
		}
};

#endif
