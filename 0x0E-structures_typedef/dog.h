#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defining characters of a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: the owner of a dog
 *
 * Description: this struct enable us to provide
 * info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
