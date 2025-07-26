#include "MenuModule.h"
#include "IntModule.h"
#include "FloModule.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	int Mode = 0;
	int calculation = 0;
	Mode = mode();
	switch (Mode) {
	case 1:
		calculation = int_mode();

		switch (calculation) {
		case 1:
			int_sum();
			break;
		case 2:
			int_sub();
			break;
		case 3:
			int_mul();
			break;
		case 4:
			int_div();
			break;
		}
		break;

	case 2:
		calculation = float_mode();

		switch (calculation) {
		case 1:
			flo_sum();
			break;
		case 2:
			flo_sub();
			break;
		case 3:
			flo_mul();
			break;
		case 4:
			flo_div();
			break;
		}
		break;

	case 3:
		exit(1);
	}
}