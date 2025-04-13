/***************************************************************************
 *   ex7.cpp                                  Version 20250413.113500      *
 *                                                                         *
 *   Nomalização                                                         *
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
 *   $ make ex7.out
 *
 * or manually with gcc:
 *   $ g++ ex7.cpp -o ex7.out -Wall -Wextra -g -O0
 * extra options: -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */
#include <iostream> /* (Input/output library) Several standard stream objects */
#include <stdexcept>
using namespace std;


/* ---------------------------------------------------------------------- */
/* This function does ...
 *
 * It receives as input ...
 *
 * It returns ...
 */

 class Normalizador
 {
    private:
    double x;
    double minimo;
    double maximo;

    public:
    void entrada()
    {
        cout << "Digite um numero a ser normalizado: ";
        cin >> x;

        cout << "Digite o valor minimo: ";
        cin >> minimo;
        if(minimo >= x)
        {
            throw invalid_argument("Erro: minimo deve ser menor que x.");
        }

        cout << "Digite o valor maximo: ";
        cin >> maximo;
        if(maximo <= x)
        {
            throw invalid_argument("Erro: maximo deve ser maior que x.");
        }

    }

    double calcular()
    {
        return (x - minimo) / (maximo - minimo);
    }

    void exibir()
    {
        cout << "Valor normalizado: " << calcular() << endl;
    }
 };


int main(void)
{
    cout << "--- Valor Normalizado ---\n";
    Normalizador a;

    try{
        a.entrada();
        a.exibir();
            }catch(const invalid_argument &e){
                cerr << "[Erro de entrada] " << e.what() << endl;
            }catch(...){
                cerr << "[Erro desconhecido]\n";
            }

    return 0;
}


/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>      Version 20250309.153530 */
