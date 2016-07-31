/*
	Name: 160th SOR USMC Mod (cfgArmour.hpp)
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

class rhsusf_m1a1hc_wd;
class rhsusf_m1a1fep_od;
class rhsusf_m1a1fep_d;

class B_T_LSV_01_armed_F;
class B_T_LSV_01_unarmed_F;
class B_LSV_01_armed_F;
class B_LSV_01_unarmed_F;
class B_CTRG_LSV_01_light_F;
class B_Quadbike_01_F;

class B_APC_Wheeled_01_cannon_F;
class I_APC_Wheeled_03_cannon_F;
class B_APC_Tracked_01_CRV_F;

class B_MRAP_01_hmg_F;
class B_MRAP_01_gmg_F;
class B_MRAP_01_F;
class I_MRAP_03_hmg_F;
class I_MRAP_03_gmg_F;
class I_MRAP_03_F;

class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd;
class rhsusf_M978A4_BKIT_usarmy_wd;
class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd;
class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d;
class rhsusf_M978A4_BKIT_usarmy_d;
class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d;

class B_MBT_01_arty_F;

class B_MBT_01_mlrs_F;

class B_APC_Tracked_01_AA_F;

////////////////////Main Battle Tanks////////////////////

class SOR_USMC_rhsusf_m1a1hc_wd : rhsusf_m1a1hc_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[OD] USMC M1A1HC";
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
		weap_xx(160_rhs_weap_m4_pmag_eotech,2)
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[OD] USMC M1A1FEP";
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
		weap_xx(160_rhs_weap_m4_pmag_eotech,2)
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] USMC M1A1FEP";
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
		weap_xx(160_rhs_weap_m4_pmag_eotech,2)
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

////////////////////Light Strike Vehicles////////////////////

class SOR_USMC_B_T_LSV_01_armed_F : B_T_LSV_01_armed_F //Olive//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[W] Polaris Dagor [Armed]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_T_LSV_01_unarmed_F : B_T_LSV_01_unarmed_F //Olive//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[W] Polaris Dagor [Unarmed]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_T_LSV_01_armed_desert_F : B_LSV_01_armed_F //Sand//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Polaris Dagor [Armed]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_T_LSV_01_unarmed_desert_F : B_LSV_01_unarmed_F //Sand//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Polaris Dagor [Unarmed]";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_CTRG_LSV_01_light_F : B_CTRG_LSV_01_light_F //Viper//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "Polaris Dagor [Viper]";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_m32,1);
		weap_xx(rhs_weap_M320,1);
		weap_xx(rhs_weap_M136_hedp,1);
	};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(USMC_SOR_M32_Pack_M,1);
		pack_xx(USMC_SOR_M320_Pack_M,1);
	};
};

class SOR_USMC_B_Quadbike_01_F : B_Quadbike_01_F //Viper//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "Yamaha Grizzly 450 [Viper]";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hedp,1);
	};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(B_rhsusf_B_BACKPACK,1);
	};
};

class SOR_USMC_B_Quadbike_01_F_inf : B_Quadbike_01_F //Infantry//
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "Yamaha Grizzly 450";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,5);
	};
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Patria AMV (C3/P8)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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

class SOR_USMC_B_APC_Wheeled_01_cannon_F_W : B_APC_Wheeled_01_cannon_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\data\apc_wheeled_01_base_co.paa","160thSOR_Marines\data\apc_wheeled_01_adds_co.paa","160thSOR_Marines\data\apc_wheeled_01_tows_co.paa"};
	displayName = "[W] Patria AMV (C3/P8)";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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

class SOR_USMC_I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Pandur II (C3/P8)";
	side = 1
    hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] = {"A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_co.paa","A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext2_co.paa","A3\Armor_F_Gamma\APC_Wheeled_03\Data\rcws30_co.paa","A3\Armor_F_Gamma\APC_Wheeled_03\Data\apc_wheeled_03_ext_alpha_co.paa"};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Nammera ARV";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Oshkosh M-ATV HMG";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Oshkosh M-ATV GMG";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Oshkosh M-ATV ";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Oshkosh M-ATV (Engi)";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(USMC_SOR_OrdanancePack_M,2);
		pack_xx(rhs_Tow_Gun_Bag,1);
		pack_xx(rhs_Tow_Tripod_Bag,1);
		pack_xx(rhs_M252_Gun_Bag,1);
		pack_xx(rhs_M252_Bipod_Bag,1);
	};
};

class SOR_USMC_B_MRAP_01_hmg_F_W : B_MRAP_01_hmg_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	hiddenSelections[] = {"Camo1","Camo2","camo3"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\data\hunter_base_co.paa","160thSOR_Marines\data\hunter_adds_co.paa","160thSOR_Marines\data\hunter_turret_co.paa"};
	displayName = "[W] Oshkosh M-ATV HMG";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MRAP_01_gmg_F_W : B_MRAP_01_gmg_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	hiddenSelections[] = {"Camo1","Camo2","camo3"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\data\hunter_base_co.paa","160thSOR_Marines\data\hunter_adds_co.paa","160thSOR_Marines\data\hunter_turret_co.paa"};
	displayName = "[W] Oshkosh M-ATV GMG";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MRAP_01_F_W : B_MRAP_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	hiddenSelections[] = {"Camo1","Camo2","riotpolice"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\data\hunter_base_co.paa","160thSOR_Marines\data\hunter_adds_co.paa",""};
	displayName = "[W] Oshkosh M-ATV";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_B_MRAP_01_Engineer_F_W : B_MRAP_01_F
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	hiddenSelections[] = {"Camo1","Camo2","riotpolice"};
	hiddenSelectionsTextures[] = {"160thSOR_Marines\data\hunter_base_co.paa","160thSOR_Marines\data\hunter_adds_co.paa",""};
	displayName = "[W] Oshkosh M-ATV (Engi)";
	enginePower = 370;  //was 276
	peakTorque = 1850; //was 1253
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(USMC_SOR_OrdanancePack_M,2);
		pack_xx(rhs_Tow_Gun_Bag,1);
		pack_xx(rhs_Tow_Tripod_Bag,1);
		pack_xx(rhs_M252_Gun_Bag,1);
		pack_xx(rhs_M252_Bipod_Bag,1);
	};
};

class SOR_USMC_I_MRAP_03_hmg_F : I_MRAP_03_hmg_F
{
	faction = SOR_Faction_M;
	side = 1;
    hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\A3\data_f\vehicles\turret_co.paa"};
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] LSG Fennek HMG";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_I_MRAP_03_gmg_F : I_MRAP_03_gmg_F
{
	faction = SOR_Faction_M;
	side = 1;
    hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\A3\data_f\vehicles\turret_co.paa"};
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] LSG Fennek GMG";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_I_MRAP_03_F : I_MRAP_03_F
{
	faction = SOR_Faction_M;
	side = 1;
    hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\A3\data_f\vehicles\turret_co.paa"};
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] LSG Fennek";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
	};
};

class SOR_USMC_I_MRAP_03_F_Engineer_F : I_MRAP_03_F
{
	faction = SOR_Faction_M;
	side = 1;
    hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\A3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa","\A3\data_f\vehicles\turret_co.paa"};
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] LSG Fennek (Engi)";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,5);
	};
	class TransportBackpacks
	{
		pack_xx(USMC_SOR_Repair_Pack_M,1);
		pack_xx(USMC_SOR_OrdanancePack_M,2);
		pack_xx(rhs_Tow_Gun_Bag,1);
		pack_xx(rhs_Tow_Tripod_Bag,1);
		pack_xx(rhs_M252_Gun_Bag,1);
		pack_xx(rhs_M252_Bipod_Bag,1);
	};
};

////////////////////Logistics Trucks////////////////////

class SOR_USMC_rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[W] M977A4 Ammo M2";
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[W] M978A4 Fuel";
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[W] M977A4 Repair M2";
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

class SOR_USMC_rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_d
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] M977A4 Ammo M2";
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

class SOR_USMC_rhsusf_M978A4_BKIT_usarmy_d : rhsusf_M978A4_BKIT_usarmy_d
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] M978A4 Fuel";
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

class SOR_USMC_rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_d
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] M977A4 Repair M2";
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Sholef SPH 155mm";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] MLRS 230mm";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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
	vehicleclass = "SOR_USMC_Vehicles";
	displayName = "[D] Merkava ADA";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,1);
		weap_xx(160_rhs_weap_m4_pmag_eotech,1);
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