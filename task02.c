#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.62e-34
int main(){
    const float BOLTMANN_CONSTANT=1.38e-23;
    const int ABSOLUTE_ZERO=-273;
    printf("Speed of Light:%d\n",SPEED_OF_LIGHT);
    printf("Acceleration due to gravity:%.2f m/s^2\n",GRAVITY);
    printf("Planck's Constant:%.2e J-s\n",PLANCK_CONSTANT);
    printf("Boltzmann Constant:%.2e\n",BOLTMANN_CONSTANT);
    printf("Absolute Zero: %d Celsius\n",ABSOLUTE_ZERO);

    return 0;







}
