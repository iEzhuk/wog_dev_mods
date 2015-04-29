class CfgPatches {
    class wog3_blastfrag {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "A3_Weapons_F", 
            "A3_Weapons_F_beta", 
            "A3_Weapons_F_Acc", 
            "rhsusf_main",
            "rhs_main",
            "A3_Data_F",
            "rhs_c_btr",
            "rhs_c_weapons",
            "rhsusf_c_weapons",
            "tmr_core",
            "tmr_blastfrag"
        };
        version = "";
        versionStr = "0.0.0";
        versionAr[] = {0, 0, 0};
    };
};

class cfgAmmo {
    class rhs_B_9x19_7N21;
    class TMR_TinyFrag : rhs_B_9x19_7N21 {
        model = "\A3\Weapons_f\empty";
        tracerstarttime = 0;
        airfriction = -0.008;
        deflecting = 45;
        timetolive = 0.5;
        typicalspeed = 3000;
        };
    class rhs_B_545x39_Ball;    
    class TMR_LightFrag : rhs_B_545x39_Ball {
        model = "\A3\Weapons_f\empty";
        tracerstarttime = 0;
        airfriction = -0.011;
        deflecting = 45;
        timetolive = 0.5;
        typicalspeed = 3000;
    };
    class rhs_B_762x54_7N1_Ball;    
    class TMR_MedFrag : rhs_B_762x54_7N1_Ball {
        model = "\A3\Weapons_f\empty";
        tracerstarttime = 0;
        airfriction = -0.018;
        deflecting = 45;
        timetolive = 0.8;
        typicalspeed = 3000;
    };
    class rhs_ammo_127x108mm;                              
    class TMR_BigFrag : rhs_ammo_127x108mm {
        model = "";
        tracerstarttime = 0;
        airfriction = -0.023;
        deflecting = 45;
        timetolive = 1;
        typicalspeed = 3000;
    };
    class GrenadeBase;
    class Grenade;
    class G_40mm_HE : GrenadeBase {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 2169;
        tmr_blastfrag_fragCount = 45;
        tmr_blastfrag_casualtyRadius = 5;
        tmr_blastfrag_liveTime = 17;
    };
    class GrenadeHand : Grenade {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 3890;
        tmr_blastfrag_fragCount = 55;
        tmr_blastfrag_casualtyRadius = 15;
        tmr_blastfrag_fragMaxSize = "tiny";        
    };
    class mini_Grenade : GrenadeHand {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1830;
        tmr_blastfrag_fragCount = 30;
        tmr_blastfrag_casualtyRadius = 7;
        tmr_blastfrag_fragMaxSize = "tiny";        
    };
    class rhs_ammo_fakel : GrenadeHand {
        tmr_blastfrag_isFrag = 0;
    };
    class rhs_ammo_m84 : GrenadeHand { 
        tmr_blastfrag_isFrag = 0;
    };
    class G_20mm_HE : G_40mm_HE {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1600;
        tmr_blastfrag_fragCount = 20;
        tmr_blastfrag_casualtyRadius = 6;
        tmr_blastfrag_fragMaxSize = "tiny";
        tmr_blastfrag_liveTime = 17;
    };    
    class rhs_ammo_3of_base;
    class rhs_ammo_3UOF17: rhs_ammo_3of_base
    {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 2000;
        tmr_blastfrag_fragCount = 10;
        tmr_blastfrag_casualtyRadius = 10;
        tmr_blastfrag_fragMaxSize = "med";        
    };
    class rhs_ammo_3UOF19: rhs_ammo_3UOF17 {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 2000;
        tmr_blastfrag_fragCount = 10;
        tmr_blastfrag_casualtyRadius = 10;
        tmr_blastfrag_fragMaxSize = "med";        
        hit=210;indirectHit=40;indirectHitRange=20;
        typicalSpeed=1846;
        explosive=1.2;
    };
    class rhs_ammo_rpgShell_base;
    class rhs_ammo_og15v : rhs_ammo_rpgShell_base {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1600;
        tmr_blastfrag_fragCount = 40;
        tmr_blastfrag_casualtyRadius = 10;
        tmr_blastfrag_fragMaxSize = "tiny";
    };    
    class rhs_g_vog25;
    class rhs_g_vg40tb : rhs_g_vog25 {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1600;
        tmr_blastfrag_fragCount = 20;
        tmr_blastfrag_casualtyRadius = 7;
        tmr_blastfrag_fragMaxSize = "tiny";
        tmr_blastfrag_liveTime = 17;
    };
    class rhs_rpg7v2_pg7vl;
    class rhs_rpg7v2_tbg7v : rhs_rpg7v2_pg7vl {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1600;
        tmr_blastfrag_fragCount = 20;
        tmr_blastfrag_casualtyRadius = 12;
        tmr_blastfrag_fragMaxSize = "tiny";
    };
    class rhs_rpg7v2_og7v : rhs_rpg7v2_pg7vl {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1600;
        tmr_blastfrag_fragCount = 40;
        tmr_blastfrag_casualtyRadius = 12;
        tmr_blastfrag_fragMaxSize = "med";
    };
    class rhs_rshg2_rocket : rhs_rpg7v2_tbg7v {
        tmr_blastfrag_isFrag = 1;
        tmr_blastfrag_fragVelocity = 1600;
        tmr_blastfrag_fragCount = 20;
        tmr_blastfrag_casualtyRadius = 12;
        tmr_blastfrag_fragMaxSize = "tiny";
    };
};