#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lth_n, lth_o;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	lth_n = strlen(name);
	lth_o = strlen(owner);
	dog->name = malloc(lth_n + 1);
	dog->owner = malloc(lth_o + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
