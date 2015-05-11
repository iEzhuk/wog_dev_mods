#include "BIS_AddonInfo.hpp"

#define _ARMA_

class CfgPatches
{
	class wog3_rds_Static
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"RDS_StaticWeapons_Core","rhs_main","rhs_c_weapons"};
		version = "1";
	};
};
class CfgMagazines
{
    class VehicleMagazine;
	class RDS_6Rnd_TOW_HMMWV: VehicleMagazine
	{
		ammo = "rhs_ammo_TOW2_AT";
	};
	class RDS_6Rnd_TOW2: VehicleMagazine
	{
		ammo = "rhs_ammo_TOW2_AT";
	};
	class RDS_6Rnd_AT13: VehicleMagazine
	{

		ammo = "rhs_ammo_9m113";

	};
	class RDS_29Rnd_30mm_AGS30: VehicleMagazine
	{

		ammo="rhs_g_vog25";

	};
	
	class RDS_150Rnd_127x107_DSHKM: VehicleMagazine
	{

		ammo = "rhs_ammo_127x108mm";

	};
	class RDS_150Rnd_127x108_KORD: VehicleMagazine
	{

		ammo = "rhs_ammo_127x108mm";

	};
	class RDS_40Rnd_23mm_AZP85: VehicleMagazine
	{

		ammo = "RHS_ammo_23mm_AA";

	};
	class RDS_2000Rnd_23mm_AZP85: VehicleMagazine
	{

		ammo = "RHS_ammo_23mm_AA";

	};
	class RDS_Igla: VehicleMagazine
	{

		ammo = "rhs_ammo_9k38";

	};
	class RDS_2Rnd_Igla: VehicleMagazine
	{

		ammo = "rhs_ammo_9k38";

	};
	class 8Rnd_82mm_Mo_shells;
	class AGM_8Rnd_81mmShell_HE: 8Rnd_82mm_Mo_shells {
   	 	count = 4;
		initSpeed = 261;
    		displayName = "2b14 HE";
    		displayNameShort = "HE";
    		ammo = "AGM_81mmShell_AMMO_HE";
  	};
	class AGM_8Rnd_81mmShell_252_HE: 8Rnd_82mm_Mo_shells {
   	 	count = 4;
		initSpeed = 305;
    		displayName = "M252 HE";
    		displayNameShort = "HE";
    		ammo = "AGM_81mmShell_252_AMMO_HE";
  	};
};
class cfgWeapons
{

	class MGunCore;
	class MGun: MGunCore {};
	class GMG_F: MGun {};
	class GMG_20mm: GMG_F {};
	class CannonCore;
	class mortar_82mm;
	class mortar_82mm_base : mortar_82mm {
		class Single1;
	};
	class AGM_Artillery_81mm: mortar_82mm_base {
    	displayname = "Mortar Podnos 2b14";

    	magazineReloadTime = 5; //default: 5
    	reloadTime = 2; //default: 1.8

    	magazines[] = {		
					"AGM_8Rnd_81mmShell_HE",
					"8Rnd_82mm_Mo_Flare_white",
					"8Rnd_82mm_Mo_Smoke_white"
					
		};
    	modes[] = {"Charge1","Charge2","Charge3","Charge4","Charge5"};
		class Charge1: Single1 {
		artilleryDispersion = 1.9;
		artilleryCharge = 0.28;
		displayName = "Charge 0";  //I think these are just used in the default BIS comp, so no need to translate
		};
		class Charge2: Charge1 {
			artilleryCharge = 0.45;
			displayName = "Charge 1";
		};
		class Charge3: Charge1 {
			artilleryCharge = 0.58;
			displayName = "Charge 2";
		};
		class Charge4: Charge1 {
			artilleryCharge = 0.665;
			displayName = "Charge 3";
		};
		class Charge5: Charge1 {
			artilleryCharge = 0.76;
			displayName = "Charge 4";
		};

  };
	class AGM_Artillery_81mm_252: mortar_82mm_base {
    	displayname = "Mortar M252";

    	magazineReloadTime =5; //default: 5
    	reloadTime = 1.8; //default: 1.8

    	magazines[] = {		
					"AGM_8Rnd_81mmShell_252_HE",
					"8Rnd_82mm_Mo_Flare_white",
					"8Rnd_82mm_Mo_Smoke_white"
		};
    	modes[] = {"Charge1","Charge2","Charge3","Charge4","Charge5"};
		class Charge1: Single1 {
		artilleryDispersion = 1.9;
		artilleryCharge = 0.215;
		displayName = "Charge 0";  //I think these are just used in the default BIS comp, so no need to translate
		};
		class Charge2: Charge1 {
			artilleryCharge = 0.455;
			displayName = "Charge 1";
		};
		class Charge3: Charge1 {
			artilleryCharge = 0.599;
			displayName = "Charge 2";
		};
		class Charge4: Charge1 {
			artilleryCharge = 0.706;
			displayName = "Charge 3";
		};
		class Charge5: Charge1 {
			artilleryCharge = 0.79;
			displayName = "Charge 4";
		};

  };
	class RDS_AGS30: GMG_20mm {
		autoreload = 1;
		canlock = 0;
		cursorsize = 1;
		dispersion = 0.006;
		displayname = $STR_DN_AGS30;
		magazinereloadtime = 2;
		magazines[] = {"RDS_29Rnd_30mm_AGS30"};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
			};
		};
		class manual: GMG_F {
			sounds[] = {StandardSound};
 			class StandardSound
 			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"RDS_StaticW\AGS30\data\AGS30_shot1_a",3.16228, 1, 1200};
				soundBegin[] = {"begin1",1};
			};
			displayname =$STR_DN_AGS30;
			soundbegin[] = {"begin1", 1};
			soundburst = 0;
			soundcontinuous = 0;
			weaponsoundeffect = "DefaultRifle";
		};
		reloadtime = 0.4;
		scope = 1;
	};
	class RDS_MK19: RDS_AGS30
	{
		displayName = "Mk19";
		magazines[] = {"RDS_48Rnd_40mm_MK19"};
	};
};
class CfgAmmo
{
	class BulletCore;
	class BulletBase: BulletCore {};
	class B_35mm_AA;
	class SubmunitionBase;
	class Sh_82mm_AMOS;
	class AGM_81mmShell_AMMO_HE: Sh_82mm_AMOS {
		indirectHitRange = 18;
		whistledist = 30;
		airfriction = -0.000159;
	  };
	class AGM_81mmShell_252_AMMO_HE: Sh_82mm_AMOS {
		indirectHitRange = 18;
		whistledist = 30;
		airfriction = -0.000159;
	  };
};
#include "cfgVehicles.hpp"


class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class RscText;
class RscObject;
class RscPicture;
class RscStructuredText;
class RscMapControl;
class RscListbox;
class RscListNBox;
class RscFrame;
class RscEdit;
class RscButton;
class ScrollBar;
class RscActiveText;
class RCWSOptics;
class RscOpticsText;
class RscOpticsValue;
class CfgMovesBasic {
	class DefaultDie;	// External class reference
	
	class ManActions {
		Hilux_Cargo01 = "Hilux_Cargo01";
		DShKM_Gunner = "DShKM_Gunner";
		LowTripod_Gunner = "LowTripod_Gunner";
		LowKORD_Gunner = "LowKORD_Gunner";
		KORD_Gunner = "KORD_Gunner";
		AGS_Gunner = "AGS_Gunner";
		SPG_Gunner = "SPG_Gunner";
		Metis_Gunner = "Metis_Gunner";
		D30_Commander = "D30_Commander";
		D30_Gunner = "D30_Gunner";
		D30_Cargo = "D30_Cargo";
		Mi17_Cargo02 = "Mi17_Cargo02";
		M119_Commander = "M119_Commander";
		M119_Gunner = "M119_Gunner";
		M119_Cargo = "M119_Cargo";
		M2_Gunner = "M2_Gunner";
		TOW_Gunner = "TOW_Gunner";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class States {
		class Crew;	// External class reference
		
		class KIA_Hilux_Cargo01 : Crew {
			actions = "DeadActions";
			file = "RDS_StaticW\Anim\KIA_Hilux_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState", 0.1};
			soundEnabled = 0;
		};
		
		class Hilux_Cargo01 : Crew {
			file = "RDS_StaticW\Anim\Hilux_Cargo01.rtm";
			interpolateTo[] = {"KIA_Hilux_Cargo01", 1};
		};
		
		class DShKM_Gunner : Crew {
			file = "RDS_StaticW\Anim\DShKM_Gunner.rtm";
			connectTo[] = {"Static_Dead", 1};
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKCurve[] = {1};
			righHandIKBeg = 1;
			righHandIKEnd = 1;
		};
		
		class LowTripod_Gunner : DShKM_Gunner {
			file = "RDS_StaticW\Anim\LowTripod_Gunner.rtm";
		};
		
		class LowKORD_Gunner : DShKM_Gunner {
			file = "RDS_StaticW\Anim\sittingGunner.rtm";
			interpolateTo[] = {"KIA_SPG_Gunner", 1};
		};
		
		class KORD_Gunner : DShKM_Gunner {
			file = "RDS_StaticW\Anim\standingGunner.rtm";
		};
		
		class AGS_Gunner : Crew {
			file = "RDS_StaticW\Anim\AGS_Gunner.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class KIA_SPG_Gunner : DefaultDie {
			actions = "DeadActions";
			file = "\A3\cargoposes_F\Anim\gunner_static_low01_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class SPG_Gunner : Crew {
			file = "RDS_StaticW\Anim\SPG9_gunner.rtm";
			interpolateTo[] = {"KIA_SPG_Gunner", 1};
		};
		
		class Metis_Gunner : Crew {
			file = "RDS_StaticW\Anim\Metis_Gunner.rtm";
			connectTo[] = {"KIA_SPG_Gunner", 0.1};
		};
		
		class KIA_Mi17_Cargo02 : DefaultDie {
			actions = "DeadActions";
			file = "\RDS_StaticW\Anim\KIA_Mi17_Cargo02.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious", 0.1};
		};
		
		class Mi17_Cargo02 : Crew {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V0.rtm";
			speed = 0.3;
			equivalentTo = "Mi17_Cargo02";
			connectTo[] = {"Mi17_Cargo02", 0.1, "Mi17_Cargo02_V1", 0.1, "Mi17_Cargo02_V2", 0.1, "Mi17_Cargo02_V3", 0.1, "Mi17_Cargo02_V4", 0.1, "Mi17_Cargo02_V5", 0.1, "Mi17_Cargo02_V6", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantsAI[] = {"Mi17_Cargo02", 0.4, "Mi17_Cargo02_V1", 0.1, "Mi17_Cargo02_V2", 0.1, "Mi17_Cargo02_V3", 0.1, "Mi17_Cargo02_V4", 0.1, "Mi17_Cargo02_V5", 0.1, "Mi17_Cargo02_V6", 0.1};
			variantAfter[] = {5, 10, 20};
		};
		
		class Mi17_Cargo02_V1 : Mi17_Cargo02 {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V1.rtm";
			speed = 0.27;
			connectTo[] = {"Mi17_Cargo02", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantAfter[] = {3.7, 3.7, 3.7};
		};
		
		class Mi17_Cargo02_V2 : Mi17_Cargo02 {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V2.rtm";
			speed = 0.345;
			connectTo[] = {"Mi17_Cargo02", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantAfter[] = {3, 3, 3};
		};
		
		class Mi17_Cargo02_V3 : Mi17_Cargo02 {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V3.rtm";
			speed = 0.2;
			connectTo[] = {"Mi17_Cargo02", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantAfter[] = {5, 5, 5};
		};
		
		class Mi17_Cargo02_V4 : Mi17_Cargo02 {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V4.rtm";
			speed = 0.201;
			connectTo[] = {"Mi17_Cargo02", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantAfter[] = {5, 5, 5};
		};
		
		class Mi17_Cargo02_V5 : Mi17_Cargo02 {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V5.rtm";
			speed = 0.197;
			connectTo[] = {"Mi17_Cargo02", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantAfter[] = {5, 5, 5};
		};
		
		class Mi17_Cargo02_V6 : Mi17_Cargo02 {
			file = "\RDS_StaticW\Anim\Mi17_Cargo02_V6.rtm";
			speed = 0.345;
			connectTo[] = {"Mi17_Cargo02", 0.1};
			interpolateTo[] = {"KIA_Mi17_Cargo02", 0.1};
			variantAfter[] = {3, 3, 3};
		};
		
		class D30_Commander : Crew {
			file = "RDS_StaticW\Anim\D30_Commander.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class D30_Gunner : Crew {
			file = "RDS_StaticW\Anim\D30_Gunner.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class D30_Cargo : Crew {
			file = "RDS_StaticW\Anim\D30_Cargo.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class M119_Commander : Crew {
			file = "RDS_StaticW\Anim\M119_Commander.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class M119_Gunner : Crew {
			file = "RDS_StaticW\Anim\M119_Gunner.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class M119_Cargo : Crew {
			file = "RDS_StaticW\Anim\M119_Cargo.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
		
		class M2_Gunner : DShKM_Gunner {
			file = "RDS_StaticW\Anim\M2_Gunner.rtm";
		};
		
		class TOW_Gunner : Crew {
			file = "RDS_StaticW\Anim\D30_Cargo.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
	};
};