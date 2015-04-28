class CfgWeapons{
	class Default;
	class CannonCore;
	class AP;
	class HE;
	class autocannon_Base_F;
							class cannon_120mm : CannonCore {
		canLock = 0;
		};
					class autocannon_30mm_CTWS: autocannon_Base_F {
		canLock = 0;
		class AP: autocannon_Base_F
		{
		canLock = 0;
		};
				class HE: autocannon_Base_F
		{
		canLock = 0;
		};
	};
						class autocannon_40mm_CTWS: autocannon_Base_F {
		canLock = 0;
		class AP: autocannon_Base_F
		{
		canLock = 0;
		};
				class HE: autocannon_Base_F
		{
		canLock = 0;
		};
	};
	};