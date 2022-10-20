#include <stdio.h>
#include <string.h>

void main(void)
{
	char firstname[32] = "Anuoluwapo";
	char lastname[] = "Omobolaji";

	
	strcat(firstname, lastname);	
	printf("%s",firstname);

}
