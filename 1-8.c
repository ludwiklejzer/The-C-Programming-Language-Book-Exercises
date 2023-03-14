#include <stdio.h>

int main() {
	int c = 0;
	int chars = 0;
	int new_lines = 0;
	int blanks = 0;
	int tabs = 0;

	while ((c = getchar()) != EOF) {
		++chars;
		if (c == '\n') {
			++new_lines;
		} else if (c == ' ') {
			++blanks;
		} else if (c == '\t') {
			++tabs;
		}
	}
	printf("\nCharacters: %d\n", chars);
	printf("New Lines: %d\n", new_lines);
	printf("Blanks: %d\n", blanks);
	printf("Tabs: %d\n", tabs);
}
