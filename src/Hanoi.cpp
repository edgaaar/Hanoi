#include "Hanoi.h"

	

Hanoi::Hanoi(int n)
{
	Discos = n;
	O = (origen.empty())?INFINITY:origen.top();
	A = (aux.empty())?INFINITY:aux.top();
	D = (destino.empty())?INFINITY:destino.top();
}

void Hanoi::Resolver()
{
	if (Discos%2 != 0)
	{
		for (int i = 1; i <= pow(2,Discos)-1; ++i)
		{
			if (i%3 == 0)
			{
				OrigenDestino();
			}
			if (i%3 == 2)
			{
				OrigenAuxiliar();
			}
			if (i%3 == 1)
			{
				AuxiliarDestino();
			}
			
		}
	}

	if (Discos%2 == 0)
	{
		for (int i = 1; i <= pow(2,Discos)-1; ++i)
		{
			if (i%3 == 1)
			{
				OrigenAuxiliar();
			}
			if (i%3 == 2)
			{
				OrigenDestino();
			}
			if (i%3 == 0)
			{
				AuxiliarDestino();
			}
			
		}
	}
}

void Hanoi::LlenarTorre()
{
	for (int i = Discos; i >= 1; --i)
	{
		this->origen.push(i);
	}

}

void Hanoi::OrigenAuxiliar()
{
	if (O < A)
	{
		aux.push(O);
		origen.pop();
	}
	else
	{
		origen.push(A);
		aux.pop();
	}
}

void Hanoi::OrigenDestino()
{
	if (O < D)
	{
		destino.push(O);
		origen.pop();

	}
	else
	{
		origen.push(D);
		destino.pop();
	}
}

void Hanoi::AuxiliarDestino()
{
	if (A < D)
	{
		destino.push(A);
		aux.pop();

	}
	else
	{
		aux.push(D);
		destino.pop();
	}
}
