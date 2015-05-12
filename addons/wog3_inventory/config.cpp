class CfgPatches {
	class WOG3_Invetory {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {AGM_Core};
		version = "0.95.2";
		versionStr = "0.95.2";
		versionAr[] = {0,95,2};
		author[] = {"Ezhuk"};
	};
};

class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class AGM_Actions {
			class WOG3_Invetory {
		        displayName = "$STR_WOG3_Inventory";
		        distance = 4;
		        condition = "_target getVariable ['AGM_isUnconscious', False] || player == leader _target";
		        statement = "player action ['Gear', _target] ;_target spawn {sleep 0.5; waitUntil{player distance _this > 4 || isNull findDisplay 602}; if !(isNull findDisplay 602) then {closeDialog 0;};};";
		    };
		};
	};
};

