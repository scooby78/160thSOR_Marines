/*
	Name: 160th SOR USMC Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: cfgWeapons.hpp
*/
class cfgWeapons
{
class rhs_weap_m14ebrri;

class rhs_weap_mk18_grip_bk;
class rhs_weap_mk18_m320;
class rhs_weap_mk18_grip_KAC_wd;
class rhs_weap_mk18_grip_KAC_d;
class rhs_weap_m4a1_blockII_grip_KAC;
class rhs_weap_mk18;
class rhs_weap_m4a1_carryhandle;
class rhs_weap_m4a1_blockII_KAC_bk;

class rhs_weap_m27iar_grip;
class rhs_weap_m249_pip_S_para;

class rhs_weap_m240G;

class rhs_weap_M107_w;
class rhs_weap_m24sws_blk;

class hgun_P07_F;


    ////////////////////Designated Marksman Rifles////////////////////

    class SOR_USMC_WEAP_M14EBR : rhs_weap_m14ebrri
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_LEUPOLDMK4";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};
            class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	////////////////////Assault Rifles/Carbines////////////////////

	class SOR_USMC_WEAP_MK18_GRIP : rhs_weap_mk18_grip_bk //Infantry//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG3_USMC_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "UnderBarrelSlot";
			};
		};
	};

	class SOR_USMC_WEAP_MK18_M320 : rhs_weap_mk18_m320 //Infantry//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG3_USMC_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class SOR_USMC_WEAP_MK18_GRIP_VIPER_W : rhs_weap_mk18_grip_KAC_wd //Viper Woodland//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG_wd";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15_bk";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "UnderBarrelSlot";
			};
      		class LinkedItemsMuzzle
			{
			    item = "rhsusf_acc_nt4_black";
			    slot = "MuzzleSlot";
		    };
		};
	};

	class SOR_USMC_WEAP_MK18_GRIP_VIPER_D : rhs_weap_mk18_grip_KAC_d //Viper Desert//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG_d";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "UnderBarrelSlot";
			};
      		class LinkedItemsMuzzle
			{
			    item = "rhsusf_acc_nt4_tan";
			    slot = "MuzzleSlot";
		    };
		};
	};

	class SOR_USMC_WEAP_M4A1_BLOCK2_GRIP : rhs_weap_m4a1_blockII_grip_KAC //Parajumper//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_xps3";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15_bk";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "UnderBarrelSlot";
			};
      		class LinkedItemsMuzzle
			{
			    item = "rhsusf_acc_SF3P556";
			    slot = "MuzzleSlot";
		    };
		};
	};

	class SOR_USMC_WEAP_MK18_CREW : rhs_weap_mk18 //Mech Crew + Airbourne Crew//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
		};
	};

	class SOR_USMC_WEAP_M4_VEH : rhs_weap_m4a1_carryhandle //For vehicles//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG2_USMC_3d";
				slot = "CowsSlot";
			};
		};
	};

	class SOR_USMC_WEAP_MK18_BLACKSMITH : rhs_weap_mk18 //Blacksmith//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15_bk_top";
				slot = "PointerSlot";
			};
		};
	};

	class SOR_USMC_WEAP_M4A1_BLOCK2_FAC : rhs_weap_m4a1_blockII_KAC_bk //FAC//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG2_USMC";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15_bk_top";
				slot = "PointerSlot";
			};
		};
	};

	////////////////////Squad Automatic Weapons////////////////////

	class SOR_USMC_WEAP_M27IAR_GRIP : rhs_weap_m27iar_grip //Infanty//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class SOR_USMC_WEAP_M249_VIPER : rhs_weap_m249_pip_S_para //Viper//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
		};
	};

	////////////////////Light Machine Guns////////////////////

    class SOR_USMC_WEAP_M240G : rhs_weap_m240G //Infantry//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG";
				slot = "CowsSlot";
			};
		};
	};

	////////////////////Sub Machine Guns////////////////////

	////////////////////Sniper Rifles////////////////////

	class SOR_USMC_WEAP_M107_VIPER : rhs_weap_M107_w //Viper//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_premier";
				slot = "CowsSlot";
			};
		};
	};

	class SOR_USMC_WEAP_M24 : rhs_weap_m24sws_blk //Sniper//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_premier";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};

		};
	};

	////////////////////Pistols////////////////////

	class SOR_USMC_WEAP_P07_VIPER : hgun_P07_F //Viper//
	{
		class LinkedItems
		{
      		class LinkedItemsMuzzle
			{
			    item = "muzzle_snds_L";
			    slot = "MuzzleSlot";
		    };
		};
	};
};

