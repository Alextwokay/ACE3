#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(ModuleSettings), QGVAR(ModuleSurrender), QGVAR(ModuleHandcuffed)};
        weapons[] = {"ACE_CableTie"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ACE_Interaction"};
        author[] = {"commy2", "KoffeinFlummi"};
        authorUrl = "https://github.com/commy2/";
        VERSION_CONFIG;
    };
};

#include "ACE_Settings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMoves.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgEden.hpp"
class ACE_newEvents {
    SettingsInitialized = "ace_settingsInitialized";
    medical_onUnconscious = "ace_medical_onUnconscious";
    SetSurrendered = "ace_setSurrendered";
    SetHandcuffed = "ace_setHandcuffed";
    MoveOutCaptive = "ace_moveOutCaptive";
    MoveInCaptive = "ace_moveInCaptive";
    playerChanged = "ace_playerChanged";
    CaptiveStatusChanged = "ace_captiveStatusChanged";
    CaptiveStatusChanged = "ace_captiveStatusChanged";
    SetSurrendered = "ace_setSurrendered";
    SetHandcuffed = "ace_setHandcuffed";
    MoveOutCaptive = "ace_moveOutCaptive";
    SetHandcuffed = "ace_setHandcuffed";
    MoveInCaptive = "ace_moveInCaptive";
    SetHandcuffed = "ace_setHandcuffed";
};