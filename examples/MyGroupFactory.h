/*
* Polylib - Polygon Management Library
*
* Copyright (c) 2010-2011 VCAD System Research Program, RIKEN.
* All rights reserved.
*
* Copyright (c) 2012-2014 Advanced Institute for Computational Science, RIKEN.
* All rights reserved.
*
*/

#ifndef MYGROUP_FACTORY_H
#define MYGROUP_FACTORY_H

#include <string>
#include <string.h>

#include "common/BBox.h"
#include "polygons/VTree.h"
#include "polygons/Polygons.h"

#include "groups/PolygonGroup.h"
#include "groups/PolygonGroupFactory.h"
#include "CarGroup.h"
#include "Polylib.h"
//#include "BladeGroup.h"


using namespace std;
using namespace PolylibNS;


class MyGroupFactory:public PolygonGroupFactory{

public:

	PolygonGroup* create_instance(std::string class_name,PL_REAL tolerance);
};
#endif // MYGROUPFACTORY_H
