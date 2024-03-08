#include <stdio.h>
int main(){
float x, y, z, media;
printf("Informe 3 numeros para calcular a media entre eles:\n");
scanf("%f%f%f", &x, &y, &z);
media = (x + y + z) / 3;
printf("A media calculada dos numeros %.2f, %.2f e %.2f e: %.2f\n", x, y, z, media);

return 0;
}
