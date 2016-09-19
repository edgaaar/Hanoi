#include <iostream>
#include <stack>
#include <cmath>

class Hanoi
{
public:
	std::stack<int> origen;
	std::stack<int> aux;
	std::stack<int> destino;
	int Discos;
	int NumMovimientos;
	int O, A, D;

	Hanoi(int Discos);
	void Resolver(void);
	void LlenarTorre(void);
	void OrigenAuxiliar(void);
	void OrigenDestino(void);
	void AuxiliarDestino(void);
	//~Hanoi();

};