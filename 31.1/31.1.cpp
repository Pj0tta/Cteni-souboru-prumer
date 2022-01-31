#include <stdio.h>

int main()
{
	FILE* vstup = fopen("Znamky.txt", "r");
	if (vstup == NULL) {
		printf("ChYbOvAl Jsi: Dopustil jste se argumentacniho faulu priteli :/");
		return 1;
	}
	while (!feof(vstup)) {
		float prumer = 0;
		char jmeno[20];
		int znamky;
		fscanf(vstup, "%s", &jmeno);
		for (int i = 0; i <= 10; i++) {
			fscanf(vstup, "%d", &znamky);
			prumer+=znamky;
		}
		prumer /= 10;
		printf("%s: %7.2f\n", jmeno, prumer);


	}
}

