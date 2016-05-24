#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {"ACE_Box_Misc", "ACE_bananaItem"};
        weapons[] = {"ACE_ItemCore","ACE_FakePrimaryWeapon", "ACE_Banana"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_main","ace_modules"};
        author[] = {"KoffeinFlummi"};
        authorUrl = "https://github.com/KoffeinFlummi/";
        VERSION_CONFIG_COMMON;
    };
};

// This class will be deprecated in version 3.8.0
class ACE_newEvents {
    forceWalk = "ace_forceWalk";
    PlayerJip = "ace_playerJip";
    useItem = "ace_useItem";
    displayTextPicture = "ace_displayTextPicture";
    displayTextStructured = "ace_displayTextStructured";
    activeCameraChanged = "ace_activeCameraChanged";
    visibleMapChanged = "ace_visibleMapChanged";
    cameraViewChanged = "ace_cameraViewChanged";
    playerVisionModeChanged = "ace_playerVisionModeChanged";
    playerInventoryChanged = "ace_playerInventoryChanged";
    playerWeaponChanged = "ace_playerWeaponChanged";
    playerTurretChanged = "ace_playerTurretChanged";
    playerVehicleChanged = "ace_playerVehicleChanged";
    playerChanged = "ace_playerChanged";
    SettingsInitialized = "ace_settingsInitialized";
    InitSettingsFromModules = "ace_initSettingsFromModules";
    SEH_s = "ace_sEH_s";
    SEH = "ace_sEH";
    SEH_all = "ace_sEH_all";
    SEH_all = "ace_sEH_all";
    enableSimulationGlobal = "ace_enableSimulationGlobal";
    hideObjectGlobal = "ace_hideObjectGlobal";
    setVanillaHitPointDamage = "ace_setVanillaHitPointDamage";
    setVectorDirAndUp = "ace_setVectorDirAndUp";
    switchMove = "ace_switchMove";
    playMoveNow = "ace_playMoveNow";
    playMove = "ace_playMove";
    setVelocity = "ace_setVelocity";
    selectLeader = "ace_selectLeader";
    setSpeaker = "ace_setSpeaker";
    engineOn = "ace_engineOn";
    setFuel = "ace_setFuel";
    setDir = "ace_setDir";
    unloadPersonEvent = "ace_unloadPersonEvent";
    loadPersonEvent = "ace_loadPersonEvent";
    fixPosition = "ace_fixPosition";
    fixFloating = "ace_fixFloating";
    fixCollision = "ace_fixCollision";
    setStatusEffect = "ace_setStatusEffect";
    SEH_s = "ace_sEH_s";
    SEH_s = "ace_sEH_s";
    setSpeaker = "ace_setSpeaker";
    displayTextStructured = "ace_displayTextStructured";
    unloadPersonEvent = "ace_unloadPersonEvent";
    hideObjectGlobal = "ace_hideObjectGlobal";
    SEH = "ace_sEH";
    SettingChanged = "ace_settingChanged";
    SettingChanged = "ace_settingChanged";
    SEH_s = "ace_sEH_s";
    setSpeaker = "ace_setSpeaker";
    setSpeaker = "ace_setSpeaker";
    setSpeaker = "ace_setSpeaker";
    loadPersonEvent = "ace_loadPersonEvent";
    hideObjectGlobal = "ace_hideObjectGlobal";
    HeadbugFixUsed = "ace_headbugFixUsed";
    HeadbugFixUsed = "ace_headbugFixUsed";
    blockDamage = "ace_blockDamage";
    blockDamage = "ace_blockDamage";
    firedNonPlayerVehicle = "ace_firedNonPlayerVehicle";
    firedPlayerVehicleNonLocal = "ace_firedPlayerVehicleNonLocal";
    firedPlayerVehicle = "ace_firedPlayerVehicle";
    firedNonPlayer = "ace_firedNonPlayer";
    firedPlayerNonLocal = "ace_firedPlayerNonLocal";
    firedPlayer = "ace_firedPlayer";
    switchMove = "ace_switchMove";
    playMoveNow = "ace_playMoveNow";
    playMoveNow = "ace_playMoveNow";
    playMoveNow = "ace_playMoveNow";
    playMoveNow = "ace_playMoveNow";
    playMove = "ace_playMove";
    playMove = "ace_playMove";
    unlockVehicle = "ace_unlockVehicle";
    lockVehicle = "ace_lockVehicle";
    playerInventoryChanged = "ace_playerInventoryChanged";
    SettingChanged = "ace_settingChanged";
    playMoveNow = QGVAR(playMoveNow);
};

#include "CfgEventHandlers.hpp"

#include "CfgLocationTypes.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"

#include "CfgActions.hpp"
#include "CfgMoves.hpp"
#include "CfgVoice.hpp"
#include "CfgUnitInsignia.hpp"
#include "CfgEden.hpp"

class ACE_Rsc_Display_Base {
    idd = -1;
    type = 0;
    style = 48;
    name = "";
    duration = 999999;
    fadeIn = 0;
    fadeOut = 0;
    font = "TahomaB";
    size = 1;
    colorBackground[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 1};
};

class ACE_Rsc_Control_Base {
    idc = 1;
    type = 0;
    style = 48;
    access = 0;
    lineSpacing = 0;
    moving = 1;
    text = "";
    size = 1;
    sizeEx = 0;
    font = "TahomaB";
    colorBackground[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 1};
    x = 0;
    y = 0;
    w = 0;
    h = 0;
};

#include "ACE_Settings.hpp"
#include "define.hpp"
#include <ProgressScreen.hpp>
#include <HintConfig.hpp>
#include <RscInfoType.hpp>

class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    grid_ACE_displayText[] = {{((safezoneX + safezoneW) - (10 *(((safezoneW / safezoneH) min 1.2) / 40)) - 2.9 *(((safezoneW / safezoneH) min 1.2) / 40)),safeZoneY + 0.175 * safezoneH, (10 *(((safezoneW / safezoneH) min 1.2) / 40)), (2 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))}, "(((safezoneW / safezoneH) min 1.2) / 40)","((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"};
                };
            };
        };

        class Variables {
            class grid_ACE_displayText {
                displayName = "ACE Hint";
                description = "Textual in game feedback to the player.";
                preview = "\a3\Ui_f\data\GUI\Cfg\UIGrids\grid_hint_ca.paa";
                saveToProfile[] = {0,1};
            };
        };
    };
};

class ACE_Extensions {
    extensions[] = {};
};
