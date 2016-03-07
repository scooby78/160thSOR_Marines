/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 07/03/16 
	Description: cfgWeapons.hpp
*/
class cfgWeapons 
{
class rhs_weap_m4a1_grip;
class rhs_weap_m16a4_grip;
class rhs_weap_m16a4_carryhandle_M203;
class rhs_weap_m27iar;
	
	class 160_rhs_weap_m4a1_grip_cco1: rhs_weap_m4a1_grip 
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

	class 160_rhs_weap_m4a1_grip_cco: rhs_weap_m4a1_grip 
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
				item = "rhsusf_acc_anpeq15";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_rhs_weap_m4a1_grip_acog: rhs_weap_m4a1_grip 
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
		};
	};
	
	class 160_rhs_weap_m16a4_grip_acog: rhs_weap_m16a4_grip 
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
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
		};
	};
		
	class 160_rhs_weap_m16a4_carryhandle_M203_cco: rhs_weap_m16a4_carryhandle_M203 
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
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
		};		
	};
	
	class 160_rhs_weap_m27iar_cco: rhs_weap_m27iar 
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
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};
		};		
	};	
	
	class 160_rhs_weap_m27iar_acog: rhs_weap_m27iar 
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
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
		};		
	};	
	
	class 160_rhs_weap_m27iar_acog_s: rhs_weap_m27iar 
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
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};	

		};		
	};	
};
