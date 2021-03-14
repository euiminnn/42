#include <string.h>
#include <stdio.h>

int main() {
	char *str = "abcdef";
	char *result;

	result = strstr(str, "d");
	printf("%s", result);
}
