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
		printf("\nYou need to pick 1 - 5: ");
		rewind(stdin);
	}
	return choice;
}

void output(char string[][40]) {
	for (int i = 0; i < 11; i++) {
		printf("%s\n", string[i]);
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
	if (club.id == 1) {
		printf("\n----- TROPHIES: -----\n");
		printf("English Premier League (EFL): %d\n", club.LeagueCup);
		printf("UEFA Champions League: %d\n", club.UCL);
		printf("UEFA Europa League: %d\n", club.UEL);
		printf("FA Cup: %d\n", club.CountryCup);
		printf("Carabao Cup: %d\n", club.ContinentalCup);
		printf("----------------------\n");
	}
	else if (club.id == 2) {
		printf("\n----- TROPHIES: -----\n");
		printf("LaLiga: %d\n", club.LeagueCup);
		printf("UEFA Champions League: %d\n", club.UCL);
		printf("UEFA Europa League: %d\n", club.UEL);
		printf("Spain Cup: %d\n", club.CountryCup);
		printf("King Cup: %d\n", club.ContinentalCup);
		printf("----------------------\n");
	}
	else if (club.id == 3) {
		printf("\n----- TROPHIES: -----\n");
		printf("Scudetto: %d\n", club.LeagueCup);
		printf("UEFA Champions League: %d\n", club.UCL);
		printf("UEFA Europa League: %d\n", club.UEL);
		printf("Copa Italia: %d\n", club.CountryCup);
		printf("Italy cup: %d\n", club.ContinentalCup);
		printf("----------------------\n");
	}
	else if (club.id == 4) {
		printf("\n----- TROPHIES: -----\n");
		printf("Bundesliga: %d\n", club.LeagueCup);
		printf("UEFA Champions League: %d\n", club.UCL);
		printf("UEFA Europa League: %d\n", club.UEL);
		printf("Germany Cup: %d\n", club.CountryCup);
		printf("Cup of Germany: %d\n", club.ContinentalCup);
		printf("----------------------\n");
	}
	else if (club.id == 5) {
		printf("\n----- TROPHIES: -----\n");
		printf("Ligue 1: %d\n", club.LeagueCup);
		printf("UEFA Champions League: %d\n", club.UCL);
		printf("UEFA Europa League: %d\n", club.UEL);
		printf("French Cup: %d\n", club.CountryCup);
		printf("Cup of French: %d\n", club.ContinentalCup);
		printf("----------------------\n");
	}
}

void not_found() {
	printf("\nTHE ENTERED CLUB WASNT FOUND\n");
	printf("\n----------------------\n");
	printf("1 - Find a club again\n");
	printf("2 - Exit\n");
	printf("----------------------\n");
	printf("Your choice: ");
}

void find_team() {
	int choice = 0;
	char* pattern;
	printf("\nEnter the name of the EPL/La Liga/Seria A/Bundesliga/Ligue1 season 22/23 team you want to get information about: ");
	input(&pattern);
	show_club_info(pattern);
	if (show_club_info(pattern) == -1) {
		not_found();
		choice = choice_(choice);
		switch (choice) {
		case 1:
			find_team();
		case 2:
			exit(0);
		}
	}
}

int menu(Team club) {
	int choice = 0;
	printf("\n------------- MENU -------------\n");
	printf("1 - Main info about %s\n", club.club_name);
	printf("2 - Line up of %s\n", club.club_name);
	printf("3 - Trophies of %s\n", club.club_name);
	printf("4 - Find another club\n");
	printf("5 - Exit\n");
	printf("---------------------------------\n");
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
		find_team();
	case 5:
		exit(0);
	}
}

void print_club(Team club) {
	int choice = 0;
	printf("\n----- RESULT OF SEARCH: -----\n");
	printf("%s\n", club.club_name);
	printf("-----------------------------\n");
	menu(club);
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

int show_club_info(char* pattern) {
	for (int i = 0; i < 20; i++) {
		if (find_pattern(EPL[i].club_name, pattern)) {
			print_club(EPL[i]);
			break;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (find_pattern(LaLiga[i].club_name, pattern)) {
			print_club(LaLiga[i]);
			break;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (find_pattern(SerieA[i].club_name, pattern)) {
			print_club(SerieA[i]);
			break;
		}
	}
	for (int i = 0; i < 18; i++) {
		if (find_pattern(Bundesliga[i].club_name, pattern)) {
			print_club(Bundesliga[i]);
			break;
		}
	}
	for (int i = 0; i < 20; i++) {
		if (find_pattern(Ligue1[i].club_name, pattern)) {
			print_club(Ligue1[i]);
			break;
		}
	}
	return -1;
}

int main() {
	find_team();
	return 0;
}