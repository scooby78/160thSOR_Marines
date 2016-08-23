/*
	Name: 160th SOR USMC Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
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
class B_Helipilot_F;
class B_crew_F;
class B_recon_TL_F;
class B_engineer_F;
class B_diver_TL_F;
class B_diver_F;
class B_recon_medic_F;
class B_HeavyGunner_F;
class B_recon_JTAC_F;

/////////////////////////////
//SOR Marines Faction Units//
/////////////////////////////

//Zeus unit
class SOR_USMC_ZeusCommand_W : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] ZEUS";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
        "rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	class UserActions
	{
		class SOR_CountUnitsAction
		{
			condition = "(alive this) && !(this getVariable ['ZEUSTOOLS_ACTIVE',false])";
			displayName = "<t color='#F088ff'>Initialise Zeus Tools</t>";
			priority = 8;
			showWindow = 0;
			hideOnUse = true;
			radius= 2;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_fnc_zeusTools";
		};
	};
};

    ////////////////////Squad Actual////////////////////

class SOR_USMC_Actual_W : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Squad Actual";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
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
		"rhsusf_lwh_helmet_marpatwd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_lwh_helmet_marpatwd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Infantry Commander////////////////////

class SOR_USMC_Commander_W : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Godfather";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_ACPC2_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_ACPC2_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_CC2,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_CC2,
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Mech Commander////////////////////

class SOR_USMC_MechCommand_W : SOR_USMC_Commander_W
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) [W] Tombstone";
	uniformClass = "rhs_uniform_FROG01_wd";
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_HelmetCrew_B",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_HelmetCrew_B",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
};

    ////////////////////Air Commander////////////////////

class SOR_USMC_AirCommand_W : SOR_USMC_Commander_W
{
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] Jupiter";
    uniformClass = "nomex_tan";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"hgun_ACPC2_F","Throw", "Put"};
	respawnWeapons[] = {"hgun_ACPC2_F","Throw", "Put"};
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
};

    ////////////////////Platoon RTO////////////////////

class SOR_USMC_RTO_W : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] RTO";
	backpack = "USMC_SOR_RTO_Pack_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		SL_Equip
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_norotos_alt",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
};

    ////////////////////Teamleader////////////////////

class SOR_USMC_Teamleader_W : B_Soldier_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Teamleader";
	accuracy = 3.5;
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP2", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP2", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_compm4",
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_compm4",
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
		"rhsusf_lwh_helmet_marpatwd_headset_blk",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_lwh_helmet_marpatwd_headset_blk",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Combat Medics////////////////////

class SOR_USMC_Medic_W : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	displayName = "(I) [W] Combat Medic";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "USMC_SOR_Medic_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_corpsman",
		"rhsusf_opscore_rg_cover_pelt",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Auto Rifleman////////////////////

class SOR_USMC_SAW_W : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] AutoRifleman M27IAR";
	backpack = "USMC_SOR_SAW_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_M27IAR_GRIP", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M27IAR_GRIP", "hgun_P07_F","Throw", "Put"};
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
        V_Mags_SAW,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	respawnMagazines[] =
	{
        V_Mags_SAW,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"rhsusf_lwh_helmet_marpatwd_blk_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"rhsusf_lwh_helmet_marpatwd_blk_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

class SOR_USMC_LMG_W : B_HeavyGunner_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] AutoRifleman M240G";
	backpack = "USMC_SOR_LMG_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_M240G","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M240G","hgun_P07_F","Throw","Put"};
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
		"rhsusf_100Rnd_762x51_m62_tracer",
	};
	respawnMagazines[] =
	{
		"rhsusf_100Rnd_762x51_m62_tracer",
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg",
		"rhsusf_lwh_helmet_marpatwd_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg",
		"rhsusf_lwh_helmet_marpatwd_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Grenadier////////////////////

class SOR_USMC_Grenadier_W : B_Soldier_GL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Grenadier";
	backpack = "USMC_SOR_GD_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_teamleader",
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Riflemen////////////////////

class SOR_USMC_Rifleman_LMG_AMMO_W : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Rifleman M240G Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_LMG_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};

class SOR_USMC_Rifleman_SAW_AMMO_W : SOR_USMC_Rifleman_LMG_AMMO_W
{
	displayName = "(I) [W] Rifleman M27IAR Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_SAW_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	magazines[] =
	{
		V_P09,
		V_Mags
	};
	respawnMagazines[] =
	{
		V_P09,
		V_Mags
	};
};

class SOR_USMC_RiflemanAT_W : B_soldier_AT_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Rifleman AT";
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F","launch_NLAW_F", "Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F","launch_NLAW_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Heli Pilot & Co-Pilot////////////////////

class SOR_USMC_HeliPilot_W : B_Helipilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_tan";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	displayName = "(A) [W] Heli/VTOL Pilot";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	magazines[] =
	{
		V_CC2,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_CC2,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	linkedItems[] =
	{
		"rhsusf_spc",
		"H_PilotHelmetHeli_B",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc",
		"H_PilotHelmetHeli_B",
		Airborne_Equipment
	};
};

    ////////////////////Heli Crew Engineers////////////////////

class SOR_USMC_HeliCrew_W : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_tan";
	displayName = "(A) [W] Heli Crew";
	backpack = "USMC_SOR_Repair_Pack_M";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	magazines[] =
	{
		V_CC2,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShellGreen",
		"SmokeShell",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_CC2,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShellGreen",
		"SmokeShell",
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_hgu56p_mask",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_hgu56p_mask",
		Airborne_Equipment
	};
};

    ////////////////////Jet Pilots////////////////////

class SOR_USMC_JetPilot_W : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] Jet Pilot";
	backpack = "B_Parachute";
	weapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
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
		V_CC2,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_CC2,
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

    ////////////////////MEV & Co-Pilots////////////////////

class SOR_USMC_MEVPilot_W : SOR_USMC_HeliPilot_W
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] USAF MEV Pilot";
	uniformClass = "rhs_uniform_g3_m81";
	backpack = "USMC_SOR_Mech_Radio_W_ILBE";
	linkedItems[] =
	{
		"V_PlateCarrier2_rgr",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_PlateCarrier2_rgr",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
};

class SOR_USMC_ParaJumper_W : B_recon_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] USAF Pararescue Jumper";
	backpack = "USMC_SOR_PJMedicPack_W_M";
	uniformClass = "rhs_uniform_g3_m81";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_GRIP", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_GRIP", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_ACOG3_USMC_3d",
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_ACOG3_USMC_3d",
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
		"V_PlateCarrier2_rgr",
		"rhsusf_opscore_fg_pelt_nsw",
		"rhs_googles_black",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_PlateCarrier2_rgr",
		"rhsusf_opscore_fg_pelt_nsw",
		"rhs_googles_black",
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

    ////////////////////Viper Recon////////////////////

class SOR_USMC_ReconLeader_W : B_recon_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Viper Lead";
	accuracy = 3.5;
//	cost = 500000;
	camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Equip,
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"Laserbatteries",
		V_P09,
		V_Recon_Mags
	};

	respawnMagazines[] =
	{
		"Laserbatteries",
		V_P09,
		V_Recon_Mags
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_paint_pelt",
		"rhs_googles_black",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_paint_pelt",
		"rhs_googles_black",
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

class SOR_USMC_ReconJTAC_W : SOR_USMC_ReconLeader_W
{
	icon =  "iconMan";
	backpack = "USMC_SOR_JTAC_Pack_ILBE";
	displayName = "(I) [W] Viper JTAC";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_ReconRifleman_W : SOR_USMC_ReconLeader_W
{
	icon =  "iconMan";
	displayName = "(I) [W] Viper Rifleman";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_Marksman_W : SOR_USMC_ReconLeader_W
{
	icon =  "iconMan";
	displayName = "(I) [W] Viper Marksman";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
};

    ////////////////////Viper Recon Scuba////////////////////

class SOR_USMC_ReconLeaderScuba_W : B_diver_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "U_B_survival_uniform";
	backpack = "USMC_SOR_Viper_Scuba_M";
	displayName = "(I) [W] Viper Lead [Scuba]";
	accuracy = 3.5;
//	cost = 500000;
    camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"Laserbatteries",
		V_P09
	};

	respawnMagazines[] =
	{
		"Laserbatteries",
		V_P09
	};
	linkedItems[] =
	{
		"V_RebreatherB",
		"H_Bandanna_khk",
		"G_B_Diving",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_RebreatherB",
		"H_Bandanna_khk",
		"G_B_Diving",
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

class SOR_USMC_ReconJTACScuba_W : SOR_USMC_ReconLeaderScuba_W
{
	icon =  "iconMan";
	backpack = "USMC_SOR_Viper_Scuba_M";
	displayName = "(I) [W] Viper JTAC [Scuba]";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_ReconRiflemanScuba_W : SOR_USMC_ReconLeaderScuba_W
{
	icon =  "iconMan";
	displayName = "(I) [W] Viper Rifleman [Scuba]";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_MarksmanScuba_W : SOR_USMC_ReconLeaderScuba_W
{
	icon =  "iconMan";
	displayName = "(I) [W] Viper Marksman [Scuba]";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_W","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
};

    ////////////////////Snipers////////////////////

/*
class SOR_Sniper_W : B_sniper_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Sniper";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_T_FullGhillie_tna_F";
	backpack = "USMC_SOR_Sniper_Camo_M";
	weapons[] = {"SOR_USMC_WEAP_M24","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M24","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
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
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		V_P09,
		"Laserbatteries"
	};
	linkedItems[] =
	{
	    "V_TacChestrig_oli_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
	    "V_TacChestrig_oli_F",
		Recon_Equipment
	};
};

class SOR_Spotter_W : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Spotter";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_T_FullGhillie_tna_F";
	backpack = "USMC_SOR_Spotter_Radio_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
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
		V_Recon_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_Recon_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"V_TacChestrig_oli_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_TacChestrig_oli_F",
		Recon_Equipment
	};
};
*/

    ////////////////////Mechanised Crew/Driver/Gunner Engineers////////////////////

class SOR_USMC_MechCrew_W : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) [W] Mech Gunner";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "";
	weapons[] = {"hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_MapTools",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_MapTools",
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
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_USMC_MechOperator_W : SOR_USMC_MechCrew_W
{
	displayName = "(M) [W] Mech Loader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_P07_F","Throw","Put","Laserdesignator"};
	magazines[] =
	{
		V_P09,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShell",
		"SmokeShell",
		"Laserbatteries",
	};
	respawnMagazines[] =
	{
		V_P09,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShell",
		"SmokeShell",
		"Laserbatteries",
	};
	linkedItems[] =
	{
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_USMC_MechCrewCommander_W : SOR_USMC_MechOperator_W
{
	displayName = "(M) [W] Mech Crew Commander";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	cost = 100000;
};

class SOR_USMC_MechDriver_W : SOR_USMC_MechCrew_W
{
	displayName = "(M) [W] Mech Driver";
	backpack = "USMC_SOR_Repair_Pack_M";
};

    ////////////////////HMG Team////////////////////
/*
class SOR_USMC_HMGActual_W : SOR_USMC_Actual_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] HMG Actual";
	icon =  "iconManLeader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
};

class SOR_USMC_HMGGunner_W : SOR_USMC_Rifleman_LMG_AMMO_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};

class SOR_USMC_HMGCarrier_W : SOR_USMC_Rifleman_LMG_AMMO_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
};

class SOR_USMC_HMGRFL_W : SOR_USMC_Grenadier_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] HMG Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
};

    ////////////////////Mortar Team////////////////////

class SOR_USMC_MORActual_W : SOR_USMC_Actual_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] Mortar Actual";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
};

class SOR_USMC_MORGunner_W : SOR_USMC_Rifleman_LMG_AMMO_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] Mortar Gunner";
	backpack = "rhs_M252_Gun_Bag";
};

class SOR_USMC_MORCarrier_W : SOR_USMC_Rifleman_LMG_AMMO_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] Mortar Carrier";
	backpack = "rhs_M252_Bipod_Bag";
};

class SOR_USMC_MORRFL_W : SOR_USMC_Grenadier_W
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] Mortar Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
};
*/
    ////////////////////Blacksmith////////////////////

class SOR_USMC_TL_Engineer_W : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(S) [W] Blacksmith TL";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
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
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	respawnMagazines[] =
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_ach_bare_wood_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_ach_bare_wood_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

class SOR_USMC_Engineer_W : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(S) [W] Blacksmith";
	backpack = "USMC_SOR_Repair_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
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
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	respawnMagazines[] =
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_ach_bare_wood_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_ach_bare_wood_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Forward Air Controller/Joint Terminal Acttack Controller////////////////////

class SOR_USMC_FAC_W : B_recon_JTAC_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] USAF Forward Air Controller";
	backpack = "USMC_SOR_FAC_Pack_ILBE";
	uniformClass = "U_I_G_Story_Protagonist_F";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_FAC", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_FAC", "hgun_P07_F","Throw", "Put","Laserdesignator"};
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
		"V_PlateCarrier2_rgr",
		"H_HelmetB_light_snakeskin",
		"rhs_googles_black",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_PlateCarrier2_rgr",
		"H_HelmetB_light_snakeskin",
		"rhs_googles_black",
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                   //DESERT//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Zeus unit
class SOR_USMC_ZeusCommand_D : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] ZEUS";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	class UserActions
	{
		class SOR_CountUnitsAction
		{
			condition = "(alive this) && !(this getVariable ['ZEUSTOOLS_ACTIVE',false])";
			displayName = "<t color='#F088ff'>Initialise Zeus Tools</t>";
			priority = 8;
			showWindow = 0;
			hideOnUse = true;
			radius= 2;
			position = "";
			onlyForPlayer = 1;
			statement = "[this] spawn SOR_fnc_zeusTools";
		};
	};
};

    ////////////////////Squad Actual////////////////////

class SOR_USMC_Actual_D : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Squad Actual";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
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
		"rhsusf_lwh_helmet_marpatd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_lwh_helmet_marpatd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Infantry Commander////////////////////

class SOR_USMC_Commander_D : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Godfather";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		V_Mags,
		V_CC2,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_Mags,
		V_CC2,
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_alt_tan",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_alt_tan",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Mech Commander////////////////////

class SOR_USMC_MechCommand_D : SOR_USMC_Commander_D
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) [D] Tombstone";
	uniformClass = "rhs_uniform_FROG01_d";
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_HelmetCrew_B",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_HelmetCrew_B",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
};

    ////////////////////Air Commander////////////////////

class SOR_USMC_AirCommand_D : SOR_USMC_Commander_D
{
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] Jupiter";
    uniformClass = "nomex_tan";

	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"hgun_ACPC2_F","Throw", "Put"};
	respawnWeapons[] = {"hgun_ACPC2_F","Throw", "Put"};
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_O",
		Airborne_Equipment
	};
};

    ////////////////////Platoon RTO////////////////////

class SOR_USMC_RTO_D : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] RTO";
	backpack = "USMC_SOR_RTO_Pack_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		SL_Equip
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_bare_alt_tan",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_mich_bare_alt_tan",
		"rhs_googles_black",
		"ItemGPS",
		Standard_Equipment
	};
};

    ////////////////////Teamleader////////////////////

class SOR_USMC_Teamleader_D : B_Soldier_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Teamleader";
	accuracy = 3.5;
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP2", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP2", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_DAGR",
		"rhsusf_acc_compm4",
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
		"rhsusf_lwh_helmet_marpatd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_lwh_helmet_marpatd_headset",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Combat Medics////////////////////

class SOR_USMC_Medic_D : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	displayName = "(I) [D] Combat Medic";
	uniformClass = "rhs_uniform_FROG01_d";
	backpack = "USMC_SOR_Medic_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_corpsman",
		"rhsusf_opscore_rg_cover_pelt",
		"ItemGPS",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Auto Rifleman////////////////////

class SOR_USMC_SAW_D : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] AutoRifleman M27IAR";
	backpack = "USMC_SOR_SAW_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_M27IAR_GRIP", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M27IAR_GRIP", "hgun_P07_F","Throw", "Put"};
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
        V_Mags_SAW,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	respawnMagazines[] =
	{
		V_Mags_SAW,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"rhsusf_lwh_helmet_marpatd_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"rhsusf_lwh_helmet_marpatd_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

class SOR_USMC_LMG_D : B_HeavyGunner_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] AutoRifleman M240G";
	backpack = "USMC_SOR_LMG_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_M240G","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M240G","hgun_P07_F","Throw","Put"};
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
		"rhsusf_100Rnd_762x51_m62_tracer",
	};
	respawnMagazines[] =
	{
		"rhsusf_100Rnd_762x51_m62_tracer",
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg",
		"rhsusf_lwh_helmet_marpatd_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg",
		"rhsusf_lwh_helmet_marpatd_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Grenadier////////////////////

class SOR_USMC_Grenadier_D : B_Soldier_GL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Grenadier";
	backpack = "USMC_SOR_GD_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_M320","hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_teamleader",
		"rhsusf_mich_helmet_marpatd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Riflemen////////////////////

class SOR_USMC_Rifleman_LMG_AMMO_D : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Rifleman M240G Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_LMG_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};

class SOR_USMC_Rifleman_SAW_AMMO_D : SOR_USMC_Rifleman_LMG_AMMO_D
{
	displayName = "(I) [D] Rifleman M27IAR Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_SAW_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_BLOCK2_GRIP","hgun_P07_F","Throw","Put"};
	magazines[] =
	{
		V_P09,
		V_Mags
	};
	respawnMagazines[] =
	{
		V_P09,
		V_Mags
	};
};

class SOR_USMC_RiflemanAT_D : B_soldier_AT_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Rifleman AT";
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F","launch_NLAW_F", "Throw", "Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP", "hgun_P07_F","launch_NLAW_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"rhsusf_acc_compm4",
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
		"rhsusf_mich_helmet_marpatd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Heli Pilot & Co-Pilot////////////////////

class SOR_USMC_HeliPilot_D : B_Helipilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_tan";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	displayName = "(A) [D] Heli/VTOL Pilot";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	magazines[] =
	{
		V_CC2,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_CC2,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	linkedItems[] =
	{
		"rhsusf_spc",
		"H_PilotHelmetHeli_B",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc",
		"H_PilotHelmetHeli_B",
		Airborne_Equipment
	};
};

    ////////////////////Heli Crew Engineers////////////////////

class SOR_USMC_HeliCrew_D : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_tan";
	displayName = "(A) [D] Heli Crew";
	backpack = "USMC_SOR_Repair_Pack_M";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"ACE_NVG_Wide",
		"ACE_DAGR"
	};
	magazines[] =
	{
		V_CC2,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShellGreen",
		"SmokeShell",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		V_CC2,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShellGreen",
		"SmokeShell",
		"Laserbatteries"
	};
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_hgu56p_mask",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_hgu56p_mask",
		Airborne_Equipment
	};
};

    ////////////////////Jet Pilots////////////////////

class SOR_USMC_JetPilot_D : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] Jet Pilot";
	backpack = "B_Parachute";
	weapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
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
		V_CC2,
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_CC2,
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

    ////////////////////MEV & Co-Pilots////////////////////

class SOR_USMC_MEVPilot_D : SOR_USMC_HeliPilot_D
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] USAF MEV Pilot";
	uniformClass = "rhs_uniform_g3_mc";
	linkedItems[] =
	{
		"rhsusf_spcs_ocp",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spcs_ocp",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
};

class SOR_USMC_ParaJumper_D : B_recon_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] USAF Pararescue Jumper";
	backpack = "USMC_SOR_PJMedicPack_M";
	uniformClass = "rhs_uniform_g3_mc";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_GRIP", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_GRIP", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	Items[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_ACOG3_USMC_3d",
		"ACE_DAGR",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		SL_Equip,
		"rhsusf_acc_ACOG3_USMC_3d",
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
		"rhsusf_opscore_paint_pelt_nsw_cam",
		"rhs_googles_black",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_paint_pelt_nsw_cam",
		"rhs_googles_black",
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

    ////////////////////Viper Recon////////////////////

class SOR_USMC_ReconLeader_D : B_recon_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Viper Lead";
	accuracy = 3.5;
//	cost = 500000;
	camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Equip,
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"Laserbatteries",
		V_P09,
		V_Recon_Mags
	};

	respawnMagazines[] =
	{
		"Laserbatteries",
		V_P09,
		V_Recon_Mags
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_ut_pelt",
		"rhs_googles_black",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_ut_pelt",
		"rhs_googles_black",
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

class SOR_USMC_ReconJTAC_D : SOR_USMC_ReconLeader_D
{
	icon =  "iconMan";
	backpack = "USMC_SOR_JTAC_Pack_ILBE";
	displayName = "(I) [D] Viper JTAC";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_ReconRifleman_D : SOR_USMC_ReconLeader_D
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Rifleman";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_Marksman_D : SOR_USMC_ReconLeader_D
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Marksman";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
};

    ////////////////////Viper Recon Scuba////////////////////

class SOR_USMC_ReconLeaderScuba_D : B_diver_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "U_B_survival_uniform";
	backpack = "USMC_SOR_Viper_Scuba_M";
	displayName = "(I) [D] Viper Lead [Scuba]";
	accuracy = 3.5;
//	cost = 500000;
    camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Meds,
		"rhsusf_acc_compm4",
		"ACE_NVG_Wide"
	};
	magazines[] =
	{
		"Laserbatteries",
		V_P09
	};

	respawnMagazines[] =
	{
		"Laserbatteries",
		V_P09
	};
	linkedItems[] =
	{
		"V_RebreatherB",
		"H_Bandanna_sand",
		"G_B_Diving",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_RebreatherB",
		"H_Bandanna_sand",
		"G_B_Diving",
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

class SOR_USMC_ReconJTACScuba_D : SOR_USMC_ReconLeaderScuba_D
{
	icon =  "iconMan";
	backpack = "USMC_SOR_Viper_Scuba_M";
	displayName = "(I) [D] Viper JTAC [Scuba]";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_ReconRiflemanScuba_D : SOR_USMC_ReconLeaderScuba_D
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Rifleman [Scuba]";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
};

class SOR_USMC_MarksmanScuba_D : SOR_USMC_ReconLeaderScuba_D
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Marksman [Scuba]";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP_VIPER_D","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
};

    ////////////////////Snipers////////////////////

/*
class SOR_USMC_Sniper_D : B_sniper_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Sniper";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	backpack = "USMC_SOR_Sniper_Camo_M";
	weapons[] = {"SOR_USMC_WEAP_M24","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M24","SOR_USMC_WEAP_P07_VIPER","Throw","Put","Laserdesignator"};
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
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",
		V_P09,
		"Laserbatteries"
	};
	linkedItems[] =
	{
	    "V_TacChestrig_oli_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
	    "V_TacChestrig_oli_F",
		Recon_Equipment
	};
};

class SOR_USMC_Spotter_D : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Spotter";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	backpack = "USMC_SOR_Spotter_Radio_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_GRIP","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_GRIP","SOR_USMC_WEAP_P07_VIPER","Throw","Put","ACE_Vector"};
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
		V_Recon_Mags,
		V_P09
	};
	respawnMagazines[] =
	{
		V_Recon_Mags,
		V_P09
	};
	linkedItems[] =
	{
		"V_TacChestrig_oli_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_TacChestrig_oli_F",
		Recon_Equipment
	};
};
*/

    ////////////////////Mechanised Crew/Driver/Gunner Engineers////////////////////

class SOR_USMC_MechCrew_D : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) [D] Mech Gunner";
	uniformClass = "rhs_uniform_FROG01_d";
	backpack = "";
	weapons[] = {"hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"hgun_P07_F","Throw", "Put"};
	Items[] =
	{
		Standard_Meds,
		"ACE_MapTools",
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Standard_Meds,
		"ACE_MapTools",
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
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_USMC_MechOperator_D : SOR_USMC_MechCrew_D
{
	displayName = "(M) [D] Mech Loader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_CREW","hgun_P07_F","Throw","Put","Laserdesignator"};
	magazines[] =
	{
		V_P09,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShell",
		"SmokeShell",
		"Laserbatteries",
	};
	respawnMagazines[] =
	{
		V_P09,
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShell",
		"SmokeShell",
		"Laserbatteries",
	};
	linkedItems[] =
	{
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_crewman",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_USMC_MechCrewCommander_D : SOR_USMC_MechOperator_D
{
	displayName = "(M) [D] Mech Crew Commander";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	cost = 100000;
};

class SOR_USMC_MechDriver_D : SOR_USMC_MechCrew_D
{
	displayName = "(M) [D] Mech Driver";
	backpack = "USMC_SOR_Repair_Pack_D_M";
};

    ////////////////////HMG Team////////////////////
/*
class SOR_USMC_HMGActual_D : SOR_USMC_Actual_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Actual";
	icon =  "iconManLeader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
};

class SOR_USMC_HMGGunner_D : SOR_USMC_Rifleman_LMG_AMMO_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};

class SOR_USMC_HMGCarrier_D : SOR_USMC_Rifleman_LMG_AMMO_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
};

class SOR_USMC_HMGRFL_D : SOR_USMC_Grenadier_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
};

    ////////////////////Mortar Team////////////////////

class SOR_USMC_MORActual_D : SOR_USMC_Actual_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Actual";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
};

class SOR_USMC_MORGunner_D : SOR_USMC_Rifleman_LMG_AMMO_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Gunner";
	backpack = "rhs_M252_Gun_Bag";
};

class SOR_USMC_MORCarrier_D : SOR_USMC_Rifleman_LMG_AMMO_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Carrier";
	backpack = "rhs_M252_Bipod_Bag";
};

class SOR_USMC_MORRFL_D : SOR_USMC_Grenadier_D
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
};
*/
    ////////////////////Blacksmith////////////////////

class SOR_USMC_TL_Engineer_D : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(S) [D] Blacksmith TL";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
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
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	respawnMagazines[] =
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	linkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_ach_bare_tan_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_ach_bare_tan_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

class SOR_USMC_Engineer_D : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(S) [D] Blacksmith";
	backpack = "USMC_SOR_Repair_Pack_M";
	weapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
	respawnWeapons[] = {"SOR_USMC_WEAP_MK18_BLACKSMITH","Throw","Put"};
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
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	respawnMagazines[] =
	{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
	    "30Rnd_556x45_Stanag"
	};
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_ach_bare_tan_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"rhsusf_ach_bare_tan_headset_ess",
		"rhs_googles_black",
		Standard_Equipment
	};
};

    ////////////////////Forward Air Controller/Joint Terminal Acttack Controller////////////////////

class SOR_USMC_FAC_D : B_recon_JTAC_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] USAF Forward Air Controller";
	backpack = "USMC_SOR_FAC_Pack_ILBE";
	uniformClass = "U_I_G_Story_Protagonist_F";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_FAC", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"SOR_USMC_WEAP_M4A1_BLOCK2_FAC", "hgun_P07_F","Throw", "Put","Laserdesignator"};
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
		"V_PlateCarrier2_rgr",
		"H_HelmetB_light_snakeskin",
		"rhs_googles_black",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_PlateCarrier2_rgr",
		"H_HelmetB_light_snakeskin",
		"rhs_googles_black",
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

