class CfgPatches {
    class anrop_unsung_jsrs_weapons_m1carbine {
        name = "anrop_unsung_jsrs_weapons_m1carbine";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;    // External class reference
class Mode_FullAuto;	// External class reference

class CfgWeapons 
{
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class Single;
    };

    class Uns_Rifle762: Uns_Rifle
    {
        class Single: Single
        {
            class StandardSound;
        };
    };
    
    class uns_m1carbine : Uns_Rifle762 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m1carbine_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };

    class Pistol_Base_F;

    class Uns_Pistol: Pistol_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
    };
};
