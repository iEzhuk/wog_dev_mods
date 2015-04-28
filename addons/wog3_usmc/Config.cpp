#include "BIS_AddonInfo.hpp"
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	ordinalenum = 2,
	destructbuilding = 1
};

class CfgPatches
{
	class wog_USMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","A3_Characters_F_OPFOR","A3_Characters_F_INDEP","A3_Characters_F_Civil","rhs_c_weapons"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};

#include "CfgFactions.hpp"
class CfgGroups
{
	class west
	{

		class group_wog_usmc
		{
			name = "[WOG] USMC";
			#include "usmc_des.hpp"
			#include "usmc_wd.hpp"
		};
	};
};
class CfgVehicleClasses
{
	class WOG_USMC_wd
	{
		displayName = "Люди (Лес)";
	};
	class WOG_USMC_des
	{
		displayName = "Люди (Пустыня)";
	};


};
class cfgVehicles
{

#include "wog_usmc_wd.hpp"
#include "wog_usmc_des.hpp"

};
class cfgweapons {
    class Rifle_Base_F;
	class UGL_F;
	class GunParticles;
	class RH_M16A4;
	class RH_M16A4gl;
	class tf47_m3maaws;

	class RH_M16A4_compm4 : RH_M16A4
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RH_peq2";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "RH_compm4s";
		};
	};
	};
	class RH_M16A4_ta31rco : RH_M16A4_compm4
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RH_ta31rco";
		};
		
	};
	};
	class RH_M16A4gl_RH_peq2 : RH_M16A4gl
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RH_peq2";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "RH_compm4s";
		};
	};
	};
	class RH_M16A4gl_RH_ta31rco : RH_M16A4gl
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RH_ta31rco";
		};
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "RH_compm4s";
		};
	};
	};

	
	};

