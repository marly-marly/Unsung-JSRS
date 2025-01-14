class CfgPatches {
    class anrop_unsung_jsrs_weapons_ak47 {
        name = "anrop_unsung_jsrs_weapons_ak47";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons 
{
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class Single;
        class FullAuto;
    };

    class Uns_Rifle762: Uns_Rifle
    {
        class Single: Single
        {
            class StandardSound;
            class SilencedSound;
        };

        class FullAuto: FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_ak47_base : Uns_Rifle762 
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\akm_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\akm_reload.ogg", 2, 1, 35};
        changeFiremodeSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\noises\akm_firemode.ogg", 1.25, 1, 25};
        
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
