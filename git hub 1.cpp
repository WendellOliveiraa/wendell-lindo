#include <stdio.h>
int main(){
float nota1[3], nota2[3], media[3];
int i;
for (i=0; i<3; i++){
printf("digite a nota: ");
scanf("%f", &nota1[i]);
}
for (i=0; i<3; i++){
printf("nota:%f\n",nota1[i]);
}
for(i=0; i<3; i++){
printf("digite a nota 2:");
scanf("%f",&nota2[i]);
}
for (i=0; i<3; i++){
printf("nota:%f\n",nota2[i]);
}
for (i=0; i<3; i++){
media[i] = (nota1[i] + nota2[i]) /2;
printf("\nMedia: %f\n",media[i]);
}

}
