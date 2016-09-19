#include "Hanoi.h"

int main()
{
	Hanoi h = Hanoi(3);
	h.LlenarTorre();
	h.Resolver();
	return 0;
}