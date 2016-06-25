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
class arifle_MX_Black_F;
class arifle_MX_GL_Black_F;
class arifle_MX_SW_Black_F;
class arifle_MXC_Black_F;
class arifle_MXM_Black_F;
class arifle_MX_F;
class LMG_Mk200_F;
class MMG_02_black_F;
class SMG_01_F;
class srifle_LRR_F;

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

	class 160_srifle_EBR_F_cco: srifle_EBR_F //EBR TWO// //vanilla + RHS//
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
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};

	class 160_srifle_DMR_05_blk_F_cco: srifle_DMR_05_blk_F //CYRYS ONE// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
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

	class 160_srifle_DMR_05_blk_F_premier_viper: srifle_DMR_05_blk_F //CYRUS THREE// //vanilla + RHS//
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
			    item = "muzzle_snds_93mmg";
			    slot = "MuzzleSlot";
		    };
		};
	};

	class 160_arifle_MX_Black_F_specter: arifle_MX_Black_F //MX ONE// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_Black_F_eotech: arifle_MX_Black_F //MX TWO// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_Black_F_cco: arifle_MX_Black_F //MX THREE// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_GL_Black_F_specter: arifle_MX_GL_Black_F //MXGL FOUR// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_GL_Black_F_cco: arifle_MX_GL_Black_F //MXGL FIVE// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_SW_Black_F_specter: arifle_MX_SW_Black_F //MXLWS SIX// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_SW_Black_F_cco: arifle_MX_SW_Black_F //MXLWS SEVEN// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
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

	class 160_arifle_MXC_Black_F_specter: arifle_MXC_Black_F //MX EIGHT// //vanilla + RHS//
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
				item = "acc_flashlight";
				slot = "PointerSlot";
            };
		};
	};

	class 160_arifle_MXC_Black_F_cco: arifle_MXC_Black_F //MX NINE// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
				slot = "CowsSlot";
			};
		};
	};

	class 160_arifle_MXM_Black_F_specter: arifle_MXM_Black_F //MXM TEN// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MXM_Black_F_cco: arifle_MXM_Black_F //MXM ELEVEN// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
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

	class 160_arifle_MX_F_cco: arifle_MX_F //MX TWELVE// //vanilla + RHS//
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
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};

	class 160_arifle_MX_Black_F_specter_viper: arifle_MX_Black_F //MX THIRTEEN// //vanilla + RHS//
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

	class 160_LMG_Mk200_F_cco: LMG_Mk200_F //MK200 ONE// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
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

	class 160_MMG_02_black_F_cco: MMG_02_black_F //LWMMG ONE// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
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

	class 160_SMG_01_F_cco: SMG_01_F //VECTOR ONE// //vanilla + RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
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
};
