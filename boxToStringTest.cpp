#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1,3.0,4.0,5.0,6.0);  
  assertEquals("[ul=(3,4), w=5, h=6]", boxToString(b1), "boxToString(b1)");
  
  initBox(&b2,3.14159,6.2831853071,5.2479567,8.8575346);
  assertEquals("[ul=(3.14,6.28), w=5.25, h=8.86]", boxToString(b2), "boxToString(b2)");
  assertEquals("[ul=(3,6), w=5, h=9]", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("[ul=(3.142,6.283), w=5.248, h=8.858]", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("[ul=(3.1416,6.2832), w=5.248, h=8.8575]", boxToString(b2,5), "boxToString(b2,5)");
		   
  return 0;
}
