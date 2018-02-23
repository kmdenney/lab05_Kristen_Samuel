#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1,3.14159,6.2831853071,5.2479567,8.8575346);  
  assertEquals("[ul=(3,6), w=5, h=9]", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("[ul=(3.1,6.3), w=5.2, h=8.9]", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("[ul=(3.14,6.28), w=5.25, h=8.86]", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("[ul=(3.142,6.283), w=5.248, h=8.858]", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("[ul=(3.1416,6.2832), w=5.248, h=8.8575]", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("[ul=(3.14159,6.28319), w=5.24796, h=8.85753]", boxToString(b1,6), "boxToString(b1,6)");
		   
  return 0;
}
