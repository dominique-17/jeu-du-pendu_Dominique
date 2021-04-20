#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_BUFFER_SIZE 1000
#define MAX_LINE_ROW 5

int main()
{
	FILE *fp;
	char tab[MAX_LINE_ROW][MAX_BUFFER_SIZE];
	int line = 0, sel = 0, j=0, lower = 1, upper = 5;

	fp = fopen("main.txt", "r");
	if (fp == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier\n");
		return 1;
	}

	while(fgets(tab[line], MAX_BUFFER_SIZE, fp)){
		tab[line][strlen(tab[line]) -1] = '\0';
		line++;
	}
	srand(time(0));
    sel = (rand() % (upper - lower + 1)) + lower;

	 char *word = strtok(tab[sel-1], " ");
printf("%d\n", sel);
	while(word != NULL){
		  if (j == sel){
			printf("%s\n", word);
			word = strtok(NULL, " ");
			return 1;
		  }
		j++;
	}

	return 0;
}