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
	class wog_TRYK_Uniform
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};

class cfgVehicles
{
#include "TRYK_Uniform.hpp"
};


