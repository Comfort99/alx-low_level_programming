#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		free(d);
	}
}
