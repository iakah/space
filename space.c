#include <stdio.h>

int main() {

  double weight;
  int planet;

  printf("Please enter your current earth weight: ");
  scanf("%lf", &weight);

  printf("\nI have information for the following planets: \n\n");

  printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
  printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

  printf("Which planet are you visiting:  \n\n");
  scanf("%d", &planet);

  switch (planet){
    case 1:
      weight *= 0.38;
      break;
    case 2:
      weight *= 0.91;
      break;
    case 3:
      weight *= 0.38;
      break;
    case 4:
      weight *= 2.34;
      break;
    case 5:
      weight *= 1.06;
      break;
    case 6:
      weight *= 0.92;
      break;
    case 7:
      weight *= 1.19;
      break;
    default:
      printf("\n\tInvalid choice\n");
  }


  printf("Your weight on planet %d would be %lf\n", planet, weight);

}
