#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

/**
* struct dog - description of the dog.
* @name: name of the dog.
* @owner: owner of the dog.
* @age: age of the dog.
*
*/

struct dog
{
	char *name;
	char *owner;
	double age;
};
#endif
