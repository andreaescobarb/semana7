#include <iostream>
#include "Integer.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Integer A(10);
  Integer B(15);

  cout<<A+B<<endl;

  Integer *i1= new Integer(20);
  Integer *i2 = new Integer(1);

  cout<<(*i1)+(*i2)<<endl;

  delete i1;
  delete i2;

  cout<<A<<endl;

  return 0;
}
