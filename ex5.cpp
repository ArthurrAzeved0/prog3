/***************************************************************************
 *   ex5.cpp                                  Version 20250406.193035      *
 *                                                                         *
 *   Ordenar Vetor                                                         *
 *   Copyright (C) 2025         by Arthur Epifanio De Azevedo              *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Arthur Epifanio De Azevedo                                            *
 *   Email: aea@poli.br                                                    *
 *   Webpage: http://hydra.beco.cc/user/username/                          *
 *   Phone: 81995902947                                                    *
 ***************************************************************************/

/*
 * Compile with make:
 *   $ make ex5.out
 *
 * or manually with gcc:
 *   $ g++ ex5.cpp -o ex5.out -Wall -Wextra -g -O0
 * extra options: -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */
#include <iostream> /* (Input/output library) Several standard stream objects */
#include <vector>  /* (Vector library) Standard template library for vectors */
#include <algorithm> /* (Algorithm library) Standard template library for algorithms */
#include <random> /* (Random library) Standard template library for random numbers */
using namespace std;

/* ---------------------------------------------------------------------- */
/* This function does ...
 *
 * It receives as input ...
 *
 * It returns ...
 */
int main(void)
{

    // Initialize random number generator
    random_device rd;  
    mt19937 gen(rd()); 
    uniform_int_distribution<> dist(1, 100); // Define the range

    // Vetor com numeros 500 aleatorios
    vector<int> numeros;
    for (int i = 0; i < 500; ++i)
    {
        numeros.push_back(dist(gen)); // Preenche o vetor com numeros aleatorios
    }

    // Ordena o vetor
    sort(numeros.begin(), numeros.end()); // Ordena o vetor em ordem crescente
    cout << "Vetor ordenado: " << endl;
    for(int i = 0; i < 500; ++i)
    {
        cout << numeros[i] << " "; // Imprime o vetor ordenado
        if(i % 22 == 21) cout << endl; // Imprime uma nova linha a cada 10 numeros
    }
    
    return 0;
}


/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>      Version 20250309.153530 */
