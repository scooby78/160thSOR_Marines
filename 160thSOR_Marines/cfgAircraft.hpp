/*
	Name: 160th SOR USMC Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: cfgAircraft.hpp
*/
class rhsusf_CH53E_USMC_D;
class RHS_UH1Y_FFAR_d;
class RHS_UH1Y_d;
class RHS_UH1Y_d_GS;
class RHS_UH60M_MEV2;

class RHS_AH1Z;
class RHS_AH1Z_GS;
class RHS_AH1Z_CS;

class B_T_VTOL_01_armed_F;
class B_T_VTOL_01_infantry_F;
class B_T_VTOL_01_vehicle_F;

class B_T_UAV_03_F;
class B_UAV_02_F;
class B_UAV_02_CAS_F;
class B_UAV_01_F;
class B_UGV_01_F;
class B_UGV_01_rcws_F;

class rhsusf_f22;
class RHS_A10;
class RHS_A10_AT;
class RHS_C130J;

    ////////////////////Transport Helicopters////////////////////

class SOR_USMC_HELI_UH1Y_FFAR_DG : RHS_UH1Y_d
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "UH-1Y [FFAR/MG] (C2/P9)";
	altFullForce = 5900
	altNoForce = 6100
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class CloseCargoDoor
		{
			condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
			displayName = "Close right cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
		};
		class CloseCargoLDoor
		{
			condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
			displayName = "Close left cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
		};
		class OpenCargoDoor
		{
			condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
			displayName = "Open right cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
		};
		class OpenCargoLDoor
		{
			condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
			displayName = "Open left cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
		};
		class HUDoff
		{
			condition = "(player==driver this)and(this animationphase 'HUDAction' !=1)";
			displayName = "HUD on";
			displayNameDefault = "HUD on";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "this animate ['HUDAction',1];this animate ['HUDAction_1',1]";
		};
		class HUDon
		{
			condition = "(player==driver this)and(this animationphase 'HUDAction' !=0)";
			displayName = "HUD off";
			displayNameDefault = "HUD off";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "this animate ['HUDAction',0];this animate ['HUDAction_1',0]";
		};
		class TogglePIP
		{
			condition = "( (call rhsusf_fnc_findPlayer)==driver this) or ((call rhsusf_fnc_findPlayer)==gunner this) ";
			displayName = "Toggle monitor";
			displayNameDefault = "Toggle monitor";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "call rhs_fnc_uh1_toggleCam";
		};
	};
	class TransportItems
	{
			item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
			weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
			mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
			pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_HELI_UH1Y_FFAR : RHS_UH1Y_FFAR_d
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "UH-1Y [FFAR] (C2/P9)";
	altFullForce = 5900
	altNoForce = 6100
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class CloseCargoDoor
		{
			condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
			displayName = "Close right cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
		};
		class CloseCargoLDoor
		{
			condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
			displayName = "Close left cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
		};
		class OpenCargoDoor
		{
			condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
			displayName = "Open right cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
		};
		class OpenCargoLDoor
		{
			condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
			displayName = "Open left cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
		};
		class HUDoff
		{
			condition = "(player==driver this)and(this animationphase 'HUDAction' !=1)";
			displayName = "HUD on";
			displayNameDefault = "HUD on";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "this animate ['HUDAction',1];this animate ['HUDAction_1',1]";
		};
		class HUDon
		{
			condition = "(player==driver this)and(this animationphase 'HUDAction' !=0)";
			displayName = "HUD off";
			displayNameDefault = "HUD off";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "this animate ['HUDAction',0];this animate ['HUDAction_1',0]";
		};
		class TogglePIP
		{
			condition = "( (call rhsusf_fnc_findPlayer)==driver this) or ((call rhsusf_fnc_findPlayer)==gunner this) ";
			displayName = "Toggle monitor";
			displayNameDefault = "Toggle monitor";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "call rhs_fnc_uh1_toggleCam";
		};
	};
	class TransportItems
	{
			item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
			weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
			mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
			pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_HELI_UH1Y_GS_DG : RHS_UH1Y_d_GS
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "UH-1Y [GS/MG] (C2/P9)";
	altFullForce = 5900
	altNoForce = 6100
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class CloseCargoDoor
		{
			condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
			displayName = "Close right cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
		};
		class CloseCargoLDoor
		{
			condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
			displayName = "Close left cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
		};
		class OpenCargoDoor
		{
			condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
			displayName = "Open right cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
		};
		class OpenCargoLDoor
		{
			condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
			displayName = "Open left cargo door";
			onlyforplayer = 1;
			position = "pos driver";
			radius = 15;
			showwindow = 0;
			statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
		};
		class HUDoff
		{
			condition = "(player==driver this)and(this animationphase 'HUDAction' !=1)";
			displayName = "HUD on";
			displayNameDefault = "HUD on";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "this animate ['HUDAction',1];this animate ['HUDAction_1',1]";
		};
		class HUDon
		{
			condition = "(player==driver this)and(this animationphase 'HUDAction' !=0)";
			displayName = "HUD off";
			displayNameDefault = "HUD off";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "this animate ['HUDAction',0];this animate ['HUDAction_1',0]";
		};
		class TogglePIP
		{
			condition = "( (call rhsusf_fnc_findPlayer)==driver this) or ((call rhsusf_fnc_findPlayer)==gunner this) ";
			displayName = "Toggle monitor";
			displayNameDefault = "Toggle monitor";
			onlyForPlayer = 1;
			position = "zamerny";
			radius = 1;
			statement = "call rhs_fnc_uh1_toggleCam";
		};
	};
	class TransportItems
	{
			item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
			weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
			mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
			pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_HELI_CH53E : rhsusf_CH53E_USMC_D
{
	scope = 2;
	faction = SOR_Faction_M;
	altFullForce = 5600
	altNoForce = 6000
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "CH-53E (C2/P30)";
	class UserActions
	{
		class SOR_AutoDrop
		{
			displayName = "<t color='#008000'>Start Drop!</t>";
			displayNameDefault = "<t color='#008000'>Start Drop!</t>";
			condition = "(player == driver this)&&((getPosATL this) select 2 > 200)";
			priority = 1;
			showWindow = 0;
			hideOnUse = 1;
			radius= 8;
			position = "";
			onlyForPlayer = 0;
			statement = "[this] spawn sor_fnc_autoparadrop";
		};
		class Pack
		{
			condition = "(!isEngineOn this) AND {(this animationphase 'mainRotor_unfolded' !=1) AND (driver this == player) AND (speed this == 0)}";
			displayName = "Pack";
			displayNameDefault = "Pack";
			onlyForPlayer = 1;
			position = "PackAction";
			radius = 10;
			statement = "[this,1] execvm ""\rhsusf\addons\rhsusf_ch53\scripts\ch53_fold.sqf""";
		};
		class RampClose
		{
			condition = "this animationPhase ""ramp_bottom"" >= 0.56 && player == driver this;";
			displayName = "Close Ramp";
			onlyforplayer = 0;
			position = "ramp action";
			radius = 5;
			showWindow = 0;
			statement = "this animate [""ramp_bottom"",0];this animate [""ramp_top"",0];";
		};
		class RampLevel
		{
			condition = "this animationPhase ""ramp_bottom"" != 0.56 && player == driver this;";
			displayName = "Level Ramp";
			onlyforplayer = 0;
			position = "ramp action";
			radius = 5;
			showWindow = 0;
			statement = "this animate [""ramp_bottom"",0.56];this animate [""ramp_top"",1];";
		};
		class RampOpen
		{
			condition = "this animationPhase ""ramp_bottom"" <= 0.56 && player == driver this;";
			displayName = "Open Ramp";
			onlyforplayer = 0;
			position = "ramp action";
			radius = 5;
			showWindow = 0;
			statement = "this animate [""ramp_bottom"",1];this animate [""ramp_top"",1];";
		};
		class unPack
		{
			condition = "this animationphase ""mainRotor_unfolded"" !=0 AND driver this == player";
			displayName = "UnPack";
			displayNameDefault = "Unpack";
			onlyForPlayer = 1;
			position = "PackAction";
			radius = 10;
			statement = "[this,0] execvm ""\rhsusf\addons\rhsusf_ch53\scripts\ch53_fold.sqf""";
		};
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_HELI_UH60_MEV : RHS_UH60M_MEV2
{
	scope = 2;
	faction = SOR_Faction_M;
	altFullForce = 5600
	altNoForce = 6000
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "UH60 MEV (C5/P7)";
	class TransportItems
	{
	    item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
		item_xx(G_Diving,3)
		item_xx(U_B_Wetsuit,3)
		item_xx(V_RebreatherB,3)
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M14EBR,1)
	};
	class TransportMagazines
	{
		mag_xx(rhsusf_20Rnd_762x51_m993_Mag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

    ////////////////////Attack Helicopters////////////////////

class SOR_USMC_HELI_AH1Z : RHS_AH1Z
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
//		armor = 80; //was 50 (UH-60 is 60!)
	fuelCapacity = 200;
	altFullForce = 5900
	altNoForce = 6100
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_HELI_AH1Z_GS : RHS_AH1Z_GS
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
//		armor = 80; //was 50 (UH-60 is 60!)
	fuelCapacity = 200;
	altFullForce = 5900
	altNoForce = 6100
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_HELI_AH1Z_CS : RHS_AH1Z_CS
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
//		armor = 80; //was 50 (UH-60 is 60!)
	fuelCapacity = 200;
	altFullForce = 5900
	altNoForce = 6100
		class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

    ////////////////////VTOLS////////////////////

class SOR_USMC_VTOL_V44_ARMED : B_T_VTOL_01_armed_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	hiddenSelections[] = {camo2};
	fuelCapacity = 1000;
	armorStructural = 4;
	displayName = "(USAF) AV44B Spooky Gunship (C4/P0) ";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
		item_xx(B_Parachute,4);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,4)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,16)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_VTOL_V44_TRANSPORT : B_T_VTOL_01_infantry_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	hiddenSelections[] = {camo2};
	fuelCapacity = 1200;
	armorStructural = 4;
	displayName = "(USAF) V44 Blackfish Transport (C4/P32)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
		item_xx(B_Parachute,4);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_VTOL_V44_CARGO : B_T_VTOL_01_vehicle_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	hiddenSelections[] = {camo2};
	fuelCapacity = 1200;
	armorStructural = 4;
	displayName = "(USAF) V44 Blackfish Cargo (C4/P0/V1-4)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
		item_xx(B_Parachute,4);
	};
	class TransportWeapons
	{
		weap_xx(SOR_USMC_WEAP_M4_VEH,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

    ////////////////////Drones////////////////////

class SOR_USMC_UAV_FALCON : B_T_UAV_03_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	fuelCapacity = 400;
	class TransportItems
	{
		item_xx(B_UavTerminal,1);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_UAV_YABHON_AGM : B_UAV_02_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "YABHON-R3 (AGM)";
	fuelCapacity = 800;
	class TransportItems
	{
		item_xx(B_UavTerminal,1);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_UAV_YABHON_GBU : B_UAV_02_CAS_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	displayName = "YABHON-R3 (GBU)";
	fuelCapacity = 800;
	class TransportItems
	{
		item_xx(B_UavTerminal,1);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_UAV_DARTER : B_UAV_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	fuelCapacity = 110;
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

class SOR_USMC_UAV_UGV : B_UGV_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	fuelCapacity = 3000;
	class TransportItems
	{
		item_xx(B_UavTerminal,1);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_UAV_UGV_ARMED : B_UGV_01_rcws_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	fuelCapacity = 3000;
	class TransportItems
	{
		item_xx(B_UavTerminal,1);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

    ////////////////////Fixed Wing////////////////////

class SOR_USMC_FWING_F22 : rhsusf_f22
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	armor = 60;
	fuelCapacity = 500;
	altFullForce = 19500
	altNoForce = 20000
	displayName = "(USAF) F22 Raptor";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_FWING_A10A_CAS : RHS_A10
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\a10\a10_01_co_green_shark.paa","160thSOR_Marines\a10\a10_02_co_green.paa"};
	armor = 100;
	fuelCapacity = 600;
	maxSpeed = 706
	altFullForce = 13000
	altNoForce = 13700
	displayName = "(USAF) A10A Thunderbolt [CAS]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_FWING_A10A_AT : RHS_A10_AT
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\a10\a10_01_co_green_hog.paa","160thSOR_Marines\a10\a10_02_co_green.paa"};
	armor = 100;
	fuelCapacity = 600;
	maxSpeed = 706
	altFullForce = 13000
	altNoForce = 13700
	displayName = "(USAF) A10A Thunderbolt [AT]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_FWING_C130J : RHS_C130J
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Aircraft";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\c130\c130j_body_co.paa","160thSOR_Marines\c130\c130j_wings_co.paa"};
	armor = 120;
	fuelCapacity = 1000;
	altFullForce = 8500
	altNoForce = 8615
	displayName = "(USAF) C130J";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};