#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;

	const char valid_formats[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (valid_formats[j])
		{
			if (format[i] == valid_formats[j])
			{
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						if (!str)
							str = "(nil)";
						printf("%s", str);
						break;
				}
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

