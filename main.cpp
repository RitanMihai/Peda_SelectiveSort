#include<iostream>

int main()
{
	// Declarare lista non-dinamica de 10 elemente intregi
	int nr = 10;
	int lista[] = {5, 4, 1, 2, 9, 4, 3, 14, 20, 7};
	
	std::cout << "lista initiala: ";
	// Afisare elemente lista prin iterare
	for (int i = 0; i < nr - 1; i++)
	{
		std::cout << lista[i] << " ";
	}

	for (int i = 0; i < nr - 1; i++)
	{
		// Presupunem ca primul element este si minimul
		int minIndex = i; // pozitia acestuia in vector, nu valoarea
		int minValuare = lista[i]; // valoarea

		for (int j = i+1; j < nr-1 ; j++)
		{
			// Daca elementul curent lista[j] este mai mic decat vechiul minim
			if (lista[j] < lista[minIndex])
			{
				/* Am gsit noul minim, tinem minte pozitia */
				minIndex = j;
				minValuare = lista[j];
			}
		}
		
		// Optimizare: Interschimbam numai daca gasim o pozitie noua
		if (minIndex != i) {
			lista[minIndex] = lista[i];
			lista[i] = minValuare;
		}
	}

	
	// Afisare elemente lista prin iterare
	std::cout << "\nLista sortata: ";
	
	for (int i = 0; i < nr - 1; i++)
	{
		std::cout << lista[i] << " ";
	}
	
}
