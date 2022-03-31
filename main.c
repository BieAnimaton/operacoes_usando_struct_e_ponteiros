#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    float x;
    float y;
} Coordenadas;

void somar (Coordenadas *c1, float valor) {
    c1->x = c1->x + valor;
    c1->y = c1->y + valor;
    printf("Adição dos valores com %.2f.\n", valor);
}

void subtrair (Coordenadas *c1, float valor) {
    c1->x = c1->x - valor;
    c1->y = c1->y - valor;
    printf("Subtração dos valores com %.2f.\n", valor);
}

void multiplicar (Coordenadas *c1, float valor) {
    c1->x = c1->x * valor;
    c1->y = c1->y * valor;
    printf("Multiplicação dos valores com %.2f.\n", valor);
}

void dividir (Coordenadas *c1, float valor) {
    c1->x = c1->x / valor;
    c1->y = c1->y / valor;
    printf("Divisão dos valores com %.2f.\n", valor);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    Coordenadas c1;

    c1.x = 18;
    c1.y = 32;

    printf("CORD1 = [%.2f, %.2f]\n\n", c1.x, c1.y);

    somar(&c1, 7);
    printf("CORD1 = [%.2f, %.2f]\n", c1.x, c1.y);
    somar(&c1, 22);
    printf("CORD1 = [%.2f, %.2f]\n\n", c1.x, c1.y);

    subtrair(&c1, 61);
    printf("CORD1 = [%.2f, %.2f]\n", c1.x, c1.y);
    subtrair(&c1, 20);
    printf("CORD1 = [%.2f, %.2f]\n\n", c1.x, c1.y);

    multiplicar(&c1, 5);
    printf("CORD1 = [%.2f, %.2f]\n", c1.x, c1.y);
    multiplicar(&c1, 0.5);
    printf("CORD1 = [%.2f, %.2f]\n\n", c1.x, c1.y);

    dividir(&c1, 2);
    printf("CORD1 = [%.2f, %.2f]\n", c1.x, c1.y);
    dividir(&c1, 5);
    printf("CORD1 = [%.2f, %.2f]\n", c1.x, c1.y);

    return 0;
}
