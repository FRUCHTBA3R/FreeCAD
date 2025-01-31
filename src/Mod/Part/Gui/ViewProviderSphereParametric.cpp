/***************************************************************************
 *   Copyright (c) 2004 Jürgen Riegel <juergen.riegel@web.de>              *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#include "PreCompiled.h"

#include "ViewProviderSphereParametric.h"

using namespace PartGui;


//**************************************************************************
// Construction/Destruction

PROPERTY_SOURCE(PartGui::ViewProviderSphereParametric, PartGui::ViewProviderPrimitive)

ViewProviderSphereParametric::ViewProviderSphereParametric()
{
  sPixmap = "Part_Sphere_Parametric";
}

ViewProviderSphereParametric::~ViewProviderSphereParametric()
{

}

std::vector<std::string> ViewProviderSphereParametric::getDisplayModes(void) const
{
  std::vector<std::string> StrList;

  // add your own modes
  StrList.push_back("Flat Lines");
  StrList.push_back("Shaded");
  StrList.push_back("Wireframe");
  StrList.push_back("Points");

  return StrList;
}

// ----------------------------------------------------------------------------

PROPERTY_SOURCE(PartGui::ViewProviderEllipsoid, PartGui::ViewProviderPrimitive)

ViewProviderEllipsoid::ViewProviderEllipsoid()
{
    sPixmap = "Part_Ellipsoid_Parametric";
}

ViewProviderEllipsoid::~ViewProviderEllipsoid()
{
}

std::vector<std::string> ViewProviderEllipsoid::getDisplayModes(void) const
{
  std::vector<std::string> StrList;

  // add your own modes
  StrList.push_back("Flat Lines");
  StrList.push_back("Shaded");
  StrList.push_back("Wireframe");
  StrList.push_back("Points");

  return StrList;
}
