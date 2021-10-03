#include<iostream>
#include<stdlib.h>
using namespace std;

#define el << "\r\n"

class try1
{
public:

  try1()
  {
    cout << "void " << (void*)this el;
    cout << "constructor" el;
  }
  ~try1()
  {
    cout << "void " << (void*)this el;
    cout << "destrutor" el;
  }
  void print()
  {
    cout << "print void " << (void*)this el;
  }
};


struct ScopeObj
{
  int count;
  void * (*objPtr)(bool create, void * & v);
};

void * nullvoid;
template<typename A>
void * hobj(bool create, void *  & v = nullvoid)
{
  if(create)
  {
    void * v1 = malloc(sizeof(ScopeObj) + sizeof(A));
    ScopeObj & s = (*((ScopeObj*)v1));
    s.count = 1;
    s.objPtr = hobj<A>;
    v = (void*)(v1 + sizeof(ScopeObj));
    //(*((A*)v)) = A();// this will create a scope
    //new ((A*)v) A();//this calls new construcctor
    new((A*)v) A();
    return v;
  }
  else
  {
    (*((A*)v)).~A();
    void * v1 = (void*)(v - sizeof(ScopeObj));
    free(v1);
    return v;
  }
}

void deleteObj(void* v)
{
  cout << "deleteObj " << v el;
  void * v1 = (void*)(v - sizeof(ScopeObj));
  ScopeObj & s = (*((ScopeObj*)v1));
  s.objPtr(false, v);
}

#define newObj(A) (*((A*)hobj<A>(true)));

int main()
{
  try1 & t1 = newObj(try1);//(*((try1*)hobj<try1>(true)));
  t1.print();
  deleteObj(&t1);

  return 0;
}
