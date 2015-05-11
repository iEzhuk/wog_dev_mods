#define Author_Macro author="reyhard (BIS port)";
#define crewMacro(sideN,factionN,crewN) \
		side=sideN; \
		author="reyhard (BIS port)";\
		faction=factionN; \
		crew=crewN; \
		typicalCargo[]= {crewN};

//Faction Name Macro
#define mF1 IND_F
//Crew Name Macro
#define mC1 I_Soldier_F
//FIA
#define mF2 BLU_G_F
#define mC2 B_G_Soldier_F
//CSAT
#define mF3 OPF_F
#define mC3 O_Soldier_F
#define ASSEMBLE_INFO(BAG1,BAG2) class assembleInfo { primary = 0; \
			base = ""; \
			assembleTo = "";\
			dissasembleTo[] = {BAG1, BAG2}; \
			displayName = ""; };

class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
	};
	class StaticMGWeapon: StaticWeapon{};
	class StaticATWeapon:StaticWeapon {};
	class StaticAAWeapon:StaticWeapon {};
	class StaticCannon: StaticWeapon {class ViewOptics;};

	class StaticGrenadeLauncher:StaticWeapon {class ViewOptics;};
	class StaticMortar:StaticWeapon{};
    // AGS
	class RDS_AGS_base: StaticGrenadeLauncher
	{
		model="\RDS_StaticW\AGS30\AGS_static";
		icon= "RDS_StaticW\data\map_ico\icomap_ags_CA.paa";
		picture="\RDS_StaticW\data\ico\ags_static_CA.paa";
		UiPicture="\RDS_StaticW\data\ico\ags_static_CA.paa";
		mapSize = 2;
		armor=150;

		sound[]={"RDS_StaticW\AGS30\data\AGS30_shot1_a",db25,1,1200};
		reloadMagazineSound[]={"RDS_StaticW\DShKM\data\M60gun_reload",db-30,1,35};

		displayName=$STR_DN_AGS30;

		gunnerHasFlares = true;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//turretInfoType="rds_gui_optic_mortar";
				turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";	
				minElev=-10;maxelev = 70.02;
				minTurn=-90; maxTurn=+90; initTurn=0;
				weapons[]={RDS_AGS30};
				magazines[]=
				{
					RDS_29Rnd_30mm_AGS30,
					RDS_29Rnd_30mm_AGS30,
					RDS_29Rnd_30mm_AGS30,
					RDS_29Rnd_30mm_AGS30,
					RDS_29Rnd_30mm_AGS30,
					RDS_29Rnd_30mm_AGS30
				};
				gunnerAction = "AGS_Gunner";
				gunnerOpticsModel = \RDS_StaticW\optika_AGS30;
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerForceOptics = 0;

				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";

				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class ViewOptics : ViewOptics
				{
					initFov=0.250; minFov=0.250; maxFov=0.250; // FOV 28 deg
				};
			};
		};
		class Library {libTextDesc = $STR_LIB_AGS30;};
		class AnimationSources
		{
			class ReloadMagazine {source="reloadmagazine";weapon="RDS_AGS30";};
		};
		ASSEMBLE_INFO(RDS_AGS30_Gun_Bag,RDS_AGS30_Tripod_Bag)
	};
	class RDS_AGS_AAF:RDS_AGS_base
	{
		scope = 2;
		crewMacro(2,mF1,mC1)
	};
	//Mk19
	class RDS_MK19_TriPod_base: StaticGrenadeLauncher
	{
		displayName=$STR_DN_mk19_tripod;
		model = "\RDS_StaticW\Mk19_minitripod\mk19_stat";
		picture = "\RDS_StaticW\Data\ico\mk19_stat_CA.paa";
		icon = "\RDS_StaticW\Data\map_ico\icomap_mk19_stat_CA.paa";
		mapSize = 2.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven";
				gunnerRightHandAnimName="otochlaven";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				minElev = -10;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				weapons[]={RDS_MK19};
				magazines[]=
				{
					RHS_48Rnd_40mm_MK19,
					RHS_48Rnd_40mm_MK19,
					RHS_48Rnd_40mm_MK19,
					RHS_48Rnd_40mm_MK19
				};
				gunnerAction = "LowTripod_Gunner";
			};
		};
		class AnimationSources
		{
			class belt_rotation {source="reload";weapon="RDS_MK19";};
			class ReloadMagazine: belt_rotation {source="reloadmagazine";};
			class Revolving: belt_rotation {source="revolving";};
		};
		ASSEMBLE_INFO(RDS_Mk19_Gun_Bag,RDS_Mk19_Tripod_Bag)
	};
	class RDS_MK19_TriPod_AAF:RDS_MK19_TriPod_base
	{
		scope = 2;
		crewMacro(2,mF1,mC1)
	};

	//Metis
	class RDS_Metis_Base: StaticATWeapon
	{
		ASSEMBLE_INFO(RDS_Metis_Gun_Bag,RDS_Metis_Tripod_Bag)
		scope = 0;
		displayname = $STR_DN_AT13;
		model = "\RDS_StaticW\metis_at_13\metis.p3d";
		class Library {libTextDesc = $STR_LIB_AT13;};
		icon="RDS_StaticW\data\map_ico\icomap_metis_at13_CA.paa";
		picture="\RDS_StaticW\data\ico\metis_at13_CA.paa";
		UiPicture="\RDS_StaticW\data\ico\metis_at13_CA.paa";
		mapSize = 1.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]={RDS_AT13LauncherSingle};
				magazines[]={RDS_6Rnd_AT13};
				gunnerAction = "Metis_Gunner";
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_Metis";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				minTurn=-45; maxTurn=+45; initTurn=0;
				minElev=-10; maxElev=+40; initElev=0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.078; minFov=0.078; maxFov=0.078; // 6x zoom
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={4,5};
				};
			};
		};
	};
	class RDS_Metis_AAF: RDS_Metis_Base
	{
		scope = 2;
		crewMacro(2,mF1,mC1)
	};
	//SPG9
	class RDS_SPG9_base: StaticATWeapon
	{
		displayName=$STR_DN_SPG9;
		model = "\RDS_StaticW\spg9\spg9.p3d";
		icon= "RDS_StaticW\data\map_ico\icon_spg9_CA.paa";
		picture="\RDS_StaticW\data\ico\spg9_CA.paa";
		UiPicture="\RDS_StaticW\data\ico\spg9_CA.paa";
		mapSize = 3;
		nameSound="cannon";
		transportSoldier = 0;
		gunnerHasFlares = true;
		class AnimationSources
		{
			class ReloadAnim{source="reload";weapon="RDS_SPG9";};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType="rds_gui_optic_mortar";
				weapons[]={RDS_SPG9};
				magazines[]=
				{
					RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,RDS_OG9_HE,
					RDS_PG9_AT,RDS_PG9_AT,RDS_PG9_AT,RDS_PG9_AT,RDS_PG9_AT
				};
				gunnerAction = "SPG_Gunner";
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_SPG_4";
				gunnerOpticsEffect[] = 				{"OpticsCHAbera1","OpticsBlur2","TankGunnerOptics1"};
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				minTurn=-45; maxTurn=+45; initTurn=0;
				minElev=-10; maxElev=+40; initElev=0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX=5; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.111; minFov=0.111; maxFov=0.111; // 4.2x zoom
				};
			};
		};
		class Library {libTextDesc = $STR_LIB_SPG9;};
		ASSEMBLE_INFO(RDS_SPG9_Gun_Bag,RDS_SPG9_Tripod_Bag)
	};
	class RDS_SPG9_AAF:RDS_SPG9_base
	{
		scope = 2;
		crewMacro(2,mF1,mC1)
	};
	//Podnos Mortar
	class RDS_2b14_82mm_Base: StaticMortar
	{
		availableForSupportTypes[]={"Artillery"};
		displayname="$STR_DN_2B14";
		class Library
		{
			libTextDesc="$STR_LIB_2B14";
		};
		model="\RDS_StaticW\podnos_2b14_82mm\podnos_2b14_82mm";
		transportSoldier=1;
		cargoAction[]=
		{
			"D30_Cargo"
		};
		icon="RDS_StaticW\data\map_ico\icomap_podnos_2b14_CA.paa";
		picture="\RDS_StaticW\data\ico\podnos_2b14_ca.paa";
		UiPicture="\RDS_StaticW\data\ico\podnos_2b14_ca.paa";
		mapSize=1.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				maxHorizontalRotSpeed = 0.1;
				class ViewOptics;
				gunnerAction="D30_Cargo";
				/*weapons[]=
				{
					"2B14"
				};
				discreteDistance[]=											{100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceInitIndex=5;*/
//				turretInfoType="rds_gui_optic_mortar";
				turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_D30";

				weapons[]=
				{
					"AGM_Artillery_81mm"
				};
				magazines[]=
				{
					"AGM_8Rnd_81mmShell_HE",
					"AGM_8Rnd_81mmShell_HE",
					"AGM_8Rnd_81mmShell_HE",
					"AGM_8Rnd_81mmShell_HE",
					"8Rnd_82mm_Mo_Smoke_white",
					"8Rnd_82mm_Mo_Flare_white"
				};
				cameraDir = "usti hlavne";
				memoryPointGunnerOptics = "gunnerview";
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -11;
				maxCamElev = 31;
				initElev=0;
				initTurn=0;
				minElev=-11;
				maxElev=31;
				minTurn=-180;
				maxTurn=180;
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		artilleryScanner = 0;
		ASSEMBLE_INFO(RDS_Podnos_Gun_Bag,RDS_Podnos_Bipod_Bag)
		transportMaxItems = 5;
		class transportItems {
			class cw_item_table82mm_XX {
				name = "cw_item_table82mm";
				count = 1;
			};
			class _xx_AGM_Maptools	{
				name = "AGM_Maptools";
				count = 1;
			};
		};

	};
	class RDS_2b14_82mm_AAF: RDS_2b14_82mm_Base
	{
		scope=2;
		crewMacro(2,mF1,mC1)
	};
	class RDS_M252_base: StaticMortar
	{
		displayname="$STR_DN_m252";
		class Library
		{
			libTextDesc="$STR_LIB_m252";
		};

		model = "\RDS_StaticW\M252_81mm_Mortar\81Mortar";
		picture = "\RDS_StaticW\data\ico\mortar_m251_CA.paa";
		icon = "\RDS_StaticW\data\map_ico\icomap_mortar_m251_CA.paa";
		ASSEMBLE_INFO(RDS_M252_Gun_Bag,RDS_M252_Bipod_Bag)
		availableForSupportTypes[]={"Artillery"};
		transportSoldier=1;
		cargoAction[]=
		{
			"D30_Cargo"
		};
		UiPicture="\RDS_StaticW\data\ico\podnos_2b14_ca.paa";
		mapSize=1.5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerAction="D30_Cargo";
				maxHorizontalRotSpeed = 0.1;
				/*weapons[]=
				{
					"2B14"
				};
				discreteDistance[]=											{100,200,300,400,500,700,1000,1600,2000,2400,2800};
				discreteDistanceInitIndex=5;*/
//				turretInfoType="rds_gui_optic_mortar";
				turretInfoType="AGM_Artillery_RscWeaponRangeArtilleryCustom";
				gunnerOpticsModel = "\RDS_StaticW\2Dscope_D30";

				weapons[]=
				{
					"AGM_Artillery_81mm_252"
				};
				magazines[]=
				{
					"AGM_8Rnd_81mmShell_252_HE",
					"AGM_8Rnd_81mmShell_252_HE",
					"AGM_8Rnd_81mmShell_252_HE",
					"AGM_8Rnd_81mmShell_252_HE",					
					"8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_Flare_white"
				};
				cameraDir = "usti hlavne";
				memoryPointGunnerOptics = "gunnerview";
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -11;
				maxCamElev = 31;
				initElev=0;
				initTurn=0;
				minElev=-11;
				maxElev=31;
				minTurn=-180;
				maxTurn=180;
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		artilleryScanner = 0;
		transportMaxItems = 5;
		class transportItems {
			class _xx_cw_item_table82mm_252 {
				name = "cw_item_table82mm_252";
				count = 1;
			};
			class _xx_AGM_Maptools	{
				name = "AGM_Maptools";
				count = 1;
			};
		};
	};
	class RDS_M252_AAF: RDS_M252_Base
	{
		scope=2;
		crewMacro(2,mF1,mC1)
	};

	};

	#include "cfgBags.hpp"

