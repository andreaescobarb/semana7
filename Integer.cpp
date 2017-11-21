#include "Integer.h"

Integer::Integer(){
  value = 0;
}

Integer::Integer(int pValue){
  value = pValue;
}

int Integer::getValue(){
  return value;
}

void Integer::setValue(int pValue){
  value = pValue;
}

int Integer::operator+(Integer& rvalue){
  int respuesta = this->value + rvalue.getValue();
  return respuesta;
}

bool Integer::operator==(Integer& rvalue){
  return this->value == rvalue.getValue();
}

Integer::operator int(){
  return value;
}
/*bool Integer::equals(object* pOther){
  if (typeid(*pOther)==typeid(Integer)) {
    Integer* temp = dynamic_cast<Integer*>(pOther);
    return temp->getint()==value;
  } else{
    return false;
  }

}

string Integer::toString(){
  string ret;
  ret = "TO DO";
  return ret;
}*/
