/***************************************************************************
 *   libneo.hpp                               Version 20250330.142722      *
 *                                                                         *
 *   Biblioteca pessoal                                                    *
 *   Copyright (C) 2025         by Arthur Epifanio De Azevedo              *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License.        *
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
 *   Webpage: hydra.beco.cc/user/aea/                                      *
 *   Phone: 81995902947                                                    *
 ***************************************************************************/

/* ---------------------------------------------------------------------- */
/**
 * \file libneo.hpp
 * \ingroup GroupUnique
 * \brief Biblioteca pessoal
 * \details This is a CPP Header File with HPP extension
 * \version 20250330.142722
 * \date 2025-03-30
 * \author Arthur Epifanio De Azevedo <<aea@poli.br>>
 * \par Webpage
 * <<a href="hydra.beco.cc/user/username/">hydra.beco.cc/user/aea/</a>>
 * \copyright (c) 2025 GNU GPL v2
 * \note This program is free software: you can redistribute it
 * and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA. 02111-1307, USA.
 * Or read it online at <<http://www.gnu.org/licenses/>>.
 *
 *
 * \todo Now that you have the template, hands on! Programme!
 * \warning Be carefull not to lose your mind in small things.
 * \bug This file right now does nothing usefull
 *
 */



/* ---------------------------------------------------------------------- */
/* includes */
#include <iostream> /* (Input/output library) Several standard stream objects */
#include <vector> /* (Standard C++ library) Dynamic array */
using namespace std;


/* #include "libuser.hpp" */ /* your personal user library together with libuser.cpp */
/* #include "libneo.hpp" */ /* To be created for this template if needed */

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef _LIBNEO_HPP
#define _LIBNEO_HPP
#endif /* NOT def _LIBNEO_H */

/* ---------------------------------------------------------------------- */
//Classes

class Sorteio 
{
    private:
    vector<int> numeros;
    size_t nNumeros;

    public: 
    Sorteio(int inicio, int fim);
    bool verificar() const;
    int sortear();
};

//-------------------------------------------------------------------------
// prototypes
void normalizar(); // Função de normalização



/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : CPP config - Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc>      Version 20250309.153530 */
