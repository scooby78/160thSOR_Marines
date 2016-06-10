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
	displayName = "Squad Actual";
	accuracy = 3.5;
	backpack = "SOR_Mech_Radio_M";
	weapons[] = {"160_rhs_weap_m16a4_grip_acog", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m16a4_grip_acog", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		SL_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		SL_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	linkedItems[] = 
	{	
		"rhsusf_spc_squadleader",
//		"rhsusf_mich_helmet_marpatwd_headset", 
		"ItemGPS", 
		"rhs_googles_black",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_squadleader",
//		"rhsusf_mich_helmet_marpatwd_headset", 
		"ItemGPS", 
		"rhs_googles_black",  
		Standard_Equipment
	};
};

//Commander		
class SOR_Commander_M : B_officer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "Commander";
	accuracy = 3.5;
	backpack = "SOR_Mech_Radio_M";
	weapons[] = {"160_rhs_weap_m4a1_grip_acog", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m4a1_grip_acog", "rhsusf_weap_m9", "Throw", "Put", "Laserdesignator"};
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
		Standard_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	respawnMagazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	linkedItems[] = 
	{	
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"ItemGPS", 
		"rhs_googles_black",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"ItemGPS", 
		"rhs_googles_black",  
		Standard_Equipment
	};
};

//Mechanised Commander 
class SOR_MechCommand_M : SOR_Commander_M
{
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "Mechanised Commander";
	uniformClass = "rhs_uniform_FROG01_wd";
	linkedItems[] = 
	{	
		"rhsusf_spc_light",
		"rhsusf_cvc_green_ess", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_light", 
		"rhsusf_cvc_green_ess", 
		"rhs_balaclava",
		"ItemGPS",
		Standard_Equipment
	};
};	

//Air Commander 
class SOR_AirCommand_M : SOR_Commander_M
{
	vehicleclass = "SOR_Infantry_AIR";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	linkedItems[] = 
	{	
		"rhsusf_spc_marksman", 
		"rhsusf_hgu56p",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_marksman", 
		"rhsusf_hgu56p",
		Airborne_Equipment
	};
};	

//Platoon RTO
class SOR_RTO_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "RTO";
	backpack = "SOR_Mech_Radio_M";
	weapons[] = {"160_rhs_weap_m4a1_grip_acog","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m4a1_grip_acog","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};
	RespawnItems[] = {Standard_Meds,SL_Equip};
	magazines[] =
	{
		Standard_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		Standard_Mags,
		Std_Pistol,
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

//Teamleader	
class SOR_Teamleader_M : B_Soldier_TL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	accuracy = 3.5;		
	backpack = "rhsusf_assault_eagleaiii_coy";
	weapons[] = {"160_rhs_weap_m16a4_grip_acog", "rhsusf_weap_m9","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_m16a4_grip_acog", "rhsusf_weap_m9","Throw","Put","ACE_Vector"};
	Items[] = {Standard_Meds,SL_Equip};
	RespawnItems[] = {Standard_Meds,SL_Equip};
	magazines[] = {SL_Mags, Std_Pistol};
	respawnMagazines[] = {SL_Mags,Std_Pistol};
	linkedItems[] = 
	{	
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"ItemGPS", 
		"rhs_googles_black",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_squadleader",
		"rhsusf_mich_helmet_marpatwd_headset",
		"ItemGPS", 
		"rhs_googles_black",  
		Standard_Equipment
	};			
};

//Combat Medics
class SOR_Medic_M : B_medic_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	displayName = "Combat Medic";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "SOR_Medic_Pack_M";
	weapons[] = {"160_rhs_weap_m16a4_grip_acog", "rhsusf_weap_m9", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_m16a4_grip_acog", "rhsusf_weap_m9","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {Standard_Mags,Std_Pistol};
	respawnMagazines[] = {Standard_Mags,Std_Pistol};		
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

// Auto rifleman
class SOR_M249AR_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "AutoRifleman M249";
	backpack = "SOR_M249_Pack_M";
	weapons[] = {"rhs_weap_m249_pip_L_para", "rhsusf_weap_m9", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L_para", "rhsusf_weap_m9","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};		
	magazines[] =
	{
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_m18_green",
		"rhs_200rnd_556x45_M_SAW"
	};
	respawnMagazines[] =
	{
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_m18_green",
		"rhs_200rnd_556x45_M_SAW"
	};
	linkedItems[] = 
	{	
		"rhsusf_spc_mg" ,
		"rhsusf_mich_helmet_marpatwd_headset",
		"rhs_ess_black",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_mg" ,
		"rhsusf_mich_helmet_marpatwd_headset",
		"rhs_ess_black",
		Standard_Equipment
	};
};

class SOR_M240AR_M : B_soldier_AR_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "AutoRifleman M240";
	backpack = "SOR_M240_Pack_M";
	weapons[] = {"rhs_weap_m240G", "rhsusf_weap_m9", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_m240G", "rhsusf_weap_m9","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};	
	magazines[] =
	{
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_m18_green",
		"rhsusf_100Rnd_762x51"
	};
	respawnMagazines[] =
	{
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhsusf_mag_15Rnd_9x19_FMJ",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_mag_m18_green",
		"rhsusf_100Rnd_762x51"
	};
	linkedItems[] = 
	{	
		"rhsusf_spc_mg",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"rhs_ess_black",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_mg",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"rhs_ess_black",  
		Standard_Equipment
	};
};

class SOR_Grenadier_M : B_Soldier_GL_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "SOR_GD_Pack_M";
	weapons[] = {"160_rhs_weap_m16a4_carryhandle_M203_cco","rhsusf_weap_m9","Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_m16a4_carryhandle_M203_cco","rhsusf_weap_m9","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {Standard_Mags,Std_Pistol};
	respawnMagazines[] = {Standard_Mags,Std_Pistol};
	linkedItems[] = 
	{	
		"rhsusf_spc_teamleader",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"rhs_googles_black",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_teamleader", 
		"rhsusf_mich_helmet_marpatwd_headset", 
		"rhs_googles_black",  
		Standard_Equipment
	};
};

class SOR_Rifleman_M : B_Soldier_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "Rifleman AT Ammo Bearer (M249)";
	backpack = "SOR_Rifleman_Pack_M";
	weapons[] = {"160_rhs_weap_m27iar_cco", "rhsusf_weap_m9","rhs_weap_M136_hp","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_cco", "rhsusf_weap_m9","rhs_weap_M136_hp","Throw","Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {Standard_Mags,Std_Pistol};
	respawnMagazines[] = {Standard_Mags,Std_Pistol};		
	linkedItems[] = 
	{	
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset", 
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};					

class SOR_Rifleman_ammo_M : SOR_Rifleman_M	
{
	displayName = "Rifleman Ammo Bearer (M240)";
	backpack = "SOR_Rifleman_Ammo_Pack_M";
	weapons[] = {"160_rhs_weap_m27iar_cco","rhsusf_weap_m9","Throw","Put"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_cco","rhsusf_weap_m9","Throw","Put"};
};

class SOR_RiflemanAT_M : B_soldier_AT_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "Rifleman AT";
	backpack = "SOR_RFLAT_Pack_M";
	weapons[] = {"160_rhs_weap_m27iar_cco", "rhsusf_weap_m9","rhs_weap_M136_hp", "Throw", "Put"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_cco", "rhsusf_weap_m9","rhs_weap_M136_hp","Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {Standard_Mags,Std_Pistol};
	respawnMagazines[] = {Standard_Mags,Std_Pistol};
	linkedItems[] = 
	{	
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"rhs_googles_black",  
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_rifleman",
		"rhsusf_mich_helmet_marpatwd_headset",
		"rhs_googles_black",  
		Standard_Equipment
	};
};	
	
//Heli Pilot & CO-Pilot
class SOR_HeliPilot_M : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "rhs_uniform_FROG01_wd";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 
	displayName = "Heli Pilot";
	backpack = "SOR_Mech_Radio_M";
	weapons[] = {"rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};	
	linkedItems[] = 
	{	
		"rhsusf_spc_marksman", 
		"rhsusf_hgu56p",
		Airborne_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_marksman", 
		"rhsusf_hgu56p",
		Airborne_Equipment
	};
};

//Heli Crew Engineers
class SOR_HeliCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "Heli Crew";
	backpack = "SOR_Repair_Pack_M";
	uavHacker = 1; // allows UAV control		
	engineer = 1; // allows unit to repair 
	weapons[] = {"rhs_weap_m4a1_grip", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"rhs_weap_m4a1_grip", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc",
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc",
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

//Jet Pilots
class SOR_JetPilot_M : B_Pilot_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "Jet Pilot";		
	backpack = "B_Parachute";
	weapons[] = {"rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip};  
	RespawnItems[] = {Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
	};
	respawnMagazines[] =
	{
		Std_Pistol,
		"Laserbatteries",
		"rhs_mag_m18_green",
		"rhs_mag_an_m8hc"
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
class SOR_MEVPilot_M : 	SOR_HeliPilot_M
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_AIR";
	displayName = "MEV Pilot";
	linkedItems[] = 
	{	
		"rhsusf_spc_light",
		"H_CrewHelmetHeli_O", 
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
	displayName = "Para Jumper";
	backpack = "SOR_PJMedicPack_M";
	uniformClass = "U_B_CombatUniform_mcam_vest";
	uavHacker = 1; // allows UAV control
	engineer = 1; // allows unit to repair 		
	weapons[] = {"160_rhs_weap_m4a1_grip_cco", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m4a1_grip_cco", "rhsusf_weap_m9","Throw", "Put","Laserdesignator"};
	Items[] = {Standard_Meds,SL_Equip,"rhsusf_acc_ACOG"};  
	RespawnItems[] = {Standard_Meds,SL_Equip,"rhsusf_acc_ACOG"}; 
	magazines[] = 
	{
		Standard_Mags,
		Std_Pistol,
		"Laserbatteries"
	};
	respawnMagazines[] =
	{
		Standard_Mags,
		Std_Pistol,
		"Laserbatteries"
	};	
	linkedItems[] = 
	{	
		"V_PlateCarrier2_rgr",
		"rhsusf_opscore_mc_cover_pelt",
		"rhs_ess_black", 
		Airborne_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"V_PlateCarrier2_rgr",
		"rhsusf_opscore_mc_cover_pelt",
		"rhs_ess_black", 
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
	uniformClass = "rhs_uniform_FROG01_wd";
	displayName = "Recon Lead";
	accuracy = 3.5;
//		cost = 500000;
//		camouflage = 0.6;
//		threat[] = {1.2,0.2,0.2};
	weapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","Laserdesignator"};
	Items[] = 		
	{
		Recon_Equip,
		Recon_Meds
	};                
	RespawnItems[] = 
	{
		Recon_Equip,
		Recon_Meds
	};  
	magazines[] = 	
	{
		"Laserbatteries",
		Recon_Mags
	};
					
	respawnMagazines[] =
	{
		"Laserbatteries",
		Recon_Mags
	};						
	linkedItems[] = 
	{	
		"rhsusf_spc_squadleader", 
		"H_HelmetB_light_grass", 
		"G_Bandanna_khk",
		"rhs_googles_orange",
		Recon_Equipment
	};              
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_squadleader", 
		"H_HelmetB_light_grass", 
		"G_Bandanna_khk",
		"rhs_googles_orange",			
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
	backpack = "SOR_Mech_Radio_M";
	displayName = "Recon JTAC";	
	weapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","ACE_Vector"};		
};

class SOR_ReconRifleman_M : SOR_ReconLeader_M	
{
	icon =  "iconMan";
	displayName = "Recon Rifleman";
	weapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","ACE_Vector"};
	magazines[] =
	{
		Recon_Mags
	};						
	respawnMagazines[] =
	{
		Recon_Mags
	};
};

class SOR_Recon_M249AR_M : SOR_ReconLeader_M	
{
	icon =  "iconManMG";
	backpack = "SOR_M249_Pack_M";
	displayName = "Recon AutoRifleman M249";
	weapons[] = {"rhs_weap_m249_pip_L_para", "Throw", "Put"};
	respawnWeapons[] = {"rhs_weap_m249_pip_L_para", "Throw", "Put"};
	Items[] = 		
	{
		Recon_Equip,
		Recon_Meds
	};                
	RespawnItems[] = 
	{
		Recon_Equip,
		Recon_Meds
	};  
	magazines[] =
	{
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_200rnd_556x45_M_SAW"
	};
	respawnMagazines[] =
	{
		"rhs_mag_m67",
		"rhs_mag_m67",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhs_200rnd_556x45_M_SAW"
	};			
};	

class SOR_ReconSpotter_M : SOR_ReconLeader_M	
{
	icon =  "iconMan";
	displayName = "Recon Spotter";
	weapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_rhs_weap_m27iar_acog_s","Throw","Put","ACE_Vector"};
	Items[] = 		
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		Recon_Equip,
		Recon_Meds
	};                
	RespawnItems[] = 
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		Recon_Equip,
		Recon_Meds
	}; 		
	magazines[] =
	{
		Recon_Mags
	};						
	respawnMagazines[] =
	{
		Recon_Mags
	};		
};

class SOR_Marksman_M : SOR_ReconLeader_M	
{
	icon =  "iconMan";
	displayName = "Recon Marksman";
	weapons[] = {"160_rhs_weap_sr25","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_rhs_weap_sr25","Throw","Put","Laserdesignator"};
	Items[] = 		
	{
		Recon_Equip,
		Recon_Meds
	};                
	RespawnItems[] = 
	{
		Recon_Equip,
		Recon_Meds
	}; 
	magazines[] = 	
	{
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"Laserbatteries"
	};						
	respawnMagazines[] =
	{
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"Laserbatteries"
	};	
};

//Snipers
class SOR_Sniper_M : B_sniper_F		
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";		
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	weapons[] = {"160_srifle_LRR_camo_F","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"160_srifle_LRR_camo_F","Throw","Put","Laserdesignator"};
	Items[] =
	{
		Recon_Equip,
		Recon_Meds
	};  
	RespawnItems[] = 
	{
		Recon_Equip,
		Recon_Meds
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
		Recon_Equipment
	};
	respawnLinkedItems[] = 
	{	
		Recon_Equipment
	};
};

class SOR_Spotter_M : B_spotter_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Recon";
	accuracy = 3.5;
	cost = 700000;
	camouflage = 0.3;
	uniformClass = "U_B_FullGhillie_ard";
	backpack = "SOR_Spotter_Radio";
	weapons[] = {"160_m4a1_blockII_grip2_KAC","Throw","Put","ACE_Vector"};
	respawnWeapons[] = {"160_m4a1_blockII_grip2_KAC","Throw","Put","ACE_Vector"};
	Items[] =
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		Recon_Equip,
		Recon_Meds
	};  
	RespawnItems[] = 
	{
		"ACE_ATragMX",
		"ACE_Kestrel4500",
		"ACE_RangeCard",
		Recon_Equip,
		Recon_Meds
	};  
	magazines[] =
	{
		Recon_Mags
	};						
	respawnMagazines[] =
	{
		Recon_Mags
	};
	linkedItems[] = 
	{	
		Recon_Equipment
	};
	respawnLinkedItems[] = 
	{	
		Recon_Equipment
	};		
};

//Mechanised Crew/Driver/Gunner Engineers
class SOR_MechCrew_M : B_crew_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_MECH";
	displayName = "Mechanised Gunner";
	uniformClass = "rhs_uniform_FROG01_wd"; 
	backpack = "";
	weapons[] = {"rhsusf_weap_m9","Throw", "Put"};
	respawnWeapons[] = {"rhsusf_weap_m9","Throw", "Put"};
	Items[] =
	{
		Standard_Meds
	};  
	RespawnItems[] = 
	{
		Standard_Meds
	};
	magazines[] = {Std_Pistol};
	respawnMagazines[] = {Std_Pistol};
	linkedItems[] = 
	{	
		"rhsusf_spc_marksman",
		"rhsusf_cvc_ess", 
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_marksman",
		"rhsusf_cvc_ess", 
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_MechOperator_M : SOR_MechCrew_M
{
	displayName = "Mechanised Operator";
	backpack = "SOR_Mech_Radio_M";
	weapons[] = {"rhs_weap_m4a1_grip","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
	respawnWeapons[] = {"rhs_weap_m4a1_grip","rhsusf_weap_m9","Throw","Put","Laserdesignator"};
	magazines[] = 	
	{
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"Laserbatteries",
		Std_Pistol
	};						
	respawnMagazines[] =
	{
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m8hc",
		"Laserbatteries",
		Std_Pistol
	};
	linkedItems[] = 
	{	
		"rhsusf_spc_crewman",
		"rhsusf_cvc_ess", 
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_crewman",
		"rhsusf_cvc_ess", 
		"rhs_balaclava1_olive",
		"ItemGPS",
		Standard_Equipment
	};
};

class SOR_MechCrewCommander_M : SOR_MechOperator_M
{
	displayName = "Mechanised Crew Commander";
	backpack = "SOR_Mech_Radio_M";
	cost = 100000;
};	

class SOR_MechDriver_M : SOR_MechCrew_M
{
	displayName = "Mechanised Driver";
	backpack = "SOR_Repair_Pack_M";
};	

//HMG Team
class SOR_HMGActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Actual";
	icon =  "iconManLeader";
	backpack = "SOR_Mech_Radio_M";
};

class SOR_HMGGunner_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Gunner";
	backpack = "RHS_Mk19_Gun_Bag";
};	

class SOR_HMGCarrier_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Carrier";
	backpack = "RHS_M2_MiniTripod_Bag";
};

class SOR_HMGRFL_M : SOR_Grenadier_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "HMG Rifleman M320";
	backpack = "SOR_GD_Pack_M";
};	

//Mortar Team
class SOR_MORActual_M : SOR_Actual_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Actual";
	backpack = "SOR_Mech_Radio_M";
};

class SOR_MORGunner_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Gunner";
	backpack = "B_Mortar_01_weapon_F";
};	

class SOR_MORCarrier_M : SOR_Rifleman_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Carrier";
	backpack = "B_Mortar_01_support_F";
};

class SOR_MORRFL_M : SOR_Grenadier_M
{
	vehicleclass = "SOR_Infantry_Support";
	displayName = "Mortar Rifleman M320";
	backpack = "SOR_GD_Pack_M";
};		

//Repair Team
class SOR_Engineer_M : B_engineer_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Infantry_Support";
	uniformClass = "rhs_uniform_FROG01_wd";
	backpack = "SOR_Repair_Pack_M";
	weapons[] = {"Throw", "Put"};
	respawnWeapons[] = {"Throw", "Put"};
	Items[] = {Standard_Meds};
	RespawnItems[] = {Standard_Meds};
	magazines[] = {};
	respawnMagazines[] = {};	
	linkedItems[] = 
	{	
		"rhsusf_spc_rifleman",
		"rhsusf_ach_bare_tan_headset", 
		"rhs_googles_black",
		Standard_Equipment
	};
	respawnLinkedItems[] = 
	{	
		"rhsusf_spc_rifleman",
		"rhsusf_ach_bare_tan_headset",
		"rhs_googles_black",
		Standard_Equipment
	};
};	
