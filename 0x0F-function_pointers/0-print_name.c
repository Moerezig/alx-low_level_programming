#include "function_pointers.h"
/**
 *print_name - Displa
 *@name: name of a person.
 *@f: function pointer
 */



void print_name(char *name, void (*f)(char *))

{

		if (name && f)

			f(name);

}
