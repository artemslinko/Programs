
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Struct.h"



void input(char** string) {
	int N = 256;
	(*string) = (char*)malloc(N * sizeof(char));
	int i = 0;
	while (((*string)[i] = getchar()) != '\n' && (*string)[i] != EOF) {
		i++;
		if (i == N) {
			N *= 2;
			(*string)[i] = (char*)realloc((*string), N * sizeof(char));
		}
	}
	(*string) = (char*)realloc((*string), (i + 1) * sizeof(char));
	(*string)[i] = '\0';
}

int choice_(int choice) {
	while (scanf_s("%d", &choice) == 0 || choice <= 0 || choice > 5 || getchar() != '\n') {
		printf("\nYou need to write 1 - 5: ");
		rewind(stdin);
	}
	return choice;
}


void output(char string[][40]) {
	for (int i = 0; i < 11; i++) {
		printf("\t%s\n", string[i]);
	}
}

void printClub(Team club) {
	int choice = 0;
	printf("\n----- RESULT OF SEARCH: -----\n");
	printf("%s\n", club.club_name);
	printf("-----------------------------\n");
	menu(club);
}

void show_club_info(Team* club, char* pattern) {
	for (int i = 0; i < 20; i++) {
		if (find_pattern(club[i].club_name, pattern)) {
			printClub(club[i]);
		}
	}
}


void main_info(Team club) {
	printf("\n----- MAIN INFO: -----\n");
	printf("Name of the club: %s\n", club.club_name);
	printf("Coach: %s\n", club.coach);
	printf("Date of foundation: %d\n", club.date_of_foundation);
	printf("----------------------\n");
}

void lineup(Team club) {
	printf("\n----- LINE UP: -----\n");
	output(club.lineup);
	printf("----------------------\n");
}

void trophies(Team club) {
	printf("\n----- TROPHIES: -----\n");
	printf("English Premier League (EFL): %d\n", club.EPL);
	printf("UEFA Champions League: %d\n", club.UCL);
	printf("UEFA Europa League: %d\n", club.UEL);
	printf("FA Cup: %d\n", club.FACups);
	printf("Carabao Cup: %d\n", club.CarabaoCup);
	printf("----------------------\n");
}

void find_another_team() {
	char* pattern;
	printf("\nEnter the name of the EPL season 22/23 team you want to get information about: ");
	input(&pattern);
	show_club_info(Club, pattern);
}

int menu(Team club) {
	int choice = 0;

	printf("1 - Main info about %s\n", club.club_name);
	printf("2 - Line up of %s\n", club.club_name);
	printf("3 - Trophies of %s\n", club.club_name);
	printf("4 - Find another club\n");
	printf("5 - Exit\n");
	printf("Your choice: ");
	choice = choice_(choice);
	switch (choice) {
	case 1:
		main_info(club);
		menu(club);

	case 2:
		lineup(club);
		menu(club);
	case 3:
		trophies(club);
		menu(club);
	case 4:
		find_another_team();
	case 5:
		exit(0);
	}
}

int find_pattern(char* str, char* ptr) {
	int i, j, k;
	for (i = 0; str[i] != '\0'; i++) {
		for (j = i, k = 0; ptr[k] != '\0' && str[j] == ptr[k]; j++, k++)
			;
		if (ptr[k] == '\0') {
			return 1;
		}
	}
	return 0;
}






int main() {
	char* pattern;
	printf("Enter the name of the EPL season 22/23 team you want to get information about: ");
	input(&pattern);
	show_club_info(Club, pattern);

	return 0;
}