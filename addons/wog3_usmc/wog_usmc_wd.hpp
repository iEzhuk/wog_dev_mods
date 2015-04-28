
 	class wog_army_ucp_rifleman;
	class wog_army_ucp_medic;
	class wog_army_ucp_engineer;
	class wog_army_ucp_riflemanat;
	class wog_army_ucp_javelin;
	class wog_army_ucp_grenadier;
	class wog_army_ucp_squadleader;
	class wog_army_ucp_teamleader;
	class wog_army_ucp_autorifleman;
	class wog_army_ucp_autoriflemana;
	class wog_army_ucp_machinegunner;
	class wog_army_ucp_machinegunnera;
	class wog_army_ucp_aa;
	class wog_army_ucp_marksman;
	class wog_army_ucp_helipilot;
    class wog_army_ucp_helicrew;
	class wog_army_ucp_officer;
	class wog_army_ucp_crew_commander;
	class wog_army_ucp_crew_gunner;
	class wog_army_ucp_crew_driver;
	class wog_army_ucp_crew_loader;
	class rhsusf_usmc_marpat_d_engineer;
	class rhsusf_usmc_marpat_d_autorifleman_m249_ass;
	
	class wog_usmc_wd_rifleman: wog_army_ucp_rifleman {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	};
	class wog_usmc_wd_medic: wog_army_ucp_medic {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	backpack = "B_AssaultPack_rgr_Medic";
	};
	class wog_usmc_wd_engineer: rhsusf_usmc_marpat_d_engineer {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	};
	class wog_usmc_wd_riflemanat : wog_army_ucp_riflemanat {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","tf47_at4_heat","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","tf47_at4_heat","Throw","Put"};
	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","tf47_at4_m_HEAT","rhs_mag_m67"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","tf47_at4_m_HEAT","rhs_mag_m67"};
	};
	class wog_usmc_wd_squadleader: wog_army_ucp_squadleader {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","Binocular","TRYK_V_ArmorVest_khk2","TRYK_Shemagh","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","Binocular","TRYK_V_ArmorVest_khk2","TRYK_Shemagh","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_ta31rco","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_ta31rco","Throw","Put"}; 
	};
	class wog_usmc_wd_teamleader: wog_army_ucp_teamleader {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk2","TRYK_Shemagh","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk2","TRYK_Shemagh","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4gl_RH_ta31rco","Throw","Binocular","Put"}; 
	respawnWeapons[] = {"RH_M16A4gl_RH_ta31rco","Throw","Binocular","Put"};
	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m67","rhs_mag_m67"};
	respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m67","rhs_mag_m67"};
	};
	class wog_usmc_wd_autorifleman: wog_army_ucp_autorifleman {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	backpack = "B_AssaultPack_rgr";
	linkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};
	class wog_usmc_wd_autoriflemana: rhsusf_usmc_marpat_d_autorifleman_m249_ass {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","Throw","Put"}; 
	};
	class wog_usmc_wd_aa: wog_army_ucp_aa {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","rhs_weap_fim92","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","rhs_weap_fim92","Throw","Put"}; 
	backpack = "B_AssaultPack_rgr";
	};
	class wog_usmc_wd_helipilot: wog_army_ucp_helipilot {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_hgu56p","V_TacVest_brn","TRYK_Shemagh","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_hgu56p","V_TacVest_brn","TRYK_Shemagh","ItemMap","ItemGPS""rhsusf_ANPVS_15","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_m4","Throw","Put"}; 
	respawnWeapons[] = {"RH_m4","Throw","Put"}; 
	};
	class wog_usmc_wd_helicrew: wog_army_ucp_helicrew {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_hgu56p_mask","V_TacVest_brn","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_hgu56p_mask","V_TacVest_brn","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_m4","Throw","Put"}; 
	respawnWeapons[] = {"RH_m4","Throw","Put"}; 
	};
	class wog_usmc_wd_javelin: wog_army_ucp_javelin {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4_compm4","rhs_weap_fgm148","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4_compm4","rhs_weap_fgm148","Throw","Put"};
	backpack = "B_AssaultPack_rgr";
	};
	class wog_usmc_wd_grenadier : wog_army_ucp_grenadier {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_bare_norotos_alt","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_M16A4gl_RH_peq2","Throw","Put"}; 
	respawnWeapons[] = {"RH_M16A4gl_RH_peq2","Throw","Put"}; 
	};	
	class wog_usmc_wd_marksman: wog_army_ucp_marksman {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_mich_helmet_marpatwd_norotos","TRYK_V_ArmorVest_khk","TRYK_Shemagh","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};	

	class wog_usmc_wd_crew_commander: wog_army_ucp_crew_commander {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS""rhsusf_ANPVS_15","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_m4","Throw","Binocular","Put"}; 
	respawnWeapons[] = {"RH_m4","Throw","Binocular","Put"}; 
	};
		class wog_usmc_wd_crew_gunner : wog_army_ucp_crew_gunner {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS""rhsusf_ANPVS_15","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_m4","Throw","Put"}; 
	respawnWeapons[] = {"RH_m4","Throw","Put"}; 
	};
		class wog_usmc_wd_crew_driver: wog_army_ucp_crew_driver {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS""rhsusf_ANPVS_15","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_m4","Throw","Put"}; 
	respawnWeapons[] = {"RH_m4","Throw","Put"}; 
	};
		class wog_usmc_wd_crew_loader: wog_army_ucp_crew_loader {
	vehicleClass = "WOG_USMC_wd";
	faction = "wog_usmc";
	uniformClass = "TRYK_U_B_MARPAT_Wood_Tshirt";
	linkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"rhsusf_cvc_green_helmet","V_BandollierB_oli","ItemMap","ItemGPS""rhsusf_ANPVS_15","ItemCompass","ItemWatch","ItemRadio"};
	weapons[] = {"RH_m4","Throw","Put"}; 
	respawnWeapons[] = {"RH_m4","Throw","Put"}; 
	};


