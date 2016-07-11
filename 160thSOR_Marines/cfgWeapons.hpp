/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 07/03/16
	Description: cfgWeapons.hpp
*/
class cfgWeapons
{
class srifle_EBR_F;
class srifle_DMR_05_blk_F;
class arifle_SPAR_03_khk_F;
class arifle_MX_Black_F;
class arifle_MX_GL_Black_F;
class arifle_MX_SW_Black_F;
class arifle_MXC_Black_F;
class arifle_MXM_Black_F;
class arifle_MX_F;
class arifle_SPAR_01_khk_F;
class arifle_SPAR_01_snd_F;
class LMG_Mk200_F;
class MMG_02_black_F;
class rhs_weap_m240G;
class SMG_01_F;
class SMG_05_F;
class srifle_LRR_F;
class hgun_P07_F;

    class 160_srifle_EBR_F_premier: srifle_EBR_F //EBR ONE// //vanilla + RHS//
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

	class 160_srifle_EBR_F_xps3: srifle_EBR_F //EBR TWO// //vanilla + RHS//
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

	class 160_srifle_DMR_05_blk_F_xps3: srifle_DMR_05_blk_F //CYRYS ONE// //vanilla + RHS//
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

	class 160_srifle_DMR_05_blk_F_premier: srifle_DMR_05_blk_F //CYRUS TWO// //vanilla + RHS//
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

	class 160_arifle_SPAR_03_khk_F_ERCO_viper: arifle_SPAR_03_khk_F //SPAR17 THREE// //vanilla + RHS//
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

	class 160_arifle_MX_Black_F_Hamr: arifle_MX_Black_F //MX ONE// //vanilla + RHS//
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

	class 160_arifle_MX_Black_F_xps3: arifle_MX_Black_F //MX THREE// //vanilla + RHS//
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

	class 160_arifle_MX_GL_Black_F_Hamr: arifle_MX_GL_Black_F //MXGL FOUR// //vanilla + RHS//
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

	class 160_arifle_MX_GL_Black_F_xps3: arifle_MX_GL_Black_F //MXGL FIVE// //vanilla + RHS//
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

	class 160_arifle_MX_SW_Black_F_Hamr: arifle_MX_SW_Black_F //MXLWS SIX// //vanilla + RHS//
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

	class 160_arifle_MX_SW_Black_F_xps3: arifle_MX_SW_Black_F //MXLWS SEVEN// //vanilla + RHS//
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

	class 160_arifle_MXC_Black_F_Hamr: arifle_MXC_Black_F //MX EIGHT// //vanilla + RHS//
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

	class 160_arifle_MXC_Black_F_xps3: arifle_MXC_Black_F //MX NINE// //vanilla + RHS//
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

	class 160_arifle_MXM_Black_F_Hamr: arifle_MXM_Black_F //MXM TEN// //vanilla + RHS//
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

	class 160_arifle_MXM_Black_F_xps3: arifle_MXM_Black_F //MXM ELEVEN// //vanilla + RHS//
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

	class 160_arifle_MX_F_xps3: arifle_MX_F //MX TWELVE// //vanilla + RHS//
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

	class 160_arifle_SPAR_01_khk_F_Hamr_viper: arifle_SPAR_01_khk_F //SPAR16 ONE// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
      		class LinkedItemsMuzzle
			{
			    item = "muzzle_snds_H";
			    slot = "MuzzleSlot";
		    };
		    class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_SPAR_01_snd_F_holo: arifle_SPAR_01_snd_F //SPAR16 TWO// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
		    class LinkedItemsAcc
			{
				item = "ACE_acc_pointer_green";
				slot = "PointerSlot";
			};
		};
	};

	class 160_LMG_Mk200_F_xps3: LMG_Mk200_F //MK200 ONE// //vanilla + RHS//
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

	class 160_MMG_02_black_F_xps3: MMG_02_black_F //LWMMG ONE// //vanilla + RHS//
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

    class 160_rhs_weap_m240G_xps3: rhs_weap_m240G //M240G ONE// //vanilla + RHS//
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


	class 160_SMG_01_F_xps3: SMG_01_F //VECTOR ONE// //vanilla + RHS//
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

	class 160_SMG_05_F_aco: SMG_05_F //MP5 ONE// //vanilla + RHS//
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

	class 160_srifle_LRR_F_premier: srifle_LRR_F //LRR ONE// //vanilla + RHS//
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

	class 160_hgun_P07_F_viper: hgun_P07_F //P09 ONE// //vanilla + RHS//
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
