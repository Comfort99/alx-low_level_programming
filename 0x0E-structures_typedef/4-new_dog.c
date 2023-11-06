#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: char
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	dog_t *newDog = malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);

	 newName = strdup(name);

	if (!newName)
	{
		free(newDog);
		return (NULL);
	}

	newOwner = strdup(owner);

	if (!newOwner)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}
	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
