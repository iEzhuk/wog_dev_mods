#include "BIS_AddonInfo.hpp"
class CfgPatches 
{ 
	class wog3_rhs_radar_fix
	{ 
		units[] = {}; 
		weapons[] = {};
		requiredAddons[] = {
			"rhs_main","rhs_c_heavyweapons","rhs_decals","rhs_optics","rhs_c_troops","A3_Armor_F","A3_Soft_F","rhs_c_btr","rhs_c_tanks","RHS_US_A2Port_Armor"
		};
	}; 
};

class CfgVehicles
{
class APC_Tracked_03_base_F;
class RHS_M2A2_Base: APC_Tracked_03_base_F
	{
		radarType = 8;
		
	};
class Heli_Transport_02_base_F;
class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		radarType = 8;
	};
class RHS_UH60_Base;
class RHS_UH60M_base: RHS_UH60_Base
	{
		radarType = 8;
	};
class O_Plane_CAS_02_F;
class RHS_su25_base: O_Plane_CAS_02_F
	{
		radarType = 8;
	};
class Plane_CAS_01_base_F;
class RHS_A10: Plane_CAS_01_base_F
	{
		radarType = 8;
		irScanRangeMax = 3000;
		irScanRangeMin = 100;
		irScanGround = false;
		irScanToEyeFactor = 1;
	};
class Heli_Attack_01_base_F;
class RHS_AH64_base: Heli_Attack_01_base_F
	{
		irScanRangeMax = 3000;
		irScanRangeMin = 100;
		irScanGround = false;
		irScanToEyeFactor = 1;
		
	};
class Heli_Attack_02_base_F;
class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		irScanRangeMax = 3000;
		irScanRangeMin = 100;
		irScanGround = false;
		irScanToEyeFactor = 1;
		
	};
class Heli_Light_02_base_F;
class RHS_Mi8_base: Heli_Light_02_base_F
	{
		radarType = 8;

	};
class RHS_AH1Z_base: Heli_Attack_01_base_F
	{
		irScanRangeMax = 2000;
		irScanRangeMin = 100;
		irScanGround = false;
		irScanToEyeFactor = 1;
		radarType = 8;
		
	};

#include "del_vehicle.hpp"

};

class cfgWeapons
{
class Rhs_weap_TOW_Launcher;
class Rhs_weap_stinger_Launcher: Rhs_weap_TOW_Launcher
	{
canLock = 2;
weaponLockSystem = 0;
weaponLockDelay = 3;
	};
};
class CfgAmmo
{
	class M_Titan_AA;
	class rhs_ammo_Stinger_AA: M_Titan_AA
	{
		airlock = 2;
	};
};


			