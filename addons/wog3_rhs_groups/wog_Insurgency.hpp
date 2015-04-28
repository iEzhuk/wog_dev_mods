#define Basic_Macro faction=wog_guer; side = 2;
	class B_G_Soldier_F;
	class I_G_Soldier_lite_F;
	class B_G_Soldier_SL_F;
	class I_G_Soldier_TL_F;
	class I_G_Soldier_AR_F;
	class I_G_medic_F;
	class I_G_engineer_F;
	class I_G_Soldier_exp_F;
	class I_G_Soldier_GL_F;
	class I_G_Soldier_M_F;
	class I_G_Soldier_LAT_F;
	class I_G_Soldier_A_F;
	

	class wog_guer_rifleman: B_G_Soldier_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	weapons[] = {"rhs_weap_ak74m","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"}; 
	magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	linkedItems[] = {"H_ShemagOpen_khk","U_BG_Guerilla2_1","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","U_BG_Guerilla2_1","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
    class wog_guer_SL: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerrilla_6_1";
	magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	weapons[] = {"rhs_weap_ak74m","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m","Binocular","Throw","Put"}; 
	linkedItems[] = {"H_ShemagOpen_tan","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_tan","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
    class wog_guer_TL: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
		weapons[] = {"rhs_weap_ak74m","Binocular","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m","Binocular","Throw","Put"}; 
	linkedItems[] = {"H_Shemag_olive_hs","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Shemag_olive_hs","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	backpack="tf_rt1523g_sage";
    };
	class wog_guer_medic: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerrilla_6_1";
	weapons[] = {"rhs_weap_ak74m","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"}; 
	magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};

	linkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_GL: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	weapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m_gp25","Throw","Put"}; 
	magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_VOG25",
			"rhs_mag_rgd5", 
			"rhs_mag_rgd5"
		};
	linkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_LAT: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	weapons[] = {"rhs_weap_ak74m","Throw","Put","rhs_weap_rpg7"};
	respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put","rhs_weap_rpg7"};
	magazines[] = 		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_rpg7_OG7V_mag", 
			"rhs_rpg7_PG7VL_mag", 
			"rhs_rpg7_PG7VL_mag",
			"rhs_rpg7_PG7VL_mag",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_rpg7_OG7V_mag", 
			"rhs_rpg7_PG7VL_mag", 
			"rhs_rpg7_PG7VL_mag",
			"rhs_rpg7_PG7VL_mag",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	linkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	
	};
	class wog_guer_AR:  B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	weapons[] = {"rhs_weap_pkp","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_pkp","Throw","Put"}; 
	magazines[] = 		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_100Rnd_762x54mmR",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	linkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	backpack="rhs_sidor";
	};
	class wog_guer_exp: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	weapons[] = {"rhs_weap_ak74m","Throw","Put"}; 
	respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"}; 
	magazines[] =  {
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	linkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_A: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla2_1";
	weapons[] = {"rhs_weap_ak74m","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_ak74m","Throw","Put"};
	magazines[] =
	{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_rpg7_OG7V_mag", 
			"rhs_rpg7_PG7VL_mag",
			"rhs_rpg7_PG7VL_mag",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_rpg7_OG7V_mag", 
			"rhs_rpg7_PG7VL_mag",
			"rhs_rpg7_PG7VL_mag",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	linkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_ShemagOpen_khk","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	backpack="rhs_rpg1";
	};
	class wog_guer_M: B_G_Soldier_SL_F {
	vehicleClass = "WOG_guer_vc";
	Basic_Macro
	uniformClass = "U_BG_Guerilla3_1";
	weapons[] = {"rhs_weap_svds","Throw","Put","rhs_acc_pso1m2"}; 
	respawnWeapons[] = {"rhs_weap_svds","Throw","Put","rhs_acc_pso1m2"}; 
	magazines[] = 		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	respawnMagazines[] =
		{
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_10Rnd_762x54mmR_7N1",
			"rhs_mag_rgd5", 
			"1Rnd_Smoke_Grenade_shell"
		};
	linkedItems[] = {"H_Shemag_olive","V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Shemag_olive","V_BandollierB_cbr","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};

	class wog_guer_wd_rifleman: wog_guer_rifleman {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_SL: wog_guer_SL {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Bandanna_khk_hs","V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Bandanna_khk_hs","V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_TL: wog_guer_TL {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Cap_oli_hs","V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Cap_oli_hs","V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	backpack="tf_rt1523g_sage";
	};
	class wog_guer_wd_medic: wog_guer_medic {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_GL: wog_guer_GL {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Watchcap_camo","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Watchcap_camo","V_HarnessOGL_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_LAT: wog_guer_LAT {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_AR: wog_guer_AR {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_A: wog_guer_A {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_M: wog_guer_M {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Watchcap_camo","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Watchcap_camo","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class wog_guer_wd_exp: wog_guer_exp {
	vehicleClass = "WOG_guer_wd_vc";
	Basic_Macro
	uniformClass = "U_BG_leader";
	linkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"H_Booniehat_oli","V_HarnessOSpec_brn","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
