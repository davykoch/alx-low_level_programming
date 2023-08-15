#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
  * init_dog - function that initializes struct dog
  * @d: pointer to struct
  * @name: pointer to dog name
  * @age: pointer to dog age
  * @owner: pointer to dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
				d->name = name;
				d->age = age;
				d->owner = owner;
}
