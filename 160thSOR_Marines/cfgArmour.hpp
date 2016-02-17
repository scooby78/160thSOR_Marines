/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby
	Date: 28/12/15 
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

	class RHS_M2A3_BUSKIII;
	class rhsusf_m113d_usarmy;
	class rhsusf_m1a2sep1tuskid_usarmy;
	class rhsusf_m1a2sep1tuskiid_usarmy;

//M2A3 (BUSK III)	
	class SOR_M2A3_BUSKIII : RHS_M2A3_BUSKIII
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		_generalMacro = "SOR_M2A3_BUSKIII";
		displayName = "M2A3 (BUSK III)";
		class UserActions{};
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);			
		};
		class TransportWeapons
		{
			weap_xx(M3CG,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(MAAWS_HEAT,10)
			mag_xx(MAAWS_HEDP,10)
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks{};
	};

//M2A3 (BUSK III) Armour 500	
	class SOR_M2A3_BUSKIII_BUFF : RHS_M2A3_BUSKIII
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		_generalMacro = "SOR_M2A3_BUSKIII_BUFF";
		displayName = "M2A3_B500 (BUSK III)";
		armor = 500; //was 325 protection against missiles, collisions and explosions
		class UserActions{};
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);			
		};
		class TransportWeapons
		{
			weap_xx(M3CG,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(MAAWS_HEAT,10)
			mag_xx(MAAWS_HEDP,10)
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks{};
	};

//M11A3 Armour 300 	
	class SOR_rhsusf_m113d_usarmy_buff : rhsusf_m113d_usarmy
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		_generalMacro = "SOR_rhsusf_m113d_usarmy_buff";
		displayName = "M11A3_B300";
		armor = 300; //was 200 protection against missiles, collisions and explosions
		class UserActions{};
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);			
		};
		class TransportWeapons
		{
			weap_xx(M3CG,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(MAAWS_HEAT,10)
			mag_xx(MAAWS_HEDP,10)
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks{};
	};

//M11A3 Armor 500	
	class SOR_rhsusf_m113d_usarmy_buffcq : rhsusf_m113d_usarmy
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		_generalMacro = "SOR_rhsusf_m113d_usarmy_buffcq";
		displayName = "M11A3_2_B500";
		armor = 500; //was 200 protection against missiles, collisions and explosions
		class UserActions{};
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);
			item_xx(ACE_Track,2)
		};
		class TransportWeapons
		{
			weap_xx(M3CG,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(MAAWS_HEAT,10)
			mag_xx(MAAWS_HEDP,10)
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks{};
	};		

//Tusk I Armor 700
	class SOR_rhsusf_m1a2sep1tuskid_usarmy : rhsusf_m1a2sep1tuskid_usarmy
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		_generalMacro = "SOR_rhsusf_m1a2sep1tuskid_usarmy";
		displayName = "M1A2_B700 (Tusk I)";
		armor = 700; //was 600 protection against missiles, collisions and explosions
		class UserActions{};
		class TransportItems 
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);
			item_xx(ACE_Track,2)			
		};
		class TransportWeapons
		{
			weap_xx(M3CG,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(MAAWS_HEAT,10)
			mag_xx(MAAWS_HEDP,10)
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks{};
	};	

//Tusk II Armor 800
	class SOR_rhsusf_m1a2sep1tuskiid_usarmy : rhsusf_m1a2sep1tuskiid_usarmy
	{
		side=1;
		faction = SOR_Faction_D;
		vehicleclass = "SOR_Vehicles";
		_generalMacro = "SOR_rhsusf_m1a2sep1tuskiid_usarmy";
		displayName = "M1A2_B800 (Tusk II)";
		armor = 800; //was 600 protection against missiles, collisions and explosions
		class UserActions
		{
			class trunk_close
			{
				condition = "vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,2] == (call rhsusf_fnc_findPlayer)";
				displayName = "Leave M2";
				onlyForplayer = 0;
				position = "trunk_action";
				radius = 2;
				statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[[this,false],'rhs_fnc_m1_hatch',this] call BIS_fnc_MP;";
			};
			class trunk_open
			{
				condition = "this animationPhase 'HatchCommander1'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
				displayName = "Use M2";
				onlyForplayer = 0;
				position = "trunk_action";
				radius = 2;
				statement = "(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,2]];[[this,true],'rhs_fnc_m1_hatch',this] call BIS_fnc_MP";
			};
		};
		class TransportItems
		{
			item_xx(ToolKit,1)
			item_xx(ACE_FieldDressing,20);
			item_xx(ACE_morphine,5);
			item_xx(ACE_Track,2)			
		};
		class TransportWeapons
		{
			weap_xx(M3CG,2)
		};
		class TransportMagazines
		{
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
			mag_xx(MAAWS_HEAT,10)
			mag_xx(MAAWS_HEDP,10)
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2)
			mag_xx(rhsusf_100Rnd_762x51,2)
		};
		class TransportBackpacks{};
	};
	


	
	
	
	