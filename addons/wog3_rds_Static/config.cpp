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
		ammo = "rhs_ammo_TOW_AT";
	};
	class RDS_6Rnd_TOW2: VehicleMagazine
	{
		ammo = "rhs_ammo_TOW_AT";
	};
	class RDS_6Rnd_AT13: VehicleMagazine
	{

		ammo="rhs_mag_9m113_3";

	};
	class RDS_29Rnd_30mm_AGS30: VehicleMagazine
	{

		ammo="64Rnd_40mm_G_belt";

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
};

//};
