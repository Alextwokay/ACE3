#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

if (isServer) then {
    ["ace_zeusUnitAssigned", FUNC(handleZeusUnitAssigned)] call CBA_fnc_addEventHandler;
};

ADDON = true;
