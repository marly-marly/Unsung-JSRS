class CfgPatches {
    class anrop_unsung_jsrs_weapons_m45 {
        name = "anrop_unsung_jsrs_weapons_m45";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Uns_Rifle;

    class Uns_SMG: Uns_Rifle
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
            class SilencedSound;
        };

        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_m45: Uns_SMG 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_acpc_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_acpc_shot_silenced_soundset", "jsrs_ww2_pistol_reverb_soundset"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_acpc_shot_soundset", "jsrs_ww2_smg_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_acpc_shot_silenced_soundset", "jsrs_ww2_pistol_reverb_soundset"};
            };
        };
    };
};
