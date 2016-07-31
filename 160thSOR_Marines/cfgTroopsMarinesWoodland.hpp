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
class eventhandler;

/////////////////////////////
//SOR Marines Faction Units//
/////////////////////////////

//Zeus unit
class SOR_ZeusCommand_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] ZEUS";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
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

class SOR_Actual_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Squad Actual";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Godfather";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
	displayName = "(M) [W] Tombstone";
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
	displayName = "(A) [W] Jupiter";
    uniformClass = "nomex_olive";
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] RTO";
	backpack = "USMC_SOR_RTO_Pack_ILBE";
	weapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw","Put","Laserdesignator"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Teamleader";
	accuracy = 3.5;
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	vehicleclass = "SOR_USMC_Infantry";
	displayName = "(I) [W] Combat Medic";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "USMC_SOR_Medic_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","Throw", "Put"};
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] AutoRifleman M27IAR";
	backpack = "USMC_SOR_SPAR16S_Pack_M";
	weapons[] = {"160_rhs_weap_m27iar_grip_eotech", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_grip_eotech", "hgun_P07_F","Throw", "Put"};
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
        V_Mags,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	respawnMagazines[] =
	{
        V_Mags,
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_M240_M : B_HeavyGunner_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] AutoRifleman M240G";
	backpack = "USMC_SOR_M240_Pack_M";
	weapons[] = {"160_rhs_weap_m240G_acog","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_m240G_acog","hgun_P07_F","Throw","Put"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Grenadier";
	backpack = "USMC_SOR_GD_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw", "Put"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Rifleman M240G Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_M240_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	displayName = "(I) [W] Rifleman M27IAR Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_SPAR16S_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
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
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(I) [W] Rifleman AT";
	backpack = "USMC_SOR_RFLAT_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F","Throw", "Put"};
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
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Heli Pilot & Co-Pilot////////////////////

class SOR_HeliPilot_M : B_Helipilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_olive";
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

class SOR_HeliCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_olive";
	displayName = "(A) [W] Heli Crew";
	backpack = "USMC_SOR_Repair_Pack_M";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_rhs_weap_mk18_eotech","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_eotech","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
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

class SOR_JetPilot_M : B_Pilot_F
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

class SOR_MEVPilot_M : SOR_HeliPilot_M
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] MEV Pilot";
	linkedItems[] =
	{
		"rhsusf_spc",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
};

class SOR_ParaJumper_M : B_recon_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [W] USAF Pararescue Jumper";
	backpack = "USMC_SOR_PJMedicPack_M";
	uniformClass = "rhs_uniform_g3_mc";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_rhs_weap_m4a1_blockII_grip_KAC_eotech", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m4a1_blockII_grip_KAC_eotech", "hgun_P07_F","Throw", "Put","Laserdesignator"};
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
		"rhs_googles_black",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_mc_cover_pelt_cam",
		"rhs_googles_black",
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
	uniformClass = "rhs_uniform_g3_rgr";
	displayName = "(I) [W] Viper Lead";
	accuracy = 3.5;
//	cost = 500000;
	camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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
		"rhsusf_spc_patchless",
		"rhsusf_opscore_fg_pelt",
		"G_Balaclava_TI_G_tna_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_patchless",
		"rhsusf_opscore_fg_pelt",
		"G_Balaclava_TI_G_tna_F",
		Recon_Equipment
	};
    headgearList[] =
    {
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
	backpack = "USMC_SOR_JTAC_Pack_ILBE";
	displayName = "(I) [W] Viper JTAC";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
    headgearList[] =
    {
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
	displayName = "(I) [W] Viper Rifleman";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
    headgearList[] =
    {
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
	displayName = "(I) [W] Viper Marksman";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
    headgearList[] =
    {
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
	backpack = "USMC_SOR_Viper_Scuba_M";
	displayName = "(I) [W] Viper Lead [Scuba]";
	accuracy = 3.5;
//	cost = 500000;
    camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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

class SOR_ReconJTACScuba_M : SOR_ReconLeaderScuba_M
{
	icon =  "iconMan";
	backpack = "USMC_SOR_Viper_Scuba_M";
	displayName = "(I) [W] Viper JTAC [Scuba]";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
};

class SOR_ReconRiflemanScuba_M : SOR_ReconLeaderScuba_M
{
	icon =  "iconMan";
	displayName = "(I) [W] Viper Rifleman [Scuba]";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
};

class SOR_MarksmanScuba_M : SOR_ReconLeaderScuba_M
{
	icon =  "iconMan";
	displayName = "(I) [W] Viper Marksman [Scuba]";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_wd_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
};

    ////////////////////Snipers////////////////////

/*
class SOR_Sniper_M : B_sniper_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Sniper";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_T_FullGhillie_tna_F";
	backpack = "USMC_SOR_Sniper_Camo_M";
	weapons[] = {"160_rhs_weap_m24sws_blk_premier","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m24sws_blk_premier","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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

class SOR_Spotter_M : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Spotter";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_T_FullGhillie_tna_F";
	backpack = "USMC_SOR_Spotter_Radio_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
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

class SOR_MechCrew_M : B_crew_F
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
	displayName = "(M) [W] Mech Loader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_eotech","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_eotech","hgun_P07_F","Throw","Put","Laserdesignator"};
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
	displayName = "(M) [W] Mech Crew Commander";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	cost = 100000;
};

class SOR_MechDriver_M : SOR_MechCrew_M
{
	displayName = "(M) [W] Mech Driver";
	backpack = "USMC_SOR_Repair_Pack_M";
};

    ////////////////////HMG Team////////////////////

class SOR_HMGActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [W] HMG Actual";
	icon =  "iconManLeader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
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
	displayName = "(S) [W] HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	displayName = "(S) [W] HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	displayName = "(S) [W] HMG Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	displayName = "(S) [W] Mortar Actual";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_grass", 1,
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
	displayName = "(S) [W] Mortar Gunner";
	backpack = "rhs_M252_Gun_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	displayName = "(S) [W] Mortar Carrier";
	backpack = "rhs_M252_Bipod_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
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
	displayName = "(S) [W] Mortar Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_snakeskin", 1,
        "H_HelmetB", 1,
        "H_HelmetB_grass", 1,
        "H_HelmetB_snakeskin", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Blacksmith////////////////////

class SOR_TL_Engineer_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(S) [W] Blacksmith TL";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
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
	headgearList[] =
    {
        "rhsusf_ach_bare", 1,
        "rhsusf_ach_bare_ess", 1,
        "rhsusf_ach_bare_headset", 1,
        "rhsusf_ach_bare_headset_ess", 1,
        "rhsusf_ach_bare_wood", 1,
        "rhsusf_ach_bare_wood_ess", 1,
        "rhsusf_ach_bare_wood_headset", 1,
        "rhsusf_ach_bare_wood_headset_ess", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_Engineer_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "(S) [W] Blacksmith";
	backpack = "USMC_SOR_Repair_Pack_M";
	weapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
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
	headgearList[] =
    {
        "rhsusf_ach_bare_ess", 1,
        "rhsusf_ach_bare_headset", 1,
        "rhsusf_ach_bare_headset_ess", 1,
        "rhsusf_ach_bare_wood", 1,
        "rhsusf_ach_bare_wood_ess", 1,
        "rhsusf_ach_bare_wood_headset", 1,
        "rhsusf_ach_bare_wood_headset_ess", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                   //DESERT//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Zeus unit
class SOR_ZeusCommand_D_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] ZEUS";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
		"H_HelmetSpecB_sand",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetSpecB_sand",
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
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
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

class SOR_Actual_D_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Squad Actual";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
		"H_HelmetSpecB_sand",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetSpecB_sand",
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
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Infantry Commander////////////////////

class SOR_Commander_D_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Godfather";
	accuracy = 3.5;
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put", "Laserdesignator"};
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
		"H_HelmetB_light_sand",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetB_light_sand",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
};

    ////////////////////Mech Commander////////////////////

class SOR_MechCommand_D_M : SOR_Commander_D_M
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "(M) [D] Tombstone";
	uniformClass = "rhs_uniform_FROG01_d";
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

class SOR_AirCommand_D_M : SOR_Commander_D_M
{
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] Jupiter";
    uniformClass = "nomex_tan";
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

class SOR_RTO_D_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] RTO";
	backpack = "USMC_SOR_RTO_Pack_ILBE";
	weapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw","Put","Laserdesignator"};
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
		"H_HelmetB_light_sand",
		"G_Balaclava_TI_G_blk_F",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetB_light_sand",
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
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Teamleader////////////////////

class SOR_Teamleader_D_M : B_Soldier_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Teamleader";
	accuracy = 3.5;
	backpack = "USMC_SOR_RFLAT_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F","Throw","Put","ACE_Vector"};
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
		"H_HelmetSpecB_sand",
		"ItemGPS",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_squadleader",
		"H_HelmetSpecB_sand",
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
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Combat Medics////////////////////

class SOR_Medic_D_M : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	displayName = "(I) [D] Combat Medic";
	uniformClass = "rhs_uniform_FROG01_d";
	backpack = "USMC_SOR_Medic_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","Throw", "Put"};
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

class SOR_SPAR16S_D_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] AutoRifleman M27IAR";
	backpack = "USMC_SOR_SPAR16S_Pack_D_M";
	weapons[] = {"160_rhs_weap_m27iar_grip_eotech", "hgun_P07_F", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_grip_eotech", "hgun_P07_F","Throw", "Put"};
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
        V_Mags,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	respawnMagazines[] =
	{
		V_Mags,
		"SmokeShell",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellGreen"
	};
	linkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"H_HelmetSpecB_sand",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg" ,
		"H_HelmetSpecB_sand",
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
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_M240_D_M : B_HeavyGunner_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] AutoRifleman M240G";
	backpack = "USMC_SOR_M240_Pack_D_M";
	weapons[] = {"160_rhs_weap_m240G_acog","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_m240G_acog","hgun_P07_F","Throw","Put"};
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
		"H_HelmetSpecB_sand",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_mg",
		"H_HelmetSpecB_sand",
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
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Grenadier////////////////////

class SOR_Grenadier_D_M : B_Soldier_GL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Grenadier";
	backpack = "USMC_SOR_GD_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_m320_acog","hgun_P07_F","Throw", "Put"};
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
		"H_HelmetSpecB_sand",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_teamleader",
		"H_HelmetSpecB_sand",
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
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Riflemen////////////////////

class SOR_Rifleman_D_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Rifleman M240G Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_M240_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
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
		"H_HelmetSpecB_sand",
		"G_Balaclava_TI_G_blk_F",
		Standard_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_rifleman",
		"H_HelmetSpecB_sand",
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
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_Rifleman_ammo_D_M : SOR_Rifleman_D_M
{
	displayName = "(I) [D] Rifleman M27IAR Ammo Bearer";
	backpack = "USMC_SOR_Rifleman_SPAR16S_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog","hgun_P07_F","Throw","Put"};
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
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_RiflemanAT_D_M : B_soldier_AT_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Infantry";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(I) [D] Rifleman AT";
	backpack = "USMC_SOR_RFLAT_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog", "hgun_P07_F","launch_NLAW_F","Throw", "Put"};
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
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Heli Pilot & Co-Pilot////////////////////

class SOR_HeliPilot_D_M : B_Helipilot_F
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

class SOR_HeliCrew_D_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "nomex_tan";
	displayName = "(A) [D] Heli Crew";
	backpack = "USMC_SOR_Repair_Pack_D_M";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_rhs_weap_mk18_eotech","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_eotech","hgun_ACPC2_F","Throw", "Put","Laserdesignator"};
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

class SOR_JetPilot_D_M : B_Pilot_F
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

class SOR_MEVPilot_D_M : SOR_HeliPilot_D_M
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] MEV Pilot";
	linkedItems[] =
	{
		"rhsusf_spc",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc",
		"H_CrewHelmetHeli_O",
		"ItemGPS",
		Airborne_Equipment
	};
};

class SOR_ParaJumper_D_M : B_recon_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "(A) [D] USAF Pararescue Jumper";
	backpack = "USMC_SOR_PJMedicPack_D_M";
	uniformClass = "rhs_uniform_g3_mc";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair
	weapons[] = {"160_rhs_weap_m4a1_blockII_grip_KAC_eotech", "hgun_P07_F","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m4a1_blockII_grip_KAC_eotech", "hgun_P07_F","Throw", "Put","Laserdesignator"};
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
		"rhs_googles_black",
		Airborne_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spcs_ocp_rifleman",
		"rhsusf_opscore_mc_cover_pelt_cam",
		"rhs_googles_black",
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

class SOR_ReconLeader_D_M : B_recon_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "rhs_uniform_g3_tan";
	displayName = "(I) [D] Viper Lead";
	accuracy = 3.5;
//	cost = 500000;
	camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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
		"rhsusf_spc_patchless",
		"rhsusf_opscore_ut_pelt",
		"G_Balaclava_TI_G_blk_F",
		Recon_Equipment
	};
	respawnLinkedItems[] =
	{
		"rhsusf_spc_patchless",
		"rhsusf_opscore_ut_pelt",
		"G_Balaclava_TI_G_blk_F",
		Recon_Equipment
	};
    headgearList[] =
    {
        "rhsusf_opscore_coy_cover", 1,
        "rhsusf_opscore_coy_cover_pelt", 1,
        "rhsusf_opscore_ut", 1,
        "rhsusf_opscore_ut_pelt", 1,
        "rhsusf_opscore_ut_pelt_cam", 1,
        "rhsusf_opscore_ut_pelt_nsw", 1,
        "rhsusf_opscore_ut_pelt_nsw_cam", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
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

class SOR_ReconJTAC_D_M : SOR_ReconLeader_D_M
{
	icon =  "iconMan";
	backpack = "USMC_SOR_JTAC_Pack_ILBE";
	displayName = "(I) [D] Viper JTAC";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
    headgearList[] =
    {
        "rhsusf_opscore_coy_cover", 1,
        "rhsusf_opscore_coy_cover_pelt", 1,
        "rhsusf_opscore_ut", 1,
        "rhsusf_opscore_ut_pelt", 1,
        "rhsusf_opscore_ut_pelt_cam", 1,
        "rhsusf_opscore_ut_pelt_nsw", 1,
        "rhsusf_opscore_ut_pelt_nsw_cam", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_ReconRifleman_D_M : SOR_ReconLeader_D_M
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Rifleman";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
    headgearList[] =
    {
        "rhsusf_opscore_coy_cover", 1,
        "rhsusf_opscore_coy_cover_pelt", 1,
        "rhsusf_opscore_ut", 1,
        "rhsusf_opscore_ut_pelt", 1,
        "rhsusf_opscore_ut_pelt_cam", 1,
        "rhsusf_opscore_ut_pelt_nsw", 1,
        "rhsusf_opscore_ut_pelt_nsw_cam", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_Marksman_D_M : SOR_ReconLeader_D_M
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Marksman";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
    headgearList[] =
    {
        "rhsusf_opscore_coy_cover", 1,
        "rhsusf_opscore_coy_cover_pelt", 1,
        "rhsusf_opscore_ut", 1,
        "rhsusf_opscore_ut_pelt", 1,
        "rhsusf_opscore_ut_pelt_cam", 1,
        "rhsusf_opscore_ut_pelt_nsw", 1,
        "rhsusf_opscore_ut_pelt_nsw_cam", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Viper Recon Scuba////////////////////

class SOR_ReconLeaderScuba_D_M : B_diver_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	uniformClass = "U_B_survival_uniform";
	backpack = "USMC_SOR_Viper_Scuba_D_M";
	displayName = "(I) [D] Viper Lead [Scuba]";
	accuracy = 3.5;
//	cost = 500000;
    camouflage = 0.7;
//	threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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

class SOR_ReconJTACScuba_D_M : SOR_ReconLeaderScuba_D_M
{
	icon =  "iconMan";
	backpack = "USMC_SOR_Viper_Scuba_D_M";
	displayName = "(I) [D] Viper JTAC [Scuba]";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
};

class SOR_ReconRiflemanScuba_D_M : SOR_ReconLeaderScuba_D_M
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Rifleman [Scuba]";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
};

class SOR_MarksmanScuba_D_M : SOR_ReconLeaderScuba_D_M
{
	icon =  "iconMan";
	displayName = "(I) [D] Viper Marksman [Scuba]";
	weapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_KAC_d_acog","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
};

    ////////////////////Snipers////////////////////

/*
class SOR_Sniper_D_M : B_sniper_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Sniper";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	backpack = "USMC_SOR_Sniper_Camo_D_M";
	weapons[] = {"160_rhs_weap_m24sws_blk_premier","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m24sws_blk_premier","160_hgun_P07_F_viper","Throw","Put","Laserdesignator"};
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

class SOR_Spotter_D_M : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	displayName = "(I) Spotter";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	backpack = "USMC_SOR_Spotter_Radio_D_M";
	weapons[] = {"160_rhs_weap_mk18_grip_bk_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_mk18_grip_bk_acog","160_hgun_P07_F_viper","Throw","Put","ACE_Vector"};
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

class SOR_MechCrew_D_M : B_crew_F
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

class SOR_MechOperator_D_M : SOR_MechCrew_D_M
{
	displayName = "(M) [D] Mech Loader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_eotech","hgun_P07_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_mk18_eotech","hgun_P07_F","Throw","Put","Laserdesignator"};
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

class SOR_MechCrewCommander_D_M : SOR_MechOperator_D_M
{
	displayName = "(M) [D] Mech Crew Commander";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	cost = 100000;
};

class SOR_MechDriver_D_M : SOR_MechCrew_D_M
{
	displayName = "(M) [D] Mech Driver";
	backpack = "USMC_SOR_Repair_Pack_D_M";
};

    ////////////////////HMG Team////////////////////

class SOR_HMGActual_D_M : SOR_Actual_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Actual";
	icon =  "iconManLeader";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_HMGGunner_D_M : SOR_Rifleman_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_HMGCarrier_D_M : SOR_Rifleman_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_HMGRFL_D_M : SOR_Grenadier_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] HMG Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_D_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Mortar Team////////////////////

class SOR_MORActual_D_M : SOR_Actual_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Actual";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB_light", 1,
        "H_HelmetB_light_black", 1,
        "H_HelmetB_light_desert", 1,
        "H_HelmetB_light_sand", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_MORGunner_D_M : SOR_Rifleman_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Gunner";
	backpack = "rhs_M252_Gun_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_MORCarrier_D_M : SOR_Rifleman_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Carrier";
	backpack = "rhs_M252_Bipod_Bag";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_MORRFL_D_M : SOR_Grenadier_D_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "(S) [D] Mortar Rifleman M320";
	backpack = "USMC_SOR_GD_Pack_D_M";
	headgearList[] =
    {
        "H_HelmetSpecB", 1,
        "H_HelmetSpecB_blk", 1,
        "H_HelmetSpecB_paint2", 1,
        "H_HelmetSpecB_paint1", 1,
        "H_HelmetSpecB_sand", 1,
        "H_HelmetB", 1,
        "H_HelmetB_desert", 1,
        "H_HelmetB_sand", 1,
        "H_HelmetB_camo", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

    ////////////////////Blacksmith////////////////////

class SOR_TL_Engineer_D_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(S) [D] Blacksmith TL";
	backpack = "USMC_SOR_Mech_Radio_ILBE";
	weapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
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
	headgearList[] =
    {
        "rhsusf_ach_bare_des", 1,
        "rhsusf_ach_bare_des_ess", 1,
        "rhsusf_ach_bare_des_headset", 1,
        "rhsusf_ach_bare_des_headset_ess", 1,
        "rhsusf_ach_bare_semi", 1,
        "rhsusf_ach_bare_semi_ess", 1,
        "rhsusf_ach_bare_semi_headset", 1,
        "rhsusf_ach_bare_semi_headset_ess", 1,
        "rhsusf_ach_bare_tan", 1,
        "rhsusf_ach_bare_tan_ess", 1,
        "rhsusf_ach_bare_tan_headset", 1,
        "rhsusf_ach_bare_tan_headset_ess", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

class SOR_Engineer_D_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_d";
	displayName = "(S) [D] Blacksmith";
	backpack = "USMC_SOR_Repair_Pack_D_M";
	weapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_mk18_cco","Throw","Put"};
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
	headgearList[] =
    {
        "rhsusf_ach_bare_des", 1,
        "rhsusf_ach_bare_des_ess", 1,
        "rhsusf_ach_bare_des_headset", 1,
        "rhsusf_ach_bare_des_headset_ess", 1,
        "rhsusf_ach_bare_semi", 1,
        "rhsusf_ach_bare_semi_ess", 1,
        "rhsusf_ach_bare_semi_headset", 1,
        "rhsusf_ach_bare_semi_headset_ess", 1,
        "rhsusf_ach_bare_tan", 1,
        "rhsusf_ach_bare_tan_ess", 1,
        "rhsusf_ach_bare_tan_headset", 1,
        "rhsusf_ach_bare_tan_headset_ess", 1,
    };
    class EventHandlers
    {
         init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
    };
};

