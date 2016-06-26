/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 07/03/16
	Description: cfgTroopsMarines.hpp
*/

class B_Soldier_TL_F;
class B_sniper_F;
class B_spotter_F;
class B_medic_F;
class B_officer_F;
class B_soldier_AR_F;
class B_Soldier_GL_F;
class B_Soldier_F;
class B_soldier_AT_F;
class B_Pilot_F;
class B_crew_F;
class B_recon_TL_F;
class B_engineer_F;



/////////////////////////////
//SOR Marines Faction Units//
/////////////////////////////

//Squad Actual
class SOR_Actual_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Squad Actual W";
	accuracy = 3.5;
	backpack = "Vanilla_SOR_Mech_Radio_M";
	weapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,SL_Equip,
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,SL_Equip,
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_SL_Mags,
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_SL_Mags,
		V_P09,
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

//Commander
class SOR_Commander_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Godfather W";
	accuracy = 3.5;
	backpack = "Vanilla_SOR_Mech_Radio_M";
	weapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09,
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

//Mechanised Commander
class SOR_MechCommand_M : SOR_Commander_M
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) Tombstone W";
	uniformClass = "rhs_uniform_FROG01_wd";
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_cvc_green_helmet",
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_cvc_green_helmet",
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
};

//Air Commander
class SOR_AirCommand_M : SOR_Commander_M
{
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) Jupiter W";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_O",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_O",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
};

//Platoon RTO
class SOR_RTO_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) RTO W";
	backpack = "Vanilla_SOR_RTO_Pack_M";
	weapons[] = {"160_arifle_MX_GL_Black_F_Hamr","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MX_GL_Black_F_Hamr","hgun_P07_F","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip
	};
	magazines[] =
	{
		V_Mags,
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09,
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
};

//Teamleader
class SOR_Teamleader_M : B_Soldier_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Teamleader W";
	accuracy = 3.5;
	backpack = "B_Kitbag_cbr";
	weapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","Throw","Put","ACE_Vector"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_SL_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_SL_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

//Combat Medics
class SOR_Medic_M : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	displayName = "(I) Combat Medic W";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "Vanilla_SOR_Medic_Pack_M";
	weapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"rhsusf_spc_corpsman",
		"rhsusf_opscore_rg_cover_pelt",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_corpsman",
		"rhsusf_opscore_rg_cover_pelt",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

// Auto rifleman
class SOR_MXSW_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) AutoRifleman MXSW W";
	backpack = "Vanilla_SOR_MXSW_Pack_M";
	weapons[] = {"160_arifle_MX_SW_Black_F_cco", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_arifle_MX_SW_Black_F_cco", "hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		V_P09,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		V_P09,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	respawnMagazines[] =
	{
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_mag",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

class SOR_SPMG_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) AutoRifleman SPMG W";
	backpack = "Vanilla_SOR_SPMG_Pack_M";
	weapons[] = {"160_MMG_02_black_F_cco", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_MMG_02_black_F_cco", "hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		V_P09,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		V_P09,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"130Rnd_338_Mag",
	};
	respawnMagazines[] =
	{
		"130Rnd_338_Mag",
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

class SOR_Grenadier_M : B_Soldier_GL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Grenadier W";
	backpack = "Vanilla_SOR_GD_Pack_M";
	weapons[] = {"160_arifle_MX_GL_Black_F_Hamr","hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"160_arifle_MX_GL_Black_F_Hamr","hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"rhsusf_spc_teamleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_teamleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

class SOR_Rifleman_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Rifleman AT Ammo Bearer W";
	backpack = "Vanilla_SOR_Rifleman_Pack_M";
	weapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","Throw","Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

class SOR_Rifleman_ammo_M : SOR_Rifleman_M
{
	displayName = "(I) Rifleman Ammo Bearer W";
	backpack = "Vanilla_SOR_Rifleman_Ammo_Pack_M";
	weapons[] = {"160_arifle_MXM_Black_F_Hamr","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_arifle_MXM_Black_F_Hamr","hgun_P07_F","Throw","Put"};
};

class SOR_RiflemanAT_M : B_soldier_AT_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Rifleman AT W";
	backpack = "B_Kitbag_cbr";
	weapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","launch_NLAW_F", "Throw", "Put"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr", "hgun_P07_F","launch_NLAW_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

//Heli Pilot & CO-Pilot
class SOR_HeliPilot_M : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "rhs_uniform_g3_blk";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	displayName = "(A) Heli Pilot W";
	backpack = "Vanilla_SOR_Mech_Radio_M";
	weapons[] = {"160_SMG_01_F_cco","hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_SMG_01_F_cco","hgun_P07_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR"};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR"
	};
	magazines[] =
	{
		V_P09,
		"30Rnd_45ACP_Mag_SMG_01",
		"30Rnd_45ACP_Mag_SMG_01",
		"30Rnd_45ACP_Mag_SMG_01",
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_P09,
		"30Rnd_45ACP_Mag_SMG_01",
		"30Rnd_45ACP_Mag_SMG_01",
		"30Rnd_45ACP_Mag_SMG_01",
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"rhsusf_hgu56p",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"rhsusf_hgu56p",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
};

//Heli Crew Engineers
class SOR_HeliCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "rhs_uniform_g3_blk";
	displayName = "(A) Heli Crew W";
	backpack = "Vanilla_SOR_Repair_Pack_M";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_arifle_MX_Black_F_cco", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_cco", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR"
	};
	magazines[] =
	{
		V_P09,
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer",
		"SmokeShellGreen",
		"SmokeShell",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_P09,
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_mag_Tracer",
		"SmokeShellGreen",
		"SmokeShell",
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_hgu56p_mask",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_hgu56p_mask",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
};

//Jet Pilots
class SOR_JetPilot_M : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) Jet Pilot W";
	backpack = "B_Parachute";
	weapons[] = {"hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"hgun_P07_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip
	};
	magazines[] =
	{
		V_P09,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_P09,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	linkedItems[] =
	{
		"V_Rangemaster_belt",
		"H_PilotHelmetFighter_B",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_Rangemaster_belt",
		"H_PilotHelmetFighter_B",
		Airborne_Equipment
	};
};

// MEV Pilot & CO-Pilot
class SOR_MEVPilot_M : SOR_HeliPilot_M
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) MEV Pilot W";
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		"NVGogglesB_blk_F",
		Airborne_Equipment
	};
};

class SOR_ParaJumper_M : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) Para Jumper W";
	backpack = "Vanilla_SOR_PJMedicPack_M";
	uniformClass = "rhs_uniform_g3_mc";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_arifle_MXC_Black_F_Hamr", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MXC_Black_F_Hamr", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_P09,
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_mc_cover_pelt_cam",
		"G_Balaclava_TI_G_blk_F",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_mc_cover_pelt_cam",
		"G_Balaclava_TI_G_blk_F",
		Airborne_Equipment
	};
	class UserActions
	{
		class SOR_HALO
		{
			displayName = "<t color='#FF0000'>HALO</t>";
			displayNameDefault = "<t color='#FF0000'>HALO</t>";
			condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1))";
			priority = 8;
			showWindow = 1;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_fnc_parajump; SOR_ParaJump_Active = false;";
		};
	};
};

//Recon Units
class SOR_ReconLeader_M : B_recon_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "rhs_uniform_g3_rgr";
	displayName = "(I) Recon Lead W";
	accuracy = 3.5;
//		cost = 500000;
//		camouflage = 0.6;
//		threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_arifle_MX_Black_F_Hamr_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr_viper","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"Laserbatteries",
		V_Recon_Mags
	};

	respawnMagazines[] =
	{
		"Laserbatteries",
		V_Recon_Mags
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_fg_pelt_cam",
		"G_Balaclava_TI_G_tna_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_fg_pelt_cam",
		"G_Balaclava_TI_G_tna_F",
		Recon_Equipment
	};
	class UserActions
	{
		class SOR_HALO
		{
			displayName = "<t color='#FF0000'>HALO</t>";
			displayNameDefault = "<t color='#FF0000'>HALO</t>";
			condition = "((getPosATL player) select 2 > 50) && SOR_ParaJump_Active && !((surfaceIsWater getPos player) && ((getPosASL player) select 2 < 1))";
			priority = 8;
			showWindow = 1;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_fnc_parajump; SOR_ParaJump_Active = false;";
		};
	};
};

class SOR_ReconJTAC_M : SOR_ReconLeader_M
{
	icon =  "iconMan";
	backpack = "Vanilla_SOR_JTAC_Pack_M";
	displayName = "(I) Recon JTAC W";
	weapons[] = {"160_arifle_MX_Black_F_Hamr_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr_viper","Throw","Put","ACE_Vector"};
};

class SOR_ReconRifleman_M : SOR_ReconLeader_M
{
	icon =  "iconMan";
	displayName = "(I) Recon Rifleman W";
	weapons[] = {"160_arifle_MX_Black_F_Hamr_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_MX_Black_F_Hamr_viper","Throw","Put","ACE_Vector"};
	magazines[] =
	{
		V_Recon_Mags
	};
	respawnMagazines[] =
	{
		V_Recon_Mags
	};
};

/*
class SOR_Recon_M249AR_M : SOR_ReconLeader_M
{
	icon =  "iconManMG";
	backpack = "SOR_M249_Pack_M";
	displayName = "(I) Recon AutoRifleman MK200";
	weapons[] = {"160_LMG_Mk200_F_cco", "Throw", "Put"};
	respawnWeapons[] = {"160_LMG_Mk200_F_cco", "Throw", "Put"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"rhs_mag_m67",
		"rhs_mag_m67",
		"SmokeShell",
		"SmokeShell",
		"200Rnd_65x39_cased_Box"
	};
	respawnMagazines[] =
	{
		"rhs_mag_m67",
		"rhs_mag_m67",
		"SmokeShell",
		"SmokeShell",
		"200Rnd_65x39_cased_Box"
	};
};

class SOR_ReconSpotter_M : SOR_ReconLeader_M
{
	icon =  "iconMan";
	displayName = "(I) Recon Spotter";
	weapons[] = {"160_srifle_EBR_F_cco","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_srifle_EBR_F_cco","Throw","Put","ACE_Vector"};
	Items[] =
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		"ACE_NVG_Wide",
		Recon_Equip,
		Recon_Meds
	};
	RespawnItems[] =
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		"ACE_NVG_Wide",
		Recon_Equip,
		Recon_Meds
	};
	magazines[] =
	{
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag"
	};
	respawnMagazines[] =
	{
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag",
		"20Rnd_762x51_Mag"
	};
};
*/

class SOR_Marksman_M : SOR_ReconLeader_M
{
	icon =  "iconMan";
	displayName = "(I) Recon Marksman";
	weapons[] = {"160_srifle_DMR_05_blk_F_premier_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_srifle_DMR_05_blk_F_premier_viper","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"SmokeShell",
		"SmokeShell",
		"10Rnd_93x64_DMR_05_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		"SmokeShell",
		"SmokeShell",
		"10Rnd_93x64_DMR_05_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"Laserbatteries"
	};
};

//Snipers
class SOR_Sniper_M : B_sniper_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Sniper W";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_lsh";
	backpack = "Vanilla_SOR_Sniper_Camo";
	weapons[] = {"160_srifle_LRR_F_premier","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_srifle_LRR_F_premier","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Equip,
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"7Rnd_408_Mag",
		"Laserbatteries"
	};
	linkedItems[] =
	{
	    "V_Chestrig_rgr",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
	    "V_Chestrig_rgr",
		Recon_Equipment
	};
};

class SOR_Spotter_M : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Spotter W";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_lsh";
	backpack = "Vanilla_SOR_Spotter_Radio";
	weapons[] = {"160_arifle_MXM_Black_F_Hamr","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_MXM_Black_F_Hamr","Throw","Put","ACE_Vector"};
	Items[] =
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		"ACE_NVG_Wide",
		Recon_Equip,
		Recon_Meds
	};
	RespawnItems[] =
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		"ACE_NVG_Wide",
		Recon_Equip,
		Recon_Meds
	};
	magazines[] =
	{
		V_Recon_Mags
	};
	respawnMagazines[] =
	{
		V_Recon_Mags
	};
	linkedItems[] =
	{
		"V_Chestrig_rgr",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_Chestrig_rgr",
		Recon_Equipment
	};
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_MechCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) Mechanised Gunner W";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "";
	weapons[] = {"hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_P09
	};
	respawnMagazines[] =
	{
		V_P09
	};
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"rhsusf_cvc_green_ess",
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"rhsusf_cvc_green_ess",
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_MechOperator_M : SOR_MechCrew_M
{
	displayName = "(M) Mechanised Operator W";
	backpack = "Vanilla_SOR_Mech_Radio_M";
	weapons[] = {"160_arifle_MXC_Black_F_cco","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_MXC_Black_F_cco","hgun_P07_F","Throw","Put","Laserdesignator"};
	magazines[] =
	{
		V_P09,
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
		"SmokeShell",
		"SmokeShell",
		"Laserbatteries",
	};
	respawnMagazines[] =
	{
		V_P09,
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
		"SmokeShell",
		"SmokeShell",
		"Laserbatteries",
	};
	linkedItems[] =
	{
		"rhsusf_spc_crewman",
		"rhsusf_cvc_green_ess",
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_crewman",
		"rhsusf_cvc_green_ess",
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_MechCrewCommander_M : SOR_MechOperator_M
{
	displayName = "(M) Mechanised Crew Commander W";
	backpack = "Vanilla_SOR_Mech_Radio_M";
	cost = 100000;
};

class SOR_MechDriver_M : SOR_MechCrew_M
{
	displayName = "(M) Mechanised Driver W";
	backpack = "Vanilla_SOR_Repair_Pack_M";
};

//HMG Team
class SOR_HMGActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Actual W";
	icon =  "iconManLeader";
	backpack = "Vanilla_SOR_Mech_Radio_M";
};

class SOR_HMGGunner_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Gunner W";
	backpack = "RHS_Mk19_Gun_Bag";
};

class SOR_HMGCarrier_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Carrier W";
	backpack = "RHS_M2_MiniTripod_Bag";
};

class SOR_HMGRFL_M : SOR_Grenadier_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Rifleman M320 W";
	backpack = "Vanilla_SOR_GD_Pack_M";
};

//Mortar Team
class SOR_MORActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Actual W";
	backpack = "Vanilla_SOR_Mech_Radio_M";
};

class SOR_MORGunner_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Gunner W";
	backpack = "B_Mortar_01_weapon_F";
};

class SOR_MORCarrier_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Carrier W";
	backpack = "B_Mortar_01_support_F";
};

class SOR_MORRFL_M : SOR_Grenadier_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Rifleman M320 W";
	backpack = "Vanilla_SOR_GD_Pack_M";
};

//Repair Team
class SOR_Engineer_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(S) Blacksmith W";
	backpack = "Vanilla_SOR_Repair_Pack_M";
	weapons[] = {"160_arifle_MXC_Black_F_cco","Throw","Put"};
	respawnWeapons[] = {"160_arifle_MXC_Black_F_cco","Throw","Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
	    "30Rnd_65x39_caseless_mag"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_mag",
	    "30Rnd_65x39_caseless_mag"
	};
	linkedItems[] =
	{
		"rhsusf_spc_crewman",
		"rhs_booniehat2_marpatwd",
		"rhs_ess_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_crewman",
		"rhs_booniehat2_marpatwd",
		"rhs_ess_black",
		Standard_Equipment
	};
};
