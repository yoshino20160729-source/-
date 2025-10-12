#include <stdio.h>
typedef enum {
    GPIO_Speed_2MHz,
    GPIO_Speed_10MHz,
    GPIO_Speed_50MHz
}A;
struct jiegouti {
    A GPIO_Speed;
};

void GPIO_StructureInit(struct jiegouti* i) {
  i->GPIO_Speed = GPIO_Speed_2MHz;
}

 int main() 
 {
 struct jiegouti a;

 GPIO_StructureInit(&a);
 printf("GPIO Speed: %d\n", a.GPIO_Speed);

  return 0;
  }