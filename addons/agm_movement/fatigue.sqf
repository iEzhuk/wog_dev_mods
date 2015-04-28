// by commy2
// init onEachFrame EH
AGM_UpdatePlayerFatigue_EHID = ["AGM_UpdatePlayerFatigue", "onEachFrame", {
    _player = AGM_player;

    _fatigue = getFatigue _player;
    _fatigueOld = _player getVariable ["AGM_Fatigue", getFatigue _player];

    if (_fatigue > _fatigueOld) then {
        if(speed _player > 20) then {
            _fatigue = _fatigueOld + 2.5 * (_fatigue - _fatigueOld) max 0 min 1;
            _player setFatigue _fatigue;
        };
    };
    _player setVariable ["AGM_Fatigue", _fatigue];
}] call BIS_fnc_addStackedEventHandler;
