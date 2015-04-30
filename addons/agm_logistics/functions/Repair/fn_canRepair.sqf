// by commy2
#include <Macros.hqf>
private ["_vehicle", "_part", "_parts"];

_vehicle = _this select 0;
_part = _this select 1;

_parts = switch (true) do {
	case (!isNull ([_vehicle] call AGM_Repair_fnc_getNearestRepairer)): {HITPOINTS_ALL};
	case ("ToolKit" in items player) : {HITPOINTS_TOOLKIT}; 
	default {HITPOINTS_FIELD};
};

(alive _vehicle)
&& {speed _vehicle == 0}
&& {_part in _parts}
&& {floor (3 * (_vehicle getHitPointDamage _part)) > 0}
