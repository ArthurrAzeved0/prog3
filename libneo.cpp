/***************************************************************************
 *   libneo.cpp                               Version 20250330.141931      *
 *                                                                         *
 *   Biblioteca de funções                                               *
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
 *   $ make libneo.out
 *
 * or manually with gcc:
 *   $ g++ libneo.cpp -o libneo.out -Wall -Wextra -g -O0
 * extra options: -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include "libneo.hpp" 

/* ---------------------------------------------------------------------- */
//Normalization function

void normalizar()
{
    double x, minimo, maximo;

    // Coleta de dados
    cout << "Digite o valor do numero a ser normalizado: ";
    cin >> x;

    while(true)
    {
    cout << "Digite o valor mínimo: ";
    cin >> minimo;
    if(minimo >= x)
    {
        cerr << "Erro: minimo; deve ser menor que x." << endl;
        continue;
    }else
        break;
    }

    while(true)
    {
    cout << "Digite o valor máximo: ";
    cin >> maximo;
    if (maximo <= x)
    {
        cerr << "Erro: maximo; deve ser maior que x." << endl;
        continue;
        
    }else if (maximo <= minimo)
    {
        cerr << "Erro: maximo; deve ser maior que minimo." << endl;
        continue;
    }else
        break;
    }

  
    // Normalização
    double resultado = (x - minimo) / (maximo - minimo);

    // Exibição do resultado
    cout << "O valor normalizado é: " << resultado << endl;
}



/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>      Version 20250309.153530 */
