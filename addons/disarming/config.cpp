#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {"ACE_DebugPotato"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ACE_Interaction"};
        author[] = {"PabstMirror"};
        authorUrl = "https://github.com/PabstMirror/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "gui_disarm.hpp"

class ACE_newEvents {
    DisarmDebugCallback = "ace_disarmDebugCallback";
    DisarmDropItems = "ace_disarmDropItems";
    DisarmDropItems = "ace_disarmDropItems";
    DisarmDebugCallback = "ace_disarmDebugCallback";
};