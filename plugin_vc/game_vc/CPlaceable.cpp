/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#include "CPlaceable.h"

// Converted from thiscall void CPlaceable::CPlaceable(void) 0x4BBAD0
CPlaceable::CPlaceable() : CMatrix(plugin::dummy) {
    ((void(__thiscall *)(CPlaceable*))0x4BBAD0)(this);
}

// Converted from thiscall bool CPlaceable::IsWithinArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4BB900
bool CPlaceable::IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2) {
    return ((bool(__thiscall *)(CPlaceable*, float, float, float, float, float, float))0x4BB900)(this, x1, y1, z1, x2, y2, z2);
}

// Converted from thiscall bool CPlaceable::IsWithinArea(float x1,float y1,float x2,float y2) 0x4BB9E0
bool CPlaceable::IsWithinArea(float x1, float y1, float x2, float y2) {
    return ((bool(__thiscall *)(CPlaceable*, float, float, float, float))0x4BB9E0)(this, x1, y1, x2, y2);
}

// Converted from thiscall void CPlaceable::SetHeading(float heading) 0x4BBA80
void CPlaceable::SetHeading(float heading) {
    ((void(__thiscall *)(CPlaceable*, float))0x4BBA80)(this, heading);
}