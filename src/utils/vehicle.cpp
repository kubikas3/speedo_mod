#include "vehicle.h"

void GetVehicleSpeedVec(uintptr_t pVehicle, CVector *pSpeed)
{
    if (pVehicle)
    {
        *pSpeed = *(CVector *)(pVehicle + 0x68);
    }
}

void GetVehicleSubClass(uintptr_t pVehicle, eVehicleType *pSubClass)
{
    if (pVehicle)
    {
        *pSubClass = *(eVehicleType *)(pVehicle + 0x738);
    }
}
