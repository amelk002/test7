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


class Op : public Base
{
	protected:
		double number;
	public:
		Op(): number(0) {}
		Op(double x): number(x) {}
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
class Sub : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Sub(): left(NULL), right(NULL) {}
		Sub(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() - this->right->evaluate();
		}
};
class Mult : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Mult(): left(NULL), right(NULL) {}
		Mult(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() * this->right->evaluate();
		}
};
class Div : public Base
{
	protected:
		Base* left;
		Base* right;
	public:
		Div(): left(NULL), right(NULL) {}
		Div(Base* left, Base* right): left(left), right(right) {}
		double evaluate()
		{
			return this->left->evaluate() / this->right->evaluate();
		}
};
class Sqr : public Base
{
	protected:
		Base* child;
	public:
		Sqr(): child(NULL) {}
		Sqr(Base* one): child(one) {}
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
