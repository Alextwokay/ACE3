#include "script_component.hpp"

#include "initKeybinds.sqf"

if ((profileNamespace getVariable ["ACE_ATragMX_profileNamespaceVersion", 0]) == ATRAGMX_PROFILE_NAMESPACE_VERSION && count (profileNamespace getVariable ["ACE_ATragMX_gunList", []]) > 0) then {
    GVAR(gunList) = profileNamespace getVariable "ACE_ATragMX_gunList";
} else {
    // Profile Name, Muzzle Velocity, Zero Range, Scope Base Angle, AirFriction, Bore Height, Scope Unit, Scope Click Unit, Scope Click Number, Maximum Elevation, Dialed Elevation, Dialed Windage, Mass, Bullet Diameter, Rifle Twist, BC, Drag Model, Atmosphere Model
    GVAR(gunList) =  [["12.7x108mm"        , 820, 100, 0.0657485, -0.00063800, 3.81, 0, 2, 10, 120, 0, 0, 48.28, 12.7, 38.10, 0.630, 1, "ASM" ],

                      ["12.7x99mm AMAX"    , 860, 100, 0.0611565, -0.00036645, 3.81, 0, 2, 10, 120, 0, 0, 48.60, 12.7, 38.10, 1.050, 1, "ASM" ],
                      ["12.7x99mm"         , 900, 100, 0.0582418, -0.00057503, 3.81, 0, 2, 10, 120, 0, 0, 41.92, 12.7, 38.10, 0.670, 1, "ASM" ],

                      ["12.7x54mm"         , 300, 100, 0.3394630, -0.00019268, 3.81, 0, 2, 10, 120, 0, 0, 48.60, 12.7, 24.13, 1.050, 1, "ASM" ],

                      [".408 Chey Tac"     , 910, 100, 0.0569400, -0.00038944, 3.81, 0, 2, 10, 120, 0, 0, 27.15, 10.4, 33.02, 0.970, 1, "ASM" ],

                      ["9.3×64mm"          , 870, 100, 0.0619295, -0.00108571, 3.81, 0, 2, 10, 120, 0, 0, 14.90, 9.30, 35.56, 0.368, 1, "ASM" ],

                      [".338LM 250gr"      , 880, 100, 0.0598469, -0.00059133, 3.81, 0, 2, 10, 120, 0, 0, 16.20, 8.58, 25.40, 0.322, 7, "ICAO"],
                      [".338LM 300gr"      , 800, 100, 0.0677343, -0.00052190, 3.81, 0, 2, 10, 120, 0, 0, 19.44, 8.58, 25.40, 0.381, 7, "ICAO"],
                      [".338LM API526"     , 895, 100, 0.0588865, -0.00069611, 3.81, 0, 2, 10, 120, 0, 0, 16.39, 8.58, 25.40, 0.560, 1, "ASM" ],

                      [".300WM Mk248 Mod 0", 900, 100, 0.0584442, -0.00070530, 3.81, 0, 2, 10, 120, 0, 0, 13.31, 7.80, 25.40, 0.268, 7, "ICAO"],
                      [".300WM Mk248 Mod 1", 867, 100, 0.0610738, -0.00061188, 3.81, 0, 2, 10, 120, 0, 0, 14.26, 7.80, 25.40, 0.310, 7, "ICAO"],
                      [".300WM Berger OTM" , 853, 100, 0.0622179, -0.00053733, 3.81, 0, 2, 10, 120, 0, 0, 14.90, 7.80, 25.40, 0.368, 7, "ICAO"],

                      ["7.62x54mmR"        , 800, 100, 0.0691878, -0.00100023, 3.81, 0, 2, 10, 120, 0, 0, 9.849, 7.92, 24.13, 0.400, 1, "ICAO"],

                      ["7.62x51mm M80"     , 810, 100, 0.0679374, -0.00100957, 3.81, 0, 2, 10, 120, 0, 0, 9.525, 7.82, 25.40, 0.200, 7, "ICAO"],
                      ["7.62x51mm M118LR"  , 780, 100, 0.0710319, -0.00082828, 3.81, 0, 2, 10, 120, 0, 0, 11.34, 7.82, 25.40, 0.243, 7, "ICAO"],
                      ["7.62x51mm Mk319"   , 910, 100, 0.0584524, -0.00102338, 3.81, 0, 2, 10, 120, 0, 0, 8.424, 7.82, 25.40, 0.377, 1, "ICAO"],
                      ["7.62x51mm M993"    , 930, 100, 0.0570316, -0.00107148, 3.81, 0, 2, 10, 120, 0, 0, 8.230, 7.82, 25.40, 0.359, 1, "ICAO"],
                      ["7.62x51mm Subsonic", 320, 100, 0.3059680, -0.00049899, 3.81, 0, 2, 10, 120, 0, 0, 12.96, 7.82, 25.40, 0.235, 7, "ICAO"],

                      ["6.5x39mm"          , 800, 100, 0.0683482, -0.00075308, 3.81, 0, 2, 10, 120, 0, 0, 7.970, 6.71, 22.86, 0.263, 7, "ICAO"],
                      ["6.5x47mm Lapua"    , 800, 100, 0.0682221, -0.00067037, 3.81, 0, 2, 10, 120, 0, 0, 9.007, 6.71, 22.86, 0.290, 7, "ICAO"],
                      ["6.5mm Creedmor"    , 840, 100, 0.0636501, -0.00060887, 3.81, 0, 2, 10, 120, 0, 0, 9.072, 6.71, 22.86, 0.317, 7, "ICAO"],

                      ["5.56x45mm M855"    , 870, 100, 0.0626386, -0.00126466, 3.81, 0, 2, 10, 120, 0, 0, 4.018, 5.70, 17.78, 0.151, 7, "ASM" ],
                      ["5.56x45mm Mk262"   , 820, 100, 0.0671481, -0.00109563, 3.81, 0, 2, 10, 120, 0, 0, 4.990, 5.70, 17.78, 0.361, 1, "ASM" ],
                      ["5.56x45mm Mk318"   , 880, 100, 0.0615937, -0.00123318, 3.81, 0, 2, 10, 120, 0, 0, 4.018, 5.70, 17.78, 0.307, 1, "ASM" ],
                      ["5.56x45mm M995"    , 869, 100, 0.0626713, -0.00123272, 3.81, 0, 2, 10, 120, 0, 0, 4.536, 5.70, 17.78, 0.310, 1, "ASM" ]];

    [] call FUNC(clear_user_data);
    profileNamespace setVariable ["ACE_ATragMX_gunList", GVAR(gunList)];
};

[] call FUNC(init);
[] call FUNC(restore_user_data);

["ace_rangerfinderData", {_this call FUNC(sord)}] call CBA_fnc_addEventHandler;
