/*
 * Author: KoffeinFlummi
 *
 * Bandage the given unit.
 *
 * Argument:
 * 0: Unit to be bandaged (Object)
 * 1: HitPoint to be healed (String; Example: "HitLeftShoulder")
 *
 * Return value:
 * none
 */

#define BANDAGETIME 4
#define BANDAGEHEAL 0.8

#define LEGDAMAGETHRESHOLD1 1
#define LEGDAMAGETHRESHOLD2 2
#define ARMDAMAGETHRESHOLD 2

_this spawn {
  _unit = _this select 0;
  _selection = _this select 1;

  // determine if unit is medic
  _healtime = BANDAGETIME;
  if !([player] call AGM_Medical_fnc_isMedic) then {
    _healtime = _healtime * AGM_Medical_CoefNonMedic;
  };

  // animation
  player playMoveNow "AinvPknlMstpSnonWnonDr_medic5";
  player setVariable ["AGM_CanTreat", false, false];

  if !([_unit, "AGM_Bandage"] call AGM_Medical_fnc_takeItem) exitWith {};

  AGM_Medical_bandageCallback = {
    _unit = _this select 0;
    _selection = _this select 1;

    player playMoveNow "AmovPknlMstpSrasWrflDnon";
    player setVariable ["AGM_CanTreat", true, false];

    if (player distance _unit > 4 or vehicle player != player or damage player >= 1 or (player getVariable "AGM_Unconscious")) exitWith {};

    if (_selection == "All") then {
      _unit setDamage ((damage _unit - BANDAGEHEAL) max 0);
    } else {
      // change damage of body part
      _damage = ((_unit getHitPointDamage _selection) - BANDAGEHEAL) max 0;
      [_unit, _selection, _damage] call AGM_Medical_fnc_setHitPointDamage;

      // since we have to set the damage remotely, it might take some time.
      waitUntil {sleep 0.1; _unit getHitPointDamage _selection == _damage};
    };

    // check if legs are healed
    _legdamage = (_unit getHitPointDamage "HitLeftLeg") + (_unit getHitPointDamage "HitRightLeg");
    if (_legdamage < LEGDAMAGETHRESHOLD1) then {
      [_unit, "HitLegs", 0] call AGM_Medical_fnc_setHitPointDamage;
    };

    // reset structural damage if unit is fully healed
    _fullyHealed = true;
    {
      if ((_unit getHitPointDamage _x) > 0.02) exitWith {_fullyHealed = false;};
    } count ["HitHead","HitBody","HitLeftArm","HitRightArm","HitLeftLeg","HitRightLeg"];
    if (_fullyHealed) then {
      _unit setDamage 0;
    };

    if (profileNamespace getVariable ["AGM_keepMedicalMenuOpen", false]) then {
      if (_unit == player) then {
        [1, call AGM_Core_fnc_player, "AGM_Medical"] call AGM_Interaction_fnc_showMenu;
      } else {
        [0, cursorTarget, "AGM_Medical"] call AGM_Interaction_fnc_showMenu;
      };
    };
  };

  AGM_Medical_bandageAbort = {
    player playMoveNow "AmovPknlMstpSrasWrflDnon";
    player setVariable ["AGM_CanTreat", true, false];
  };

  if (_selection == "All") then {
    [_healtime, _this, "AGM_Medical_bandageCallback", localize "STR_AGM_Medical_Bandaging", "AGM_Medical_bandageAbort"] call AGM_Core_fnc_progressBar;
  } else {
    [_healtime, _this, "AGM_Medical_bandageCallback", localize (format ["STR_AGM_Medical_Bandaging_%1", _selection]), "AGM_Medical_bandageAbort"] call AGM_Core_fnc_progressBar;
  };
  [_unit] call AGM_Core_fnc_closeDialogIfTargetMoves;
};
