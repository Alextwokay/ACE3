#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

EGVAR(medical,STATE_MACHINE) = (configFile >> "ACE_Medical_StateMachine") call CBA_statemachine_fnc_createFromConfig;

ADDON = true;
