#include <stdio.h>
#include "Colorcitos.h"
#define T "Nico puto "

void flashear(void)
{
    azul();
    verde();
    aguamarina();
    rojo();
    purpura();
    amarillo();
    blanco();
    gris();
    azulClaro();
    verdeClaro();
    aguamarinaClaro();
    rojoClaro();
    purpuraClaro();
    amarilloClaro();
    blancoBrillante();
}
void azul (void)
{
    system("COLOR 1");
    printf(T);
}
void verde (void)
{
    system("COLOR 2");
    printf(T);
}
void aguamarina (void)
{
    system("COLOR 3");
    printf(T);
}
void rojo (void)
{
    system("COLOR 4");
    printf(T);
}
void purpura (void)
{
    system("COLOR 5");
    printf(T);
}
void amarillo (void)
{
    system("COLOR 6");
    printf(T);
}
void blanco (void)
{
    system("COLOR 7");
    printf(T);
}
void gris (void)
{
    system("COLOR 8");
    printf(T);
}
void azulClaro (void)
{
    system("COLOR 9");
    printf(T);
}
void verdeClaro (void)
{
    system("COLOR A");
    printf(T);
}
void aguamarinaClaro (void)
{
    system("COLOR B");
    printf(T);
}
void rojoClaro (void)
{
    system("COLOR C");
    printf(T);
}
void purpuraClaro (void)
{
    system("COLOR D");
    printf(T);
}
void amarilloClaro (void)
{
    system("COLOR E");
    printf(T);
}
void blancoBrillante (void)
{
    system("COLOR F");
    printf(T);
}
