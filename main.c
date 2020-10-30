#include <stdio.h>
int main(void)
{
  int Per;
  float  L1,L2,Height,SumL,Area;
  printf("Enter L1 : ");
  scanf("%f",&L1);
  printf("Enter L2 : ");
  scanf("%f",&L2);
  printf("Enter Height : ");
  scanf("%f",&Height);
  Per = (L2/L1)*100;
  printf("L2 = %d %  \n",Per);
  SumL = L1 + L2;
  if(Per>= 40) {
  	 Area = 0.5*Height*SumL;
  printf("Area is : %0.3f",Area);
  }
  return 0;
}
