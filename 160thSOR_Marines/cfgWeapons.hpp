/*
	Name: 160th SOR USMC Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: cfgWeapons.hpp
*/
class cfgWeapons
{
class srifle_EBR_F;
class srifle_DMR_05_blk_F;
class arifle_SPAR_03_khk_F;
class arifle_MXM_Black_F;

class arifle_MX_Black_F;
class arifle_MX_GL_Black_F;
class arifle_MX_SW_Black_F;
class arifle_MXC_Black_F;
class arifle_MX_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class arifle_TRG20_F;

class rhs_weap_m240G;

class SMG_05_F;

class hgun_P07_F;

class srifle_DMR_02_F;

class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_GL_blk_F;
class arifle_SPAR_02_blk_F;
class arifle_SPAR_03_blk_F;

class rhs_weap_hk416d10;
class rhs_weap_hk416d10_m320;
class rhs_weap_m27iar;

    ////////////////////Designated Marksman Rifles////////////////////

    class 160_srifle_EBR_F_premier : srifle_EBR_F
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
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
            class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_srifle_EBR_F_xps3 : srifle_EBR_F
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
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_srifle_DMR_05_blk_F_xps3 : srifle_DMR_05_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_xps3";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};

	class 160_srifle_DMR_05_blk_F_premier : srifle_DMR_05_blk_F
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
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};

	class 160_arifle_SPAR_03_khk_F_ERCO_viper : arifle_SPAR_03_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle
			{
			    item = "muzzle_snds_93mmg";
			    slot = "MuzzleSlot";
		    };
		};
	};

	class 160_arifle_MXM_Black_F_Hamr : arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MXM_Black_F_xps3 : arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_xps3";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	////////////////////Assault Rifles/Carbines////////////////////

	class 160_arifle_MX_Black_F_Hamr : arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_Black_F_xps3 : arifle_MX_Black_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_GL_Black_F_Hamr : arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_GL_Black_F_xps3 : arifle_MX_GL_Black_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MXC_Black_F_Hamr : arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
            };
		};
	};

	class 160_arifle_MXC_Black_F_xps3 : arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_xps3";
				slot = "CowsSlot";
			};
		};
	};

	class 160_arifle_MX_F_xps3 : arifle_MX_F
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_SPAR_01_khk_F_specter_viper : arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
      		class LinkedItemsMuzzle
			{
			    item = "rhsusf_acc_nt4_black";
			    slot = "MuzzleSlot";
		    };
		    class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_SPAR_01_snd_F_specter : arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
		    class LinkedItemsAcc
			{
				item = "rhsusf_acc_M952V";
				slot = "PointerSlot";
			};
		};
	};

	////////////////////Squad Automatic Weapons////////////////////

	class 160_arifle_MX_SW_Black_F_Hamr : arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_SW_Black_F_xps3 : arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_xps3";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	////////////////////Light Machine Guns////////////////////

    class 160_rhs_weap_m240G_specter : rhs_weap_m240G
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
		};
	};

	////////////////////SMGs////////////////////

	class 160_SMG_05_F_aco : SMG_05_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn_smg";
				slot = "CowsSlot";
			};
		};
	};

	////////////////////Sniper Rifles////////////////////

	class 160_srifle_DMR_02_F_premier : srifle_DMR_02_F
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
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle
			{
			    item = "muzzle_snds_338_black";
			    slot = "MuzzleSlot";
		    };
		};
	};

	////////////////////Pistols////////////////////

	class 160_hgun_P07_F_viper : hgun_P07_F
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

	////////////////////SPAR 16 versions if people dont want the MX////////////////////

	class 160_arifle_SPAR_01_blk_F_specter : arifle_SPAR_01_blk_F //AR//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_SPAR_01_GL_blk_F_specter : arifle_SPAR_01_GL_blk_F //GL//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_SPAR_02_blk_F_specter : arifle_SPAR_02_blk_F //SAW//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_SPAR_03_blk_F_specter : arifle_SPAR_03_blk_F //DMR//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
	    };
    };

    ////////////////////RHS HK417 versions if people dont want the MX////////////////////

	class 160_rhs_weap_hk416d10_specter : rhs_weap_hk416d10 //AR//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
		};
	};

	class 160_rhs_weap_hk416d10_m320_specter : rhs_weap_hk416d10_m320 //GL//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
		};
	};

	class 160_rhs_weap_m27iar_specter : rhs_weap_m27iar //SAW//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_SpecterDR_A_3d";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
};



