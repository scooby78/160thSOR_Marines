/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 07/03/16
	Description: cfgWeapons.hpp
*/
class cfgWeapons
{
class rhs_weap_m4a1_carryhandle; //RHS//
class rhs_weap_hk416d10_LMT;
class rhs_weap_hk416d145_grip;
class rhs_weap_m16a4_carryhandle;
class rhs_weap_m16a4_carryhandle_M203;
class rhs_weap_m249_pip_L_para;
class rhs_weap_m27iar_grip;
class rhs_weap_m240G;
class rhsusf_weap_MP7A1_base_f;
class rhs_weap_mk18_KAC;
class rhs_weap_M107_w;
class srifle_EBR_F;

class srifle_DMR_05_blk_F; //Vanilla + RHS//
class arifle_MX_Black_F;
class arifle_MX_GL_Black_F;
class arifle_MX_SW_Black_F;
class arifle_MXC_Black_F;
class arifle_MXM_Black_F;
class LMG_Mk200_F;
class MMG_02_black_F;
class SMG_01_F;
class srifle_LRR_F;

	class 160_rhs_weap_m4a1_carryhandle_acog: rhs_weap_m4a1_carryhandle //M4 ONE// //RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_ACOG";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "rhsusf_acc_anpeq15_bk_top";
				slot = "PointerSlot";
			};

		};
	};

	class 160_rhs_weap_m4a1_carryhandle_cco: rhs_weap_m4a1_carryhandle //M4 TWO// //RHS//
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

    class 160_rhs_weap_m4a1_carryhandle_eotechviper: rhs_weap_m4a1_carryhandle //M4 THREE// //RHS//
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
				item = "rhsusf_acc_anpeq15_bk_top";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};

		};
	};

	class 160_rhs_weap_m4a1_carryhandle_eotech: rhs_weap_m4a1_carryhandle //M4 FOUR////RHS//
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

	class 160_rhs_weap_hk416d10_LMT_acog: rhs_weap_hk416d10_LMT //HK ONE// //RHS//
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

	class 160_rhs_weap_hk416d10_LMT_cco: rhs_weap_hk416d10_LMT //HK TWO// //RHS//
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "rhsusf_acc_compm4";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};

		};
	};

	class 160_rhs_weap_hk416d145_grip_cco: rhs_weap_hk416d145_grip //HK THREE// //RHS//
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
				item = "rhsusf_acc_M952V";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip1";
				slot = "UnderBarrelSlot";
			};

		};
	};

	class 160_rhs_weap_m16a4_carryhandle_eotech: rhs_weap_m16a4_carryhandle //M16 ONE// //RHS//
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

	class 160_rhs_weap_m16a4_carryhandle_M203_acog: rhs_weap_m16a4_carryhandle_M203 //M16 TWO// //RHS//
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

	class 160_rhs_weap_m249_pip_L_para_cco: rhs_weap_m249_pip_L_para //M249 ONE// //RHS//
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

	class 160_rhs_weap_m249_pip_L_para_acog: rhs_weap_m249_pip_L_para //M249 TWO// //RHS//
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

	class 160_rhs_weap_m27iar_grip_cco: rhs_weap_m27iar_grip //M27 ONE// //RHS//
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
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};

		};
	};

	class 160_rhs_weap_m240G_cco: rhs_weap_m240G //M240 ONE// //RHS//
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

	class 160_rhsusf_weap_MP7A1_base_f_eotech: rhsusf_weap_MP7A1_base_f //MP7 ONE// //RHS//
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

	class 160_rhs_weap_mk18_KAC_cco: rhs_weap_mk18_KAC //MK18 ONE// //RHS//
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

	class 160_rhs_weap_M107_w_premier: rhs_weap_M107_w //M107 ONE// //RHS//
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

	class 160_arifle_MX_Black_F_specter: arifle_MX_Black_F //MX ONE// //vanilla + RHS//
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

	class 160_arifle_MX_Black_F_eotech: arifle_MX_Black_F //MX TWO// //vanilla + RHS//
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

	class 160_arifle_MX_Black_F_cco: arifle_MX_Black_F //MX THREE// //vanilla + RHS//
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

	class 160_arifle_MX_GL_Black_F_specter: arifle_MX_GL_Black_F //MXGL FOUR// //vanilla + RHS//
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

	class 160_arifle_MX_GL_Black_F_cco: arifle_MX_GL_Black_F //MXGL FIVE// //vanilla + RHS//
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
				item = "rhsusf_acc_M952V";
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
