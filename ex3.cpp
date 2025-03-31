/***************************************************************************
 *   ex3.cpp                                  Version 20250330.141830      *
 *                                                                         *
 *   Normalização                                                          *
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
 *   $ make ex3.out
 *
 * or manually with gcc:
 *   $ g++ ex3.cpp -o ex3.out -Wall -Wextra -g -O0
 * extra options: -DDEBUG=1
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include "libneo.hpp" // Personal library

/* ---------------------------------------------------------------------- */
/* This function does: Normaliza um numero entre 0 e 1
 *
 * It receives as input: Numero a ser normalizado, valor minimo e maximo
 *
 * It returns: Valor normalizado entre 0 e 1
 */
int main(void)
{
 
    normalizar();

    return 0;
}


/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>      Version 20250309.153530 */
