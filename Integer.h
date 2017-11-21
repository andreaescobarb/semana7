#ifndef Integer_h
#define Integer_h

#include "object.h"
#include <string>

using namespace std;

class Integer{
  private:
    int value;

  public:
    Integer();
    Integer(int);
    int getValue();
    void setValue(int);
    /*virtual bool equals(object*)=0;
    virtual bool toString()=0;*/
    int operator+(Integer&);
    bool operator==(Integer&);

    operator int();
};
#endif
