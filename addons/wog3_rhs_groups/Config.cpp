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
	class wog_unit
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_infantry","rhs_infantry","tf47_launchers"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};

#include "CfgFactions.hpp"
#include "wog_groups.hpp"
class CfgVehicleClasses
{
	class WOG_US_Army_ocp
	{
	displayName = "Люди (ocp)";
	};
	class WOG_US_Army_ucp
	{
	displayName = "Люди (ucp)";
	};
	class WOG_US_Army_sf_ucp
	{
	displayName = "Люди (Разведка)";
	};
	class WOG_Russia_Flora
	{
	displayName = "Люди (флора)";
	};
	class WOG_Russia_Pixel
	{
	displayName = "Люди (ЕМР)";
	};
	class WOG_Russia_sf_Pixel
	{
	displayName = "Люди (Разведка)";
	};
	class WOG_pilot
	{
	displayName = "Люди (пилоты)";
	};
	class WOG_Russia_mflora
	{
	displayName = "Люди (Горная флора)";
	};
	class WOG_guer_vc
	{
	displayName = "Люди (Пустыня)";
	};
	class WOG_guer_wd_vc
	{
	displayName = "Люди (Лес)";
	};

};
class cfgVehicles
{
#include "backpacks.hpp"
#include "wog_us_army_ucp.hpp"
#include "wog_us_army_ocp.hpp"
#include "wog_us_army_sf_ocp.hpp"
#include "wog_msv_flora.hpp"
#include "wog_msv_emr.hpp"
#include "wog_msv_sf_emr.hpp"
#include "wog_msv_mflora.hpp"
#include "wog_vdv_pixel.hpp"
//#include "wog_Insurgency.hpp"
};

class cfgweapons {
    class rhs_weap_m4a1_grip;
	class rhs_weap_m4a1_m320;
	class rhs_weap_m4a1_grip2;
	class rhs_weap_m4a1;
	class rhs_weap_m240B;
	class rhs_weap_m249_pip;
	class tf47_m3maaws;
	
	class rhs_m4a1_grip_acog : rhs_weap_m4a1_grip
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
	class rhs_weap_m4a1_grip2_acog2 : rhs_weap_m4a1_grip2
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
	class rhs_weap_m249_pip_elcan : rhs_weap_m249_pip
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RH_m145";
		};
	};
	};
	class rhs_weap_m240B_elcan : rhs_weap_m240B
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RH_m145";
		};
	};
	};

	class tf47_m3maaws_optic : tf47_m3maaws
	{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "tf47_optic_m3maaws";
		};
	};
	};
	
	};
