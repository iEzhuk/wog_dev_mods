class RscXSliderH;
class RscEdit;
class CA_TextDisplayMode; 
class RscText;

class RscDisplayOptionsVideo {
	class Controls {
		class QualityGroup: RscControlsGroup{
			class controls{
				class CA_SliderBrightness: RscText{
					idc = 112;
					x = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "for tomato";
					tooltip = "You have no power here";
				};
				class CA_ValueBrightness: RscText{
					idc = 111;
					style = 0;
					x = "16.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "8.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "You have no power here";
				};
				class CA_SliderGamma: RscText{
					idc = 110;
					x = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "8 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "You have no power here";
					text = "For tomato";
				};
				class CA_ValueGamma: RscText{
					idc = 109;
					style = 0;
					x = "16.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "2.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					tooltip = "You have no power here";
				};
		    };
		};
	};
};