// by commy2
// modified be Ezhuk

private ["_unit", "_pos", "_dir", "_checkPos0beg", "_checkPos0end", "_checkPos1beg", "_checkPos1end"];

_unit = _this select 0;

//if (currentWeapon player == "") exitWith {false};

_pos = getPosASL _unit;
_dir = getDir _unit;

_posR = _pos vectorAdd [0.3*(sin (_dir+90)), 0.3*(cos (_dir+90)), 0];
_posL = _pos vectorAdd [0.3*(sin (_dir-90)), 0.3*(cos (_dir-90)), 0];

_vect_offset_0 = [sin _dir, cos _dir, 0];
_vect_offset_1 = ([sin _dir, cos _dir, 0] vectorMultiply 1.75);
_vect_offset_2 = _vect_offset_1 vectorAdd [0, 0, 0.2];

//===========================================================

_pos_beg_70_r = _posR vectorAdd [0, 0, 0.7];
_pos_end_70_r = _pos_beg_70_r vectorAdd _vect_offset_0;

_pos_beg_70_l = _posL vectorAdd [0, 0, 0.7];
_pos_end_70_l = _pos_beg_70_l vectorAdd _vect_offset_0;

//===========================================================

_pos_beg_150_l = _posL vectorAdd [0, 0, 1.5];
_pos_end_150_l = _pos_beg_150_l vectorAdd _vect_offset_1;

_pos_beg_150_r = _posR vectorAdd [0, 0, 1.5];
_pos_end_150_r = _pos_beg_150_r vectorAdd _vect_offset_1;

//===========================================================

_pos_beg_180_l = _posL vectorAdd [0, 0, 1.8];
_pos_end_180_l = _pos_beg_180_l vectorAdd _vect_offset_2;

_pos_beg_180_r = _posR vectorAdd [0, 0, 1.8];
_pos_end_180_r = _pos_beg_180_r vectorAdd _vect_offset_2;


//===========================================================

_pos_beg_150 = _pos vectorAdd [0, 0, 1.35];
_pos_end_150 = _pos_beg_150 vectorAdd _vect_offset_1;

_pos_beg_210 = _pos vectorAdd [0, 0, 2.1];
_pos_end_210 = _pos_beg_210 vectorAdd _vect_offset_2;

//===========================================================

switch (true) do {
    case (!lineIntersects [_pos_beg_70_r, _pos_end_70_r]) : {false};
    case (!lineIntersects [_pos_beg_70_l, _pos_end_70_l]) : {false};
    case ( lineIntersects [_pos_beg_150, _pos_end_150] && lineIntersects [_pos_beg_210, _pos_end_210]) : {false};
    case ( (lineIntersects [_pos_beg_150_l, _pos_end_150_l] || lineIntersects [_pos_beg_150_r, _pos_end_150_r]) && 
           (lineIntersects [_pos_beg_180_l, _pos_end_180_l] || lineIntersects [_pos_beg_180_r, _pos_end_180_r]) ) : {false};
    default {true};
}

/*
removeMissionEventHandler ["Draw3D", DrawEvent];
DrawEvent = addMissionEventHandler ["Draw3D", "_unit = player;

_pos = getPosASL _unit;
_dir = getDir _unit;

_posR = _pos vectorAdd [0.3*(sin (_dir+90)), 0.3*(cos (_dir+90)), 0];
_posL = _pos vectorAdd [0.3*(sin (_dir-90)), 0.3*(cos (_dir-90)), 0];

_vect_offset_0 = [sin _dir, cos _dir, 0];
_vect_offset_1 = ([sin _dir, cos _dir, 0] vectorMultiply 1.75);
_vect_offset_2 = _vect_offset_1 vectorAdd [0, 0, 0.2];



_pos_beg_70_r = _posR vectorAdd [0, 0, 0.7];
_pos_end_70_r = _pos_beg_70_r vectorAdd _vect_offset_0;

_pos_beg_70_l = _posL vectorAdd [0, 0, 0.7];
_pos_end_70_l = _pos_beg_70_l vectorAdd _vect_offset_0;


_pos_beg_150_l = _posL vectorAdd [0, 0, 1.5];
_pos_end_150_l = _pos_beg_150_l vectorAdd _vect_offset_1;

_pos_beg_150_r = _posR vectorAdd [0, 0, 1.5];
_pos_end_150_r = _pos_beg_150_r vectorAdd _vect_offset_1;



_pos_beg_180_l = _posL vectorAdd [0, 0, 1.8];
_pos_end_180_l = _pos_beg_180_l vectorAdd _vect_offset_2;

_pos_beg_180_r = _posR vectorAdd [0, 0, 1.8];
_pos_end_180_r = _pos_beg_180_r vectorAdd _vect_offset_2;




_pos_beg_150 = _pos vectorAdd [0, 0, 1.35];
_pos_end_150 = _pos_beg_150 vectorAdd _vect_offset_1;

_pos_beg_210 = _pos vectorAdd [0, 0, 2.1];
_pos_end_210 = _pos_beg_210 vectorAdd _vect_offset_2;

_fnc_draw = {
    _a = _this select 0;
    _b = _this select 1;

    _color = if (lineIntersects [_a, _b]) then {[1,0,0,1]}else{[0,1,0,1]};

    drawLine3D [ASLToATL _a, ASLToATL _b, _color];
};	

[_pos_beg_70_r, _pos_end_70_r] call _fnc_draw;
[_pos_beg_70_l, _pos_end_70_l] call _fnc_draw;

[_pos_beg_180_l, _pos_end_180_l] call _fnc_draw;
[_pos_beg_180_r, _pos_end_180_r] call _fnc_draw;

[_pos_beg_150_l, _pos_end_150_l] call _fnc_draw;
[_pos_beg_150_r, _pos_end_150_r] call _fnc_draw;

[_pos_beg_150, _pos_end_150] call _fnc_draw;
[_pos_beg_210, _pos_end_210] call _fnc_draw;

res = switch (true) do {
    case (!lineIntersects [_pos_beg_70_r, _pos_end_70_r]) : {false};
    case (!lineIntersects [_pos_beg_70_l, _pos_end_70_l]) : {false};
    case ( lineIntersects [_pos_beg_150, _pos_end_150] && lineIntersects [_pos_beg_210, _pos_end_210]) : {false};
    case ( lineIntersects [_pos_beg_150_l, _pos_end_150_l] || lineIntersects [_pos_beg_150_r, _pos_end_150_r] && 
           lineIntersects [_pos_beg_180_l, _pos_end_180_l] || lineIntersects [_pos_beg_180_r, _pos_end_180_r] ) : {false};
};

hintSilent str(_res);
"];


	[player, "AGM_Climb", 0] call AGM_Core_fnc_doAnimation; 

	*/

