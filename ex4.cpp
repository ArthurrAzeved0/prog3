/***************************************************************************
 *   ex4.cpp                                  Version 20250406.182441      *
 *                                                                         *
 *   Sorteio                                                               *
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
 *   $ make ex4.out
 *
 * or manually with gcc:
 *   $ g++ ex4.cpp -o ex4.out -Wall -Wextra -g -O0
 * extra options: -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */
#include "libneo.hpp"

/* ---------------------------------------------------------------------- */
/* This function does
 *
 * It receives as input ...
 *
 * It returns ...
 */
int main(void)
{
    int inicio, fim, quantidade;

    cout << "=== Sorteador sem repeticao ===\n";
    cout << "Digite o valor inicial: ";
    cin >> inicio; // coleta o valor inicial

    while (true)
    {

        cout << "Digite o valor final: ";
        cin >> fim; // coleta o valor final

        // verifica se o valor inicial é menor que o final
        if (inicio >= fim)
        {
            cerr << "Erro: valor inicial deve ser menor que o valor final." << endl;
        }
        else
            break;
    }

    int total = fim - inicio + 1; // calcula o total de valores possíveis
    cout << "Total de valores possiveis: " << total << endl;

    while (true)
    {
        cout << "Digite a quantidade de valores a serem sorteados: ";
        cin >> quantidade; // coleta a quantidade de valores a serem sorteados

        if (quantidade <= 0 || quantidade > total)
        {
            cerr << "Erro: quantidade deve ser maior que 0 e menor ou igual ao total de valores." << endl;
        }
        else
            break;
    }

    Sorteio sorteio(inicio, fim); // cria o objeto Sorteio com os valores inicial e final

    cout << "\nSorteando " << quantidade << " valores entre " << inicio << " e " << fim << ":\n";

    for (int i = 0; i < quantidade; ++i)
    {

        cout << sorteio.sortear() << " "; // sorteia e imprime o valor
    }

    cout << "\nFim do sorteio.\n";
    return 0;
}

/* add more functions here */

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>      Version 20250309.153530 */
