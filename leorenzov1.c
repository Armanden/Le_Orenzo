#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "defs.h"
#include "bitboards.c"

int main () {
	S_BOARD pos[1];

	srand(time(NULL));
	AllInit();

	ParseFen(START_FEN, pos);
	PrintBoard(pos);
	CheckBoard(pos);

	printf("\nParsed FEN: %s\n\n", START_FEN);
	printf("Side to move: %s\n", pos->side == WHITE ? "White" : "Black");
	printf("Position key: %llX\n", pos->poskey);

	return 0;
}

