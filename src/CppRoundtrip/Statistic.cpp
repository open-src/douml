// *************************************************************************
//
// Copyright 2004-2010 Bruno PAGES  .
// Copyright 2012-2013 Nikolai Marchenko.
// Copyright 2012-2013 Leonardo Guilherme.
//
// This file is part of the DOUML Uml Toolkit.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License Version 3.0 as published by
// the Free Software Foundation and appearing in the file LICENSE.GPL included in the
//  packaging of this file.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License Version 3.0 for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//
// e-mail : doumleditor@gmail.com
// home   : http://sourceforge.net/projects/douml
//
// *************************************************************************

#include "Statistic.h"
#include "UmlCom.h"
//Added by qt3to4:
#include "misc/mystr.h"

unsigned Statistic::n_updated;
unsigned Statistic::n_created;

void Statistic::produce()
{
    UmlCom::trace(WrapperStr("<br><hr><br><font face=helvetica>C++ roundtrip done</font><br><br>") +
                  WrapperStr("<font face=helvetica>	") +
                  WrapperStr().setNum(n_updated) + WrapperStr(" classes updated </font><br>") +
                  WrapperStr("<font face=helvetica>	") +
                  WrapperStr().setNum(n_created) + WrapperStr(" classes created</font><br><hr><br>"));
}
