#include <stdio.h>
#include <ctype.h>
#include <string.h>

int checkLogin(char *login, char *passwd);
int checkValidPASS(char *ps);
int checktwo(char *psB);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	
	if ( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	}
	else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPASS(password))
		printf("%s:accepted\n", password);
	else 
		printf("%s:NOT accepted\n", password);
}

int checkValidPASS(char *ps) {
	int i, accept = 0, founddigit = 0;
	if (strlen(ps) == 5) {
		for (i = 0 ; i < strlen(ps) ; i++) {
			if (isdigit(ps[i])) {
				founddigit = 1;
				break;
			}
		}
		if (founddigit)
		accept = 1;
	}
	return accept;
}

int checkLogin(char *login, char *passwd) {
	if ( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}

int checktwo(char *psB) {
	int i, j, accept = 0, count = 0, countA = 0;
	if (strlen(psB) >= 5 && strlen(psB) <= 8) {
		if (!isdigit(psB[0])) {
			for (i = 0 ; i < strlen(psB) ; i++) {
				if (isalpha(psB[i]) == 1) {
					countA++;
				}
			}
			if (countA >= 2) {
				for (j = 0 ; j < strlen(psB) ; j++) {
					if (isdigit(psB[i])) {
						count++;
					}
					if (count >= 2) {
						accept = 1;
					}
				}
			}
		}
	}
	return accept;
}
