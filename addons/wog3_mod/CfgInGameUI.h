class CfgInGameUI  {
	imageCornerElement = "\A3\ui_f\data\igui\cfg\imageCornerElement_ca.paa";
	xboxStyle = 0;
	colorBackground[] = {1,1,1,0 };
	colorBackgroundCommand[] = {1,1,1,1 };
	colorBackgroundHelp[] = {1,1,1,1 };
	colorText[] = {0.400000,0.674500,0.278400,1.000000 };
	
	class CommandBar  {
		left = 0; //"-0.032 + SafeZoneX";
		top = 777; //"-(SafeZoneH + SafeZoneY) - (1 - 0.851)";
		width = 1.060000;
		height = 0.080000;
		imageDefaultWeapons = "A3\ui_f\data\igui\cfg\commandbar\imageDefaultWeapons_ca.paa";
		imageNoWeapons = "A3\ui_f\data\igui\cfg\commandbar\imageNoWeapons_ca.paa";
		imageCommander = "A3\ui_f\data\igui\cfg\commandbar\imageCommander_ca.paa";
		imageDriver = "A3\ui_f\data\igui\cfg\commandbar\imageDriver_ca.paa";
		imageGunner = "A3\ui_f\data\igui\cfg\commandbar\imageGunner_ca.paa";
		imageCargo = "A3\ui_f\data\igui\cfg\commandbar\imageCargo_ca.paa";
		dimm = 0.300000;
		colorRedTeam[] = {1.000000,0,0,1.000000 };
		colorBlueTeam[] = {0,0,1.000000,1.000000 };
		colorGreenTeam[] = {0.400000,0.674500,0.278400,1.000000 };
		colorYellowTeam[] = {0.800000,0.800000,0,1.000000 };
		colorWhiteTeam[] = {0.950000,0.950000,0.950000,1 };

		class prevPage  {
			x = 0.032000;
			y = 0.029000;
			w = 0.019608;
			h = 0.104575;
			color[] = {0.400000,0.674500,0.278400,1.000000 };
			texture = "A3\ui_f\data\igui\cfg\commandbar\prevPage_ca.paa";
		};

		class nextPage  {
			x = 0.000000;
			y = 0.029000;
			w = 0.019608;
			h = 0.104575;
			color[] = {0.400000,0.674500,0.278400,1.000000 };
			texture = "A3\ui_f\data\igui\cfg\commandbar\nextPage_ca.paa";
		};

		class UnitInfo  {

			class GroupIcon  {
				x = 0.016000;
				y = 0.012000;
				w = 0.057330;
				h = 0.076230;
			};

			class UnitNameBackground  {
				x = 0;
				y = 0;
				w = 0.156863;
				h = 0.209150;
				textureNormal = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa";
				texturePlayer = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_normal_ca.paa";
				textureSelected = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_selected_ca.paa";
				textureFocus = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNameBackground_selected_ca.paa";
			};

			class UnitIcon  {
				x = 0.000000;
				y = 0.000000;
				w = 0.091000;
				h = 0.121000;
				color[] = {0.400000,0.674500,0.278400,1.000000 };
				colorPlayer[] = {0.950000,0.950000,0.950000,1 };
				colorNoAmmo[] = {0.800000,0.400000,0.000000,1 };
				colorWounded[] = {0.800000,0,0,1 };
				colorWoundedFade[] = {0,0,0,1 };
				colorNoFuel[] = {0.800000,0.700000,0,1 };
			};

			class CommandBackground  {
				x = 0;
				y = 0;
				w = 0.156863;
				h = 0.052288;
				color[] = {1.000000,1.000000,1.000000,1 };
				texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\commandBackground_ca.paa";
			};

			class CommandText  {
				x = 0.045000;
				y = 0;
				w = 0.091000;
				h = 0.033000;
				color[] = {1.000000,1.000000,1.000000,1 };
				font = "PuristaMedium";
				SizeEx = 0.039210;
			};

			class UnitSpecialRole  {
				x = 0.053000;
				y = 0.033000;
				w = 0.039216;
				h = 0.052288;
				color[] = {0.950000,0.950000,0.950000,1 };
			};

			class VehicleNumberBackground  {
				x = -0.002000;
				y = 0.072000;
				w = 0.039216;
				h = 0.052288;
				color[] = {0.023529,0,0.031372,1 };
				texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\vehicleNumberBackground_ca.paa";
			};

			class VehicleNumberText  {
				x = 0.017000;
				y = 0.080000;
				w = 0.022000;
				h = 0.029000;
				colorText[] = {0.023529,0,0.031372,1 };
				font = "PuristaMedium";
				SizeEx = 0.039210;
			};

			class UnitRole  {
				x = 0.026000;
				y = 0.072000;
				w = 0.039216;
				h = 0.052288;
				color[] = {0.023529,0,0.031372,1 };
			};

			class UnitNumberBackground  {
				x = 0.061000;
				y = 0.080000;
				w = 0.039216;
				h = 0.052288;
				color[] = {0.023529,0,0.031372,1 };
				texture = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitNumberBackground_ca.paa";
			};

			class UnitNumberText  {
				x = 0.077000;
				y = 0.083000;
				w = 0.022000;
				h = 0.029000;
				colorText[] = {0.023529,0,0.031372,1 };
				font = "PuristaMedium";
				SizeEx = 0.039210;
			};

			class UnitCombatMode  {
				x = 0.064000;
				y = 0.005000;
				w = "0.0392157*0.6";
				h = "0.0522876*0.6";
				textureBlue = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureGreen = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureWhite = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureYellow = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
				textureRed = "\a3\Ui_f\data\IGUI\Cfg\CommandBar\unitCombatMode_ca.paa";
			};
		};
	};
	class Cursor {
		outArrow = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		select = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		leader = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		mission = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		unitUnconscious = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		customMark = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		tactical = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		iconComplex = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		move = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		selected = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		attack = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		getIn = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		watch = "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
		selectColor[] = {0,0,0,0};
		leaderColor[] = {0,0,0,0};
		customMarkColor[] = {0,0,0,0};
	};
	class PeripheralVision
	{
		cueTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\cueTexture_gs.paa";
		bloodTexture = "A3\ui_f\data\igui\cfg\PeripheralVision\bloodTexture_ca.paa";
		bloodColor[] = {1,1,1,0.75};
		cueColor[] = {0,0,0,0};
		cueEnemyColor[] = {0,0,0,0};
		cueFriendlyColor[] = {0,0,0,0};
	};
};

class RscActiveText;
class RscDisplayMainMap;
class RscControlsGroup;
class RscDisplayGetReady: RscDisplayMainMap{
	class Controls{
        class TopRight: RscControlsGroup{
            class controls{
                class ButtonPlayer: RscActiveText{
                    onbuttonclick = "";
                    color[] = {0,0,0,0};
                    text =  "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
                    colorText[] = {0,0,0,0};
                    colorActive[] = {0,0,0,0};
                    tooltip = "";
                };
            };
        };
    };
};

class RscDisplayServerGetReady: RscDisplayGetReady{
	class Controls{
        class TopRight: RscControlsGroup{
            class controls{
                class ButtonPlayer: RscActiveText{
                    onbuttonclick = "";
                    color[] = {0,0,0,0};
                    text =  "\A3\ui_f\data\igui\cfg\actions\clear_empty_ca.paa";
                    colorText[] = {0,0,0,0};
                    colorActive[] = {0,0,0,0};
                    tooltip = "";
                };
            };
        };
    };
};

class RscDisplayClientGetReady: RscDisplayGetReady{
	class Controls{
        class TopRight: RscControlsGroup{
            class controls{
                class ButtonPlayer: RscActiveText{
                    onbuttonclick = "";
                    color[] = {0,0,0,0};
                    text =  "";
                    colorText[] = {0,0,0,0};
                    colorActive[] = {0,0,0,0};
                    tooltip = "";
                };
            };
        };
    };
};
