//links.h


template<class T>
class Link
{
public:
	void Attch(T* t){ _t = t }

private:
	T* _t;
};



template<class A, class B>
class Link
{
public:
	Link* find(A* a);
	Link* find(B* a);


private:
	A* _a;
	B* _b;
};
