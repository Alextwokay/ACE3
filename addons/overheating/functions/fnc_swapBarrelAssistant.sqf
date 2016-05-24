/*
 * Author: esteldunedain, Commy2
 * Make a unit start swapping the barrel of another unit
 *
 * Argument:
 * 0: Unit initiating the action <OBJECT>
 * 1: Unit that has the weapon <OBJECT>
 * 2: Weapon <STRING>
 *
 * Return value:
 * None
 *
 * Example:
 * [player, cursorTarget, currentWeapon cursorTarget] call ace_overheating_fnc_swapBarrelAssistant
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_assistant", "_gunner", "_weapon"];
TRACE_3("params",_assistant,_gunner,_weapon);

// Make the standing player kneel down
if (stance _assistant != "PRONE") then {
    [_assistant, "amovpknlmstpsraswrfldnon", 1] call EFUNC(common,doAnimation);
};

// Barrel dismount gesture
playSound "ACE_BarrelSwap";

[3, [_assistant, _gunner, _weapon], {}, {}, (localize LSTRING(SwappingBarrel))] call EFUNC(common,progressBar);

["ace_initiateSwapBarrelAssisted", [_assistant, _gunner, _weapon], _gunner] call CBA_fnc_targetEvent;
