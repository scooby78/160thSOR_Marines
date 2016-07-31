/*
	Name: 160th SOR USMC Mod
	Author: Buck & (Scooby - Initial Framework)
	Date: 16/07/16
	Description: cfgBackpacks.hpp
*/

//Call base backpacks
class tf_rt1523g_rhs;
class B_Carryall_oli;
class B_AssaultPack_rgr;
class tf_rt1523g_big_bwmod;

class B_Carryall_cbr;
class B_AssaultPack_cbr;
class tf_rt1523g_big_bwmod_tropen;
class tf_rt1523g_bwmod;

class rhsusf_assault_eagleaiii_coy;

class tfw_ilbe_coy;
class tfw_ilbe_blade_coy;
class tfw_ilbe_dd_coy;


//USMC Medic Pack
class USMC_SOR_Medic_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Medic Pack";
	class TransportMagazines
	{
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,4);
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//USMC Parajumper Pack
class USMC_SOR_PJMedicPack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Parajumper Pack";
	class TransportMagazines
	{
		mag_xx(SmokeShell,5);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
	};
};

//USMC Rifleman Pack
class USMC_SOR_Rifleman_SPAR16S_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Rifleman Pack (M27IAR)";
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6);
	};
};

//USMC Rilfeman Ammobearer Pack
class USMC_SOR_Rifleman_M240_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Rifleman Pack (M240G)";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51_m62_tracer,2);
	};
};

//USMC SAW Pack
class USMC_SOR_SPAR16S_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) M27IAR Ammo Pack";
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,4);
	};
};

//USMC LMG Pack
class USMC_SOR_M240_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) M240G Ammo Pack";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51_m62_tracer,1);
	};
};

//USMC Repair Pack With Toolkit
class USMC_SOR_Repair_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Repair Pack";
	class TransportItems
	{
		item_xx(Toolkit,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
	};
};

//USMC Custom Grenadier Pack
class USMC_SOR_GD_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Grednadier Pack";
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,5);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
	};
};

//USMC Custom RTO Pack
class USMC_SOR_RTO_Pack_M : tf_rt1523g_bwmod
{
	displayName = "(2021 USMC) RTO Radio Pack";
	class TransportMagazines
	{
		mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,5);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,5);
	};
};

//USMC Custom Rifleman AT Pack
class USMC_SOR_RFLAT_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Empty Pack";
	class TransportMagazines{};
};

//USMC Custom Sniper Pack
class USMC_SOR_Sniper_Camo_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Sniper Pack";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,4);
		item_xx(ACE_bloodIV_500,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShellGreen,1);
		mag_xx(SmokeShell,2);
	};
};

/*
//USMC Spotter Pack
class USMC_SOR_Spotter_Radio_M : tf_rt1523g_bwmod
{
	displayName = "(2021 USMC) Spotter Radio Pack";
	class TransportItems
	{
		item_xx(lerca_1200_black,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShellGreen,1);
		mag_xx(SmokeShell,1);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
};
*/

//USMC Custom Mech Crew Commander Pack
class USMC_SOR_Mech_Radio_M : tf_rt1523g_bwmod
{
	displayName = "(2021 USMC) Commander Radio Pack";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,1);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
	};
};

//USMC Custom Engineer Repair Pack
class USMC_SOR_Eng_Repair_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Engi Repair Pack";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(ACE_wirecutter,1);
		item_xx(Toolkit,1);
	};
};

//USMC Custom Engineer Ordanance Pack
class USMC_SOR_OrdanancePack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Engi Ordanance Pack";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_Clacker,1);
		item_xx(rhsusf_m112_mag,4);
	};
};

//USMC Custom Engineer Combat Pack
class USMC_SOR_CombatPack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Combat Pack";
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,6);
		mag_xx(HandGrenade,2);
	};
	class TransportItems
	{
		item_xx(rhsusf_acc_SpecterDR_A_3d,1);
	};
};

//USMC Custom JTAC Pack
class USMC_SOR_JTAC_Pack_M : tf_rt1523g_big_bwmod
{
	displayName = "(2021 USMC) Viper JTAC Radio";
	mass = 10;
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,8);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShellYellow,2);
	};
};

//USMC Viper Scuba
class USMC_SOR_Viper_Scuba_M : B_Carryall_oli
{
	displayName = "(2021 USMC) Viper Scuba Pack";
	maximumLoad = 400;
	class TransportItems
	{
		item_xx(G_Bandanna_oli,1);
		item_xx(ACE_CableTie,3);
		item_xx(ACE_MapTools,1);
		item_xx(ACE_Flashlight_XL50,1);
	    item_xx(30Rnd_556x45_Stanag,4);
		item_xx(HandGrenade,1);
		item_xx(SmokeShellGreen,2);
		item_xx(SmokeShellRed,2);
		item_xx(SmokeShell,2);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

//USMC Viper M32 Pack
class USMC_SOR_M32_Pack_M : B_AssaultPack_rgr
{
	displayName = "(2021 USMC) Viper M32 Ammo";
	class TransportMagazines
	{
		mag_xx(rhsusf_mag_6Rnd_M714_white,2);
		mag_xx(rhsusf_mag_6Rnd_M713_red,2);
	};
};

//USMC M320 GLM Pack
class USMC_SOR_M320_Pack_M : B_AssaultPack_rgr
{
	displayName = "(2021 USMC) Viper M320 Ammo";
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,5);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
	};
};

////////////////////////////////////////////////////////////////Desert Backpacks////////////////////////////////////////////////////////////////

//USMC Medic Pack
class USMC_SOR_Medic_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Medic Pack [D]";
	class TransportMagazines
	{
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,4);
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//USMC Parajumper Pack
class USMC_SOR_PJMedicPack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Parajumper Pack [D]";
	class TransportMagazines
	{
		mag_xx(SmokeShell,5);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
	};
};

//USMC Rifleman Pack
class USMC_SOR_Rifleman_SPAR16S_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Rifleman Pack (M27IAR) [D]";
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6);
	};
};

//USMC Rilfeman Ammobearer Pack
class USMC_SOR_Rifleman_M240_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Rifleman Pack (M240G) [D]";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51_m62_tracer,2);
	};
};

//USMC SAW Pack
class USMC_SOR_SPAR16S_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) M27IAR Ammo Pack [D]";
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag,6);
	};
};

//USMC LMG Pack
class USMC_SOR_M240_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) M240G Ammo Pack [D]";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51_m62_tracer,1);
	};
};

//USMC Repair Pack With Toolkit
class USMC_SOR_Repair_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Repair Pack [D]";
	class TransportItems
	{
		item_xx(Toolkit,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
	};
};

//USMC Custom Grenadier Pack
class USMC_SOR_GD_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Grednadier Pack [D]";
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,5);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
	};
};

//USMC Custom RTO Pack
class USMC_SOR_RTO_Pack_D_M : tf_rt1523g_rhs
{
	displayName = "(2021 USMC) RTO Radio Pack [D]";
	class TransportMagazines
	{
		mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,5);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,5);
	};
};

//USMC Custom Rifleman AT Pack
class USMC_SOR_RFLAT_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Empty Pack [D]";
	class TransportMagazines{};
};

//USMC Custom Sniper Pack
class USMC_SOR_Sniper_Camo_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Sniper Pack [D]";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,4);
		item_xx(ACE_bloodIV_500,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,2);
		mag_xx(SmokeShellGreen,1);
		mag_xx(SmokeShell,2);
	};
};

/*
//USMC Spotter Pack
class USMC_SOR_Spotter_Radio_D_M : tf_rt1523g_rhs
{
	displayName = "(2021 USMC) Spotter Radio Pack [D]";
	class TransportItems
	{
		item_xx(lerca_1200_black,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShellGreen,1);
		mag_xx(SmokeShell,1);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
};
*/

//USMC Custom Mech Crew Commander Pack
class USMC_SOR_Mech_Radio_D_M : tf_rt1523g_rhs
{
	displayName = "(2021 USMC) Commander Radio Pack [D]";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,1);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
	};
};

//USMC Custom Engineer Repair Pack
class USMC_SOR_Eng_Repair_Pack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Engi Repair Pack [D]";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(ACE_wirecutter,1);
		item_xx(Toolkit,1);
	};
};

//USMC Custom Engineer Ordanance Pack
class USMC_SOR_OrdanancePack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Engi Ordanance Pack [D]";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_Clacker,1);
		item_xx(rhsusf_m112_mag,4);
	};
};

//USMC Custom Engineer Combat Pack
class USMC_SOR_CombatPack_D_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(2021 USMC) Combat Pack [D]";
	class TransportMagazines
	{
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
		mag_xx(30Rnd_556x45_Stanag,6);
		mag_xx(HandGrenade,2);
	};
	class TransportItems
	{
		item_xx(rhsusf_acc_SpecterDR_A_3d,1);
	};
};

//USMC Custom JTAC Pack
class USMC_SOR_JTAC_Pack_D_M : tf_rt1523g_big_bwmod_tropen
{
	displayName = "(2021 USMC) Viper JTAC Radio [D]";
	mass = 10;
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,8);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShellYellow,2);
	};
};

//USMC Viper Scuba
class USMC_SOR_Viper_Scuba_D_M : B_Carryall_cbr
{
	displayName = "(2021 USMC) Viper Scuba Pack [D]";
	maximumLoad = 400;
	class TransportItems
	{
		item_xx(G_Bandanna_oli,1);
		item_xx(ACE_CableTie,3);
		item_xx(ACE_MapTools,1);
		item_xx(ACE_Flashlight_XL50,1);
	    item_xx(30Rnd_556x45_Stanag,4);
		item_xx(HandGrenade,1);
		item_xx(SmokeShellGreen,2);
		item_xx(SmokeShellRed,2);
		item_xx(SmokeShell,2);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};

//USMC Viper M32 Pack
class USMC_SOR_M32_Pack_D_M : B_AssaultPack_cbr
{
	displayName = "(2021 USMC) Viper M32 Ammo [D]";
	class TransportMagazines
	{
		mag_xx(rhsusf_mag_6Rnd_M714_white,2);
		mag_xx(rhsusf_mag_6Rnd_M713_red,2);
	};
};

//USMC M320 GLM Pack
class USMC_SOR_M320_Pack_D_M : B_AssaultPack_cbr
{
	displayName = "(2021 USMC) Viper M320 Ammo [D]";
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,5);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
	};
};




////////////////////////////////////////////////////////////////ILBE MOD RADIOS////////////////////////////////////////////////////////////////

//USMC Custom RTO Pack
class USMC_SOR_RTO_Pack_ILBE : tfw_ilbe_coy
{
	displayName = "(2021 USMC) RTO ILBE Pack";
	class TransportItems
	{
        item_xx(tfw_whip,1)
        item_xx(tfw_rf3080Item,1)
	};
	class TransportMagazines
	{
		mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeYellow_Grenade_shell,3);
	};
};

/*
//USMC Spotter Pack
class USMC_SOR_Spotter_Radio_ILBE : tfw_ilbe_blade_coy
{
	displayName = "(2021 USMC) Spotter ILBE Pack";
	class TransportItems
	{
		item_xx(lerca_1200_black,1);
	};
	class TransportMagazines
	{
		mag_xx(SmokeShellGreen,1);
		mag_xx(SmokeShell,1);
		mag_xx(30Rnd_556x45_Stanag,4);
	};
};
*/

//USMC Custom Mech Crew Commander Pack
class USMC_SOR_Mech_Radio_ILBE : tfw_ilbe_dd_coy
{
	displayName = "(2021 USMC) Commander ILBE Pack";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,1);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShell,2);
	};
};

//USMC Custom JTAC Pack
class USMC_SOR_JTAC_Pack_ILBE : tfw_ilbe_coy
{
	displayName = "(2021 USMC) Viper ILBE Radio";
	class TransportItems
	{
        item_xx(tfw_whip,1)
        item_xx(tfw_rf3080Item,1)
	};
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,5);
	};
};