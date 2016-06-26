/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby/Snapage
	Date: 28/12/15
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

class rhsusf_m1a1fep_wd;
class rhsusf_m1a1hc_wd;
class rhsusf_m1a1fep_od;
class B_T_LSV_01_armed_F;
class B_T_LSV_01_unarmed_F;
class B_CTRG_LSV_01_light_F;
class B_APC_Wheeled_01_cannon_F;
class B_MRAP_01_hmg_F;
class B_MRAP_01_gmg_F;
class B_MRAP_01_F;
class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd;
class rhsusf_M978A4_BKIT_usarmy_wd;
class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd;

//M1A1
class SOR_USMC_rhsusf_m1a1fep_wd : rhsusf_m1a1fep_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1FEP (WD)";
	peakTorque = 10355;
	enginePower = 3000;
	armor = 800;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(160_arifle_MX_F_cco,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,20)
	};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_m1a1hc_wd : rhsusf_m1a1hc_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1HC (OD)";
	peakTorque = 10355;
	enginePower = 3000;
	armor = 800;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(160_arifle_MX_F_cco,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,20)
	};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_m1a1fep_od : rhsusf_m1a1fep_od
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1FEP (OD)";
	peakTorque = 10355;
	enginePower = 3000;
	armor = 800;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(160_arifle_MX_F_cco,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,20)
	};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

//Light Assault Vehicle
class SOR_USMC_B_T_LSV_01_armed_F : B_T_LSV_01_armed_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Prowler [Armed]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_B_T_LSV_01_unarmed_F : B_T_LSV_01_unarmed_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Prowler [Unarmed]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_B_CTRG_LSV_01_light_F : B_CTRG_LSV_01_light_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	hiddenSelections[] = {camo3};
	displayName = "Prowler [Light]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

//IFV
class SOR_USMC_B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Patria AMV (C3/P8)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,15);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
		weap_xx(160_arifle_MX_F_cco,1)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,7)
	};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

//MRAP
class SOR_USMC_B_MRAP_01_hmg_F : B_MRAP_01_hmg_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "MRAP Armed HMG";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_B_MRAP_01_gmg_F : B_MRAP_01_gmg_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "MRAP Armed GMG";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_B_MRAP_01__F : B_MRAP_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "MRAP Unarmed";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_B_MRAP_01_Engineer_F : B_MRAP_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "MRAP Unarmed (Engineer)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_65x39_caseless_mag,5)
	};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
		pack_xx(Vanilla_SOR_OrdanancePack_M,2)
		pack_xx(rhs_Tow_Gun_Bag,1)
		pack_xx(rhs_Tow_Tripod_Bag,1)
		pack_xx(B_Mortar_01_weapon_F,1)
		pack_xx(B_Mortar_01_support_F,1)
	};
};

//Trucks
class SOR_USMC_rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "M977A4 M2 Ammo";
	enginePower = 850;  //was 324
	peakTorque = 2450; //was 1684
	crew = "SOR_Engineer_D";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_M978A4_BKIT_usarmy_wd : rhsusf_M978A4_BKIT_usarmy_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "M978A4 Fuel";
	ace_refuel_fuelCargo = 30000;
	enginePower = 850;  //was 324
	peakTorque = 2450; //was 1684
	crew = "SOR_Engineer_D";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "M977A4 M2 Repair";
	ace_cargo_space = 16;
	enginePower = 850;  //was 324
	peakTorque = 2450; //was 1684
	crew = "SOR_Engineer_D";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(Vanilla_SOR_Repair_Pack_M,1)
	};
};


