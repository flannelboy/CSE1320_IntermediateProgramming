#include <stdio.h>
#include <string.h>
#define MANUFACTURER 20
#define NAME 20
#define BUFFER_SIZE 255

struct Car{
    char name[NAME];
    char manufacturer[MANUFACTURER];
};
struct Car AddCar();
void Trim(char*[]);
void PrintCar(struct Car cars[]);
