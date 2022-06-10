#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int pack4Char2Int(char a, char b, char c, char d);
int checkEvenParity(short input);

void main() {
	int res= pack4Char2Int('a', 'b', 'c', 'd');
	printf("the res is:%d\n", res);
	int num = checkEvenParity(24);
	printf("the res is:%d\n", num);
}

int pack4Char2Int(char a, char b, char c, char d) {
	int ans = 0;
	ans |= a;
	ans <<= 8;
	ans |= b;
	ans <<= 8;
	ans |= c;
	ans <<= 8;
	ans |= d;

	return ans; 
}

int checkEvenParity(short input) {
	int count = 0;
	short mask = '1';
	for (int i = 0; i < sizeof(input)*8; i++) {
		if (mask & input) {
			count++;
			mask <<= 1;
		}
		mask <<= 1;
	}

	if (count % 2 == 0) {
		return 1;
	}
	return 0;
}


