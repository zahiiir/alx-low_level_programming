nclude "main.h"

/**
 *  * malloc_checked - function that allocates memory using
 *   * @b: input size to allocate
 *    *
 *     * Return: nothing
 *      */

void *malloc_checked(unsigned int b)
{
	        void *p;

		        p = malloc(b);
			        if (p == NULL)
					        {
							                exit(98);
									        }

				        return (p);
}
