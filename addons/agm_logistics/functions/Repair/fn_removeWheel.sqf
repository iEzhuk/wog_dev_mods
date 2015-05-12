// by commy2

private ["_vehicle", "_part", "_isEngineer", "_time", "_name", "_string"];

_vehicle = _this select 0;
_part = _this select 1;

_isEngineer = [player] call AGM_Core_fnc_isEngineer;

_time = AGM_Repair_TimeWheelRepair;

if (_isEngineer) then {_time = _time * 0.6};;

[player, "AinvPknlMstpSnonWnonDr_medic5", 0] call AGM_Core_fnc_doAnimation;

_name = [_part] call AGM_Repair_fnc_getHitPointName;
_string = format [localize "STR_AGM_Repair_RemovingWheel", _name];

[_time, [_vehicle, _part], "AGM_Repair_fnc_removeWheelCallback", _string, "AGM_Repair_fnc_removeWheelAbort"] call AGM_Core_fnc_progressBar;
[_vehicle] call AGM_Core_fnc_closeDialogIfTargetMoves;
