class CfgPatches
{
	class wog3_mod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_UI_F","A3_Dubbing_Radio_F"};
		author[] = {"-[SF]- Shockster"};
		authorUrl = "https://wogames.info/";
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class wog3_mod {list[]={"wog3_mod"};};
 	};
};


class Extended_PostInit_EventHandlers {
    class wog3_mod {
        init = "onMapSingleClick 'if (_shift) then {}; true;'; {_x setVariable ['BIS_noCoreConversations', true]} forEach allUnits; 0 fadeRadio 0; enableRadio false;";
    };
    class wog3_wmt {
        init = "WMT_global_EnableConsole = ['76561198055492559'];";
    };
};

#include "CfgDiary.h" // Отключение вкладок статистики и звена, а также замена иконки готовности после старта.
#include "CfgInGameUI.h" // Отключение командирского интерфейса.
#include "RscMapControl.h" // Более красивая карта.
#include "CfgVoice.h"	// Отключение переговоры ботов в чатике.
#include "CfgOptionsVideo.h" // Отключение регулирования гаммы 
#include "CfgMapFix.h" // фиксы островов