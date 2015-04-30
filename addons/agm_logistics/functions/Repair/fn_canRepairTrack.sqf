// by commy2

private ["_vehicle", "_part", "_spareTrack"];

_vehicle = _this select 0;
_part = _this select 1;

_spareTrack = [player] call AGM_Repair_fnc_getNearestTrack;

(alive _vehicle)
&& {speed _vehicle == 0}
&& {!isNull _spareTrack}
&& {floor (3 * (_vehicle getHitPointDamage _part)) > 0}
