/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby/Snapage
	Date: 28/12/15
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

class rhsusf_m1a1fep_wd;
class rhsusf_m1a1hc_wd;
class rhsusf_m1a1fep_od;
class rhsusf_m1a1fep_d;

class B_T_LSV_01_armed_F;
class B_T_LSV_01_unarmed_F;
class B_CTRG_LSV_01_light_F;
class B_Quadbike_01_F;

class B_APC_Wheeled_01_cannon_F;
class B_APC_Tracked_01_rcws_F;
class B_APC_Tracked_01_CRV_F;

class B_MRAP_01_hmg_F;
class B_MRAP_01_gmg_F;
class B_MRAP_01_F;

class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd;
class rhsusf_M978A4_BKIT_usarmy_wd;
class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd;

class B_MBT_01_arty_F;

class B_MBT_01_mlrs_F;

class B_APC_Tracked_01_AA_F;

    ////////////////////Main Battle Tanks////////////////////

class SOR_USMC_rhsusf_m1a1fep_wd : rhsusf_m1a1fep_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1FEP (WD)";
	peakTorque = 10355;
	enginePower = 3000;
	armor = 900;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(160_arifle_SPAR_01_snd_F_specter,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,20)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_m1a1hc_wd : rhsusf_m1a1hc_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1HC (OD)";
	peakTorque = 10355;
	enginePower = 3000;
	armor = 900;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(160_arifle_SPAR_01_snd_F_specter,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,20)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_m1a1fep_od : rhsusf_m1a1fep_od
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1FEP (OD)";
	peakTorque = 10355;
	enginePower = 3000;
	armor = 900;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(160_arifle_SPAR_01_snd_F_specter,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,20)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1)
	};
};

class SOR_USMC_rhsusf_m1a1fep_d : rhsusf_m1a1fep_d
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "USMC M1A1FEP (OD)";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","duke_tex","","","n1","n2","n3","i1","i2","i3"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
	hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02.rvmat","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03.rvmat","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd.rvmat","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d.rvmat"};
	peakTorque = 10355;
	enginePower = 3000;
	armor = 900;
	brakeDistance = 1;
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,2);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,20);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

    ////////////////////Light Strike Vehicles////////////////////

class SOR_USMC_B_T_LSV_01_armed_F : B_T_LSV_01_armed_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "LSV Mark II [Armed]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_T_LSV_01_unarmed_F : B_T_LSV_01_unarmed_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "LSV Mark II [Unarmed]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_CTRG_LSV_01_light_F : B_CTRG_LSV_01_light_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "LSV Mark II [Viper]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(USMC_SOR_VEH_B_Carryall_oli,1);
	};
};

class SOR_USMC_B_Quadbike_01_F : B_Quadbike_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Yamaha Grizzly 450 [Viper]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

    ////////////////////Infantry Fighting Vehicles/APC////////////////////

class SOR_USMC_B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Patria AMV (C3/P8)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Namer APC (C3/P8)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_CRV_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Nammera ARV";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

    ////////////////////MRAPs////////////////////

class SOR_USMC_B_MRAP_01_hmg_F : B_MRAP_01_hmg_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Oshkosh M-ATV Armed HMG";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MRAP_01_gmg_F : B_MRAP_01_gmg_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Oshkosh M-ATV Armed GMG";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MRAP_01__F : B_MRAP_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Oshkosh M-ATV Unarmed";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MRAP_01_Engineer_F : B_MRAP_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Oshkosh M-ATV Unarmed (Engineer)";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5)
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(USMC_SOR_OrdanancePack_M,2);
		pack_xx(rhs_Tow_Gun_Bag,1);
		pack_xx(rhs_Tow_Tripod_Bag,1);
		pack_xx(B_Mortar_01_weapon_F,1);
		pack_xx(B_Mortar_01_support_F,1);
	};
};

    ////////////////////Logistics Trucks////////////////////

class SOR_USMC_rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "M977A4 Ammo M2";
	enginePower = 850;  //was 324
	peakTorque = 2450; //was 1684
	crew = "SOR_Engineer_D";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
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
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "M977A4 Repair M2";
	ace_cargo_space = 16;
	enginePower = 850;  //was 324
	peakTorque = 2450; //was 1684
	crew = "SOR_Engineer_D";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

    ////////////////////Mobile Artillery////////////////////

class SOR_USMC_B_MBT_01_arty_F : B_MBT_01_arty_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Sholef SPH 155mm";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,10);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MBT_01_mlrs_F : B_MBT_01_mlrs_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "MLRS 230mm";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,10);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

    ////////////////////Mobile Anti Air////////////////////

class SOR_USMC_B_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	displayName = "Merkava ADA";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_arifle_SPAR_01_snd_F_specter,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,10);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};