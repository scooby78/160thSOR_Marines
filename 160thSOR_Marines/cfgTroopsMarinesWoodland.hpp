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
class B_diver_TL_F;
class B_diver_F;
class eventhandler;

/////////////////////////////
//SOR Marines Faction Units//
/////////////////////////////

    ////////////////////Squad Actual////////////////////

class SOR_Actual_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Squad Actual";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
		"H_HelmetSpecB_paint1",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetSpecB_paint1",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_sand", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Infantry Commander////////////////////

class SOR_Commander_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Godfather";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
		"H_HelmetB_light_grass",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetB_light_grass",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

    ////////////////////Mech Commander////////////////////

class SOR_MechCommand_M : SOR_Commander_M
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) Tombstone";
	uniformClass = "rhs_uniform_FROG01_wd";
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"H_HelmetCrew_B",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
};

    ////////////////////Air Commander////////////////////

class SOR_AirCommand_M : SOR_Commander_M
{
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) Jupiter";
    uniformClass = "U_B_HeliPilotCoveralls";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
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

class SOR_RTO_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) RTO";
	backpack = "USMC_SOR_RTO_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_GL_blk_F_specter","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_GL_blk_F_specter","hgun_P07_F","Throw","Put","Laserdesignator"};
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
		"H_HelmetB_light_grass",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetB_light_grass",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_sand", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Teamleader////////////////////

class SOR_Teamleader_M : B_Soldier_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Teamleader";
	accuracy = 3.5;
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
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
		"H_HelmetSpecB_paint1",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetSpecB_paint1",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Combat Medics////////////////////

class SOR_Medic_M : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	displayName = "(I) Combat Medic";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "USMC_SOR_Medic_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F","Throw", "Put"};
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

    ////////////////////Auto Rifleman////////////////////

class SOR_SPAR16S_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) AutoRifleman SPAR16S";
	backpack = "USMC_SOR_SPAR16S_Pack_M";
	weapons[] = {"160_arifle_SPAR_02_blk_F_specter", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_arifle_SPAR_02_blk_F_specter", "hgun_P07_F","Throw", "Put"};
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
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	respawnMagazines[] =
	{
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_M240_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) AutoRifleman M240G";
	backpack = "USMC_SOR_M240_Pack_M";
	weapons[] = {"160_rhs_weap_m240G_specter","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_m240G_specter","hgun_P07_F","Throw","Put"};
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
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg",
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Grenadier////////////////////

class SOR_Grenadier_M : B_Soldier_GL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Grenadier";
	backpack = "USMC_SOR_GD_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_GL_blk_F_specter","hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"160_arifle_SPAR_01_GL_blk_F_specter","hgun_P07_F","Throw", "Put"};
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
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_teamleader",
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Riflemen////////////////////

class SOR_Rifleman_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Rifleman M240G Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_M240_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter","hgun_P07_F","Throw","Put"};
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
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_Rifleman_ammo_M : SOR_Rifleman_M
{
	displayName = "(I) Rifleman SPAR16S Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_SPAR16S_Pack_M";
	weapons[] = {"160_arifle_SPAR_03_blk_F_specter","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_arifle_SPAR_03_blk_F_specter","hgun_P07_F","Throw","Put"};
	magazines[] =
	{
		V_P09,
		V_Mags_762
	};
	respawnMagazines[] =
	{
		V_P09,
		V_Mags_762
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_RiflemanAT_M : B_soldier_AT_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) Rifleman AT";
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F","launch_NLAW_F", "Throw", "Put"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter", "hgun_P07_F","launch_NLAW_F","Throw", "Put"};
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
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"H_HelmetSpecB_paint1",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Heli Pilot & Co-Pilot////////////////////

class SOR_HeliPilot_M : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "U_B_HeliPilotCoveralls";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	displayName = "(A) Heli/VTOL Pilot";
	backpack = "USMC_SOR_Mech_Radio_M";
	weapons[] = {"160_SMG_05_F_aco","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_SMG_05_F_aco","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
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
		V_CC2,
		"30Rnd_9x21_Mag_SMG_02",
		"30Rnd_9x21_Mag_SMG_02",
		"30Rnd_9x21_Mag_SMG_02",
		"30Rnd_9x21_Mag_SMG_02",
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		V_CC2,
		"30Rnd_9x21_Mag_SMG_02",
		"30Rnd_9x21_Mag_SMG_02",
		"30Rnd_9x21_Mag_SMG_02",
		"30Rnd_9x21_Mag_SMG_02",
		"Laserbatteries",
		"SmokeShellGreen",
		"SmokeShell"
	};
	linkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_B",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_marksman",
		"H_PilotHelmetHeli_B",
		Airborne_Equipment
	};
};

    ////////////////////Heli Crew Engineers////////////////////

class SOR_HeliCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "U_B_HeliPilotCoveralls";
	displayName = "(A) Heli Crew";
	backpack = "USMC_SOR_Repair_Pack_M";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
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

class SOR_JetPilot_M : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) Jet Pilot";
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

class SOR_MEVPilot_M : SOR_HeliPilot_M
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) MEV Pilot";
	linkedItems[] =
	{
		"rhsusf_spc_light",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_light",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
};

class SOR_ParaJumper_M : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) Para Jumper";
	backpack = "USMC_SOR_PJMedicPack_M";
	uniformClass = "rhs_uniform_g3_mc";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_arifle_SPAR_01_snd_F_specter", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_snd_F_specter", "hgun_P07_F","Throw", "Put","Laserdesignator"};
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
	headgearList[] =
    {
        "rhsusf_opscore_bk", 1,
        "rhsusf_opscore_bk_pelt", 1,
        "rhsusf_opscore_coy_cover", 1,
        "rhsusf_opscore_coy_cover_pelt", 1,
        "rhsusf_opscore_mc_cover", 1,
        "rhsusf_opscore_mc_cover_pelt", 1,
        "rhsusf_opscore_mc_cover_pelt_nsw", 1,
        "rhsusf_opscore_mc_cover_pelt_cam", 1,
        "rhsusf_opscore_mc", 1,
        "rhsusf_opscore_mc_pelt", 1,
        "rhsusf_opscore_mc_pelt_nsw", 1,
        "rhsusf_opscore_paint", 1,
        "rhsusf_opscore_paint_pelt", 1,
        "rhsusf_opscore_paint_pelt_nsw", 1,
        "rhsusf_opscore_paint_pelt_nsw_cam", 1,
        "rhsusf_opscore_ut", 1,
        "rhsusf_opscore_ut_pelt", 1,
        "rhsusf_opscore_ut_pelt_cam", 1,
        "rhsusf_opscore_ut_pelt_nsw", 1,
        "rhsusf_opscore_ut_pelt_nsw_cam", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
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

class SOR_ReconLeader_M : B_recon_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "U_B_CTRG_Soldier_3_F";
	displayName = "(I) Viper Lead";
	accuracy = 3.5;
//	cost = 500000;
	camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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
		"rhsusf_opscore_fg_pelt",
		"G_Balaclava_TI_G_tna_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"rhsusf_opscore_fg_pelt",
		"G_Balaclava_TI_G_tna_F",
		Recon_Equipment
	};
    headgearList[] =
    {
        "rhsusf_ach_bare", 1,
        "rhsusf_ach_bare_headset", 1,
        "rhsusf_ach_bare_semi", 1,
        "rhsusf_ach_bare_semi_headset", 1,
        "rhsusf_ach_bare_wood", 1,
        "rhsusf_ach_bare_wood_headset", 1,
        "rhsusf_opscore_fg", 1,
        "rhsusf_opscore_fg_pelt", 1,
        "rhsusf_opscore_fg_pelt_cam", 1,
        "rhsusf_opscore_fg_pelt_nsw", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
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
	backpack = "USMC_SOR_JTAC_Pack_M";
	displayName = "(I) Viper JTAC";
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
    headgearList[] =
    {
        "rhsusf_ach_bare", 1,
        "rhsusf_ach_bare_headset", 1,
        "rhsusf_ach_bare_semi", 1,
        "rhsusf_ach_bare_semi_headset", 1,
        "rhsusf_ach_bare_wood", 1,
        "rhsusf_ach_bare_wood_headset", 1,
        "rhsusf_opscore_fg", 1,
        "rhsusf_opscore_fg_pelt", 1,
        "rhsusf_opscore_fg_pelt_cam", 1,
        "rhsusf_opscore_fg_pelt_nsw", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_ReconRifleman_M : SOR_ReconLeader_M
{
	icon =  "iconMan";
	displayName = "(I) Viper Rifleman";
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
    headgearList[] =
    {
        "rhsusf_ach_bare", 1,
        "rhsusf_ach_bare_headset", 1,
        "rhsusf_ach_bare_semi", 1,
        "rhsusf_ach_bare_semi_headset", 1,
        "rhsusf_ach_bare_wood", 1,
        "rhsusf_ach_bare_wood_headset", 1,
        "rhsusf_opscore_fg", 1,
        "rhsusf_opscore_fg_pelt", 1,
        "rhsusf_opscore_fg_pelt_cam", 1,
        "rhsusf_opscore_fg_pelt_nsw", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_Marksman_M : SOR_ReconLeader_M
{
	icon =  "iconMan";
	displayName = "(I) Viper Marksman";
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
    headgearList[] =
    {
        "rhsusf_ach_bare", 1,
        "rhsusf_ach_bare_headset", 1,
        "rhsusf_ach_bare_semi", 1,
        "rhsusf_ach_bare_semi_headset", 1,
        "rhsusf_ach_bare_wood", 1,
        "rhsusf_ach_bare_wood_headset", 1,
        "rhsusf_opscore_fg", 1,
        "rhsusf_opscore_fg_pelt", 1,
        "rhsusf_opscore_fg_pelt_cam", 1,
        "rhsusf_opscore_fg_pelt_nsw", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Viper Recon Scuba////////////////////

class SOR_ReconLeaderScuba_M : B_diver_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "U_B_survival_uniform";
	backpack = "USMC_SOR_B_Carryall_oli";
	displayName = "(I) Viper Lead [Scuba]";
	accuracy = 3.5;
//	cost = 500000;
    camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Meds,
		"ACE_NVG_Wide"
	};
	RespawnItems[] =
	{
		Recon_Meds,
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
		"H_Bandanna_khk_hs",
		"G_B_Diving",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"V_RebreatherB",
		"H_Bandanna_khk_hs",
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

class SOR_ReconJTACScuba_M : SOR_ReconLeaderScuba_M
{
	icon =  "iconMan";
	backpack = "USMC_SOR_B_Carryall_oli";
	displayName = "(I) Viper JTAC [Scuba]";
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
};

class SOR_ReconRiflemanScuba_M : SOR_ReconLeaderScuba_M
{
	icon =  "iconMan";
	displayName = "(I) Viper Rifleman [Scuba]";
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
};

class SOR_MarksmanScuba_M : SOR_ReconLeaderScuba_M
{
	icon =  "iconMan";
	displayName = "(I) Viper Marksman [Scuba]";
	weapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_khk_F_specter_viper","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
};

    ////////////////////Snipers////////////////////

class SOR_Sniper_M : B_sniper_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Sniper";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_T_FullGhillie_tna_F";
	backpack = "USMC_SOR_Sniper_Camo";
	weapons[] = {"160_srifle_DMR_02_F_premier","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_srifle_DMR_02_F_premier","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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
		"ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag",
		V_P09,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		"ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag",
		"ACE_10Rnd_338_API526_Mag",
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

class SOR_Spotter_M : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Spotter";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_T_FullGhillie_tna_F";
	backpack = "USMC_SOR_Spotter_Radio";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
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

    ////////////////////Mechanised Crew/Driver/Gunner Engineers////////////////////

class SOR_MechCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) Mechanised Gunner";
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

class SOR_MechOperator_M : SOR_MechCrew_M
{
	displayName = "(M) Mechanised Operator";
	backpack = "USMC_SOR_Mech_Radio_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter","hgun_P07_F","Throw","Put","Laserdesignator"};
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

class SOR_MechCrewCommander_M : SOR_MechOperator_M
{
	displayName = "(M) Mechanised Crew Commander";
	backpack = "USMC_SOR_Mech_Radio_M";
	cost = 100000;
};

class SOR_MechDriver_M : SOR_MechCrew_M
{
	displayName = "(M) Mechanised Driver";
	backpack = "USMC_SOR_Repair_Pack_M";
};

    ////////////////////HMG Team////////////////////

class SOR_HMGActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Actual";
	icon =  "iconManLeader";
	backpack = "USMC_SOR_Mech_Radio_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_sand", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_HMGGunner_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_HMGCarrier_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_HMGRFL_M : SOR_Grenadier_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) HMG Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Mortar Team////////////////////

class SOR_MORActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Actual";
	backpack = "USMC_SOR_Mech_Radio_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_grass", 1,
        "H_HelmetB_light_sand", 1,
        "H_HelmetB_light_snakeskin", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_MORGunner_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Gunner";
	backpack = "B_Mortar_01_weapon_F";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_MORCarrier_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Carrier";
	backpack = "B_Mortar_01_support_F";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_MORRFL_M : SOR_Grenadier_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) Mortar Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Blacksmith////////////////////

class SOR_Engineer_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(S) Blacksmith";
	backpack = "USMC_SOR_Repair_Pack_M";
	weapons[] = {"160_arifle_SPAR_01_blk_F_specter","Throw","Put"};
	respawnWeapons[] = {"160_arifle_SPAR_01_blk_F_specter","Throw","Put"};
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
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};
