/*
	Name: 160th SOR Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: cfgCrates.hpp
*/

	class Box_NATO_Ammo_F;
	class Box_NATO_Wps_F;
	class Box_NATO_Equip_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_WpsSpecial_F;
	class Box_T_NATO_WpsSpecial_F;
	class Box_NATO_Support_F;
	class Box_NATO_Uniforms_F;

	class ACE_medicalSupplyCrate;

	class Land_MetalCase_01_large_F;
	class Land_MetalCase_01_medium_F;
	class Land_MetalCase_01_small_F;
	class Land_PlasticCase_01_large_F;
	class Land_PlasticCase_01_medium_F;
	class Land_PlasticCase_01_small_F;
	class Land_Suitcase_F;

	class B_supplyCrate_F;
	class CargoNet_01_box_F;
	class B_CargoNet_01_ammo_F;
	class Box_NATO_AmmoVeh_F;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////BOXES

	class SOR_USMC_Ammo_box : Box_NATO_Ammo_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Ammo]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag,30)
			mag_xx(16Rnd_9x21_Mag,5)
			mag_xx(rhsusf_100Rnd_762x51_m62_tracer,2)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Weapons_box : Box_NATO_Wps_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Weapons]";
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(160_rhs_weap_mk18_grip_bk_acog,6)
			weap_xx(160_rhs_weap_mk18_m320_acog,2)
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Equipment_box : Box_NATO_Equip_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Equipment]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Explosives_box : Box_NATO_AmmoOrd_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Explosives Charges]";
	    class TransportItems
	    {
		    item_xx(MineDetector,1);
		    item_xx(ACE_DefusalKit,1);
		    item_xx(ACE_Clacker,1);
		    item_xx(rhsusf_m112_mag,6);
		    item_xx(SatchelCharge_Remote_Mag,2);
	    };
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Explosives_Mines_box : Box_NATO_AmmoOrd_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Explosives Mines]";
	    class TransportItems
	    {
		    item_xx(MineDetector,1);
		    item_xx(ACE_DefusalKit,2);
		    item_xx(ACE_Clacker,2);
		    item_xx(ATMine_Range_Mag,5);
		    item_xx(rhs_mine_M19_mag,5);
		    item_xx(APERSBoundingMine_Range_Mag,10);
		    item_xx(APERSMine_Range_Mag,10);
		    item_xx(SLAMDirectionalMine_Wire_Mag,5);
		    item_xx(ClaymoreDirectionalMine_Remote_Mag,10);
	    };
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Grenades_box : Box_NATO_Grenades_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Grenades]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(SmokeShellBlue,10)
			mag_xx(SmokeShellGreen,10)
			mag_xx(SmokeShellOrange,10)
			mag_xx(SmokeShellPurple,10)
			mag_xx(SmokeShellRed,10)
			mag_xx(SmokeShellYellow,10)
			mag_xx(SmokeShell,10)
			mag_xx(HandGrenade,10)
			mag_xx(MiniGrenade,10)
			mag_xx(1Rnd_Smoke_Grenade_shell,10)
			mag_xx(1Rnd_SmokeRed_Grenade_shell,10)
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,10)
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,10)
			mag_xx(1Rnd_SmokePurple_Grenade_shell,10)
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,10)
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,10)
			mag_xx(1Rnd_HE_Grenade_shell,10)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Launchers_basic_box : Box_NATO_WpsLaunch_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Launchers Basic]";
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136,2)
			weap_xx(rhs_weap_M136_hedp,2)
			weap_xx(rhs_weap_M136_hp,2)
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Launchers_adv_box : Box_NATO_WpsSpecial_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Launchers Adv]";
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(rhs_weap_fim92,2)
			weap_xx(launch_NLAW_F,1)
			weap_xx(rhs_weap_fgm148,1)
			weap_xx(rhs_weap_smaw,1)
		};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Launchers_adv_ammo_box : Box_NATO_WpsSpecial_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Launchers Adv Ammo]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(rhs_fim92_mag,10)
			mag_xx(rhs_fgm148_magazine_AT,3)
			mag_xx(rhs_mag_smaw_HEAA,5)
			mag_xx(rhs_mag_smaw_HEDP,5)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Viper_ammo : Box_T_NATO_WpsSpecial_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Viper Ammo]";
		class TransportItems{};
		class TransportWeapons
		{
			weap_xx(rhs_weap_M136_hedp,2)
			weap_xx(160_rhs_weap_mk18_grip_KAC_wd_acog,1)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag,10)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Viper_accessories : Box_T_NATO_WpsSpecial_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Viper Accessories]";
		class TransportItems
		{
		    item_xx(NVGogglesB_blk_F,1);
		};
		class TransportWeapons
		{
			weap_xx(160_rhs_weap_m249_pip_S_para_eotech,2)
			weap_xx(160_rhs_weap_M107_w_premier,1)
		};
		class TransportMagazines
		{
			mag_xx(rhs_200rnd_556x45_M_SAW,5)
			mag_xx(rhsusf_mag_10Rnd_STD_50BMG_M33,3)
		};
		class TransportBackpacks
		{
		    pack_xx(USMC_SOR_RFLAT_Pack_M,2)
		};
	};

	class SOR_USMC_General_accessories : Box_NATO_Support_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [General Accessories]";
		class TransportItems
		{
			item_xx(ACE_SpraypaintBlack,5)
			item_xx(ACE_SpraypaintBlue,5)
			item_xx(ACE_SpraypaintGreen,5)
			item_xx(ACE_SpraypaintRed,5)
			item_xx(ACE_bodyBag,5)
			item_xx(ACE_CableTie,10)
			item_xx(ACE_DAGR,3)
			item_xx(ACE_EarPlugs,20)
			item_xx(ACE_EntrenchingTool,5)
			item_xx(ACE_Flashlight_MX991,5)
			item_xx(ACE_MapTools,5)
			item_xx(ACE_wirecutter,5)
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(Chemlight_blue,20)
			mag_xx(Chemlight_green,20)
			mag_xx(Chemlight_red,20)
			mag_xx(Chemlight_yellow,20)
			mag_xx(B_IR_Grenade,20)
			mag_xx(ACE_HandFlare_Green,10)
			mag_xx(ACE_HandFlare_Red,10)
			mag_xx(ACE_HandFlare_White,10)
			mag_xx(ACE_HandFlare_Yellow,10)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_PJ_Uniforms_box : Box_NATO_Uniforms_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [PJ Uniforms]";
		class TransportItems
		{
			item_xx(U_B_Wetsuit,10)
			item_xx(V_RebreatherB,10)
			item_xx(G_B_Diving,10)
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
            pack_xx(USMC_SOR_PJMedicPack_M,3)
		};
	};

	class SOR_USMC_PJ_Medical_box : ACE_medicalSupplyCrate
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [PJ Medical]";
		class TransportItems
		{
			item_xx(ACE_bloodIV,10)
			item_xx(ACE_bloodIV_250,10)
			item_xx(ACE_bloodIV_500,10)
			item_xx(ACE_morphine,20)
			item_xx(ACE_fieldDressing,40)
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

	class SOR_USMC_Parachute_box : Box_NATO_Uniforms_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyBoxes";
		vehicleClass = "SOR_USMC_SupplyBoxes";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Box [Parachutes]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(B_Parachute,100)
		};
	};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////CRATES

	class SOR_USMC_Ammo_crate : B_CargoNet_01_ammo_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Ammo]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag,100)
			mag_xx(rhsusf_100Rnd_762x51_m62_tracer,10)
			mag_xx(1Rnd_HE_Grenade_shell,10)
			mag_xx(1Rnd_Smoke_Grenade_shell,10)
			mag_xx(1Rnd_SmokeRed_Grenade_shell,10)
			mag_xx(HandGrenade,20)
			mag_xx(SmokeShell,20)
			mag_xx(SmokeShellGreen,20)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Ammo_med_crate : B_CargoNet_01_ammo_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Ammo&Med]";
		class TransportItems
		{
			item_xx(ACE_CableTie,5)
			item_xx(ACE_FieldDressing,80);
			item_xx(ACE_morphine,40);
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag,55)
			mag_xx(rhsusf_100Rnd_762x51_m62_tracer,5)
			mag_xx(1Rnd_HE_Grenade_shell,5)
			mag_xx(1Rnd_Smoke_Grenade_shell,5)
			mag_xx(1Rnd_SmokeRed_Grenade_shell,5)
			mag_xx(HandGrenade,10)
			mag_xx(SmokeShell,10)
			mag_xx(SmokeShellGreen,10)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_M2_crate : CargoNet_01_box_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [M2 HMG]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(RHS_M2_MiniTripod_Bag,4)
			pack_xx(RHS_M2_Tripod_Bag,4)
			pack_xx(RHS_M2_Gun_Bag,4)
		};
	};

	class SOR_USMC_Mortar_crate : CargoNet_01_box_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Mortar]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(rhs_M252_Gun_Bag,4)
			pack_xx(rhs_M252_Bipod_Bag,4)
		};
	};

	class SOR_USMC_Heavy_weapons_crate : B_supplyCrate_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Heavy Weapons]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{
			pack_xx(rhs_Tow_Gun_Bag,2)
			pack_xx(rhs_TOW_Tripod_Bag,2)
			pack_xx(RHS_Mk19_Gun_Bag,2)
			pack_xx(RHS_Mk19_Tripod_Bag,2)
			pack_xx(B_HMG_01_A_weapon_F,1)
			pack_xx(B_GMG_01_A_weapon_F,1)
		};
	};

	class SOR_USMC_Veh_Ammo_MRAP_crate : Box_NATO_AmmoVeh_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Veh Ammo MRAP]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(200Rnd_127x99_mag_Tracer_Red,4)
			mag_xx(32Rnd_40mm_G_belt,2)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Veh_Ammo_IFVAPC_crate : Box_NATO_AmmoVeh_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Veh Ammo IFV&APC]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(60Rnd_40mm_GPR_Tracer_Red_shells,2)
			mag_xx(40Rnd_40mm_APFSDS_Tracer_Red_shells,3)
			mag_xx(1000Rnd_65x39_Belt_Tracer_Red,2)
			mag_xx(200Rnd_127x99_mag_Tracer_Red,3)
			mag_xx(32Rnd_40mm_G_belt,2)
			mag_xx(SmokeLauncherMag,10)
		};
		class TransportBackpacks{};
	};

	class SOR_USMC_Veh_Ammo_ARTYAA_crate : Box_NATO_AmmoVeh_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Veh Ammo Arty&AA]";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines
		{
			mag_xx(32Rnd_155mm_Mo_shells,2)
			mag_xx(6Rnd_155mm_Mo_smoke,2)
			mag_xx(2Rnd_155mm_Mo_guided,2)
			mag_xx(2Rnd_155mm_Mo_LG,2)
			mag_xx(6Rnd_155mm_Mo_mine,2)
			mag_xx(2Rnd_155mm_Mo_Cluster,2)
			mag_xx(6Rnd_155mm_Mo_AT_mine,2)
			mag_xx(12Rnd_230mm_rockets,2)
			mag_xx(4Rnd_Titan_long_missiles,2)
			mag_xx(680Rnd_35mm_AA_shells_Tracer_Red,2)
			mag_xx(SmokeLauncherMag,10)
		};
		class TransportBackpacks{};
	};
	class SOR_USMC_Construction_crate : CargoNet_01_box_F
	{
		editorCategory = "SOR_USMC_Cat_Supplies";
		editorSubcategory = "SOR_USMC_SubCat_SupplyCrates";
		vehicleClass = "SOR_USMC_SupplyCrates";
		faction = SOR_USMC_Faction_CRATE;
		displayName = "Crate [Construction]";
		class TransportItems
		{
			item_xx(ACE_SandbagObject,100)
			item_xx(ACE_EntrenchingTool,5)
			item_xx(ACE_wirecutter,5)
			item_xx(MineDetector,2)
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};