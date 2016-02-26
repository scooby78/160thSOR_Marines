/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/12/15 
	Description: cfgAircraft.hpp
*/
	class rhsusf_CH53E_USMC_D;
	class RHS_UH1Y_FFAR_d;
	class RHS_UH1Y_d;
	class RHS_UH1Y_UNARMED_d;
	class RHS_AH1Z;
	class RHS_AH1Z_GS;
	class RHS_AH1Z_CS;
	
// Transport Helos	
	class SOR_RHS_UH1Y_UNARMED_d : RHS_UH1Y_UNARMED_d
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-1Y [Unarmed] (C2/P9)";
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
		class TransportWeapons{
			
				weap_xx(rhs_weap_m4a1_carryhandle_grip2,2);
		};
		class TransportMagazines
		{
				mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6);
		};
		class TransportBackpacks
		{
				pack_xx(SOR_Repair_Pack_D,1);
		};
	};

	class SOR_RHS_UH1Y_d : RHS_UH1Y_d
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-1Y [FFAR/MG] (C2/P9)";
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
			
				weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)
		};
		class TransportMagazines
		{
				mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
				pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	
	class SOR_RHS_UH1Y_FFAR_d : RHS_UH1Y_FFAR_d
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
		displayName = "UH-1Y [FFAR] (C2/P9)";
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
		class TransportWeapons{
			
				weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)
		};
		class TransportMagazines
		{
				mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
				pack_xx(SOR_Repair_Pack_D,1)
		};
	};	
	
	class SOR_rhsusf_CH53E_USMC_D : rhsusf_CH53E_USMC_D
	{
		scope = 2;
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
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
			weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)
		};
		class TransportBackpacks
		{
			pack_xx(SOR_Repair_Pack_D,1)
		};
	};
	
// Attack Helos	
	class SOR_RHS_AH1Z : RHS_AH1Z
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
//		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{		
			pack_xx(SOR_Repair_Pack_D,1)
		};	
	};	

	class SOR_RHS_AH1Z_GS : RHS_AH1Z_GS
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
//		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
		class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{		
			pack_xx(SOR_Repair_Pack_D,1)
		};	
	};		
	
	class SOR_RHS_AH1Z_CS : RHS_AH1Z_CS
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Aircraft";
//		armor = 80; //was 50 (UH-60 is 60!) 
		fuelCapacity = 200; //was 500 
			class TransportItems 
		{
			item_xx(ACE_FieldDressing,10);
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks
		{		
			pack_xx(SOR_Repair_Pack_D,1)
		};	
	};		
