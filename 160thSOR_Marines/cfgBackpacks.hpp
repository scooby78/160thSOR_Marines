/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 07/03/16
	Description: cfgBackpacks.hpp
*/

//Call base backpacks
class tf_rt1523g_rhs;
class tf_anprc155_coyote;
class B_Kitbag_cbr;

//USMC Medic Pack
class USMC_SOR_Medic_Pack_M : B_Kitbag_cbr
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
class USMC_SOR_PJMedicPack_M : B_Kitbag_cbr
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
class USMC_SOR_Rifleman_SPAR16S_Pack_M : B_Kitbag_cbr
{
	displayName = "(2021 USMC) Rifleman Pack (SPAR16S)";
	class TransportMagazines
	{
		mag_xx(150Rnd_556x45_Drum_Mag_Tracer_F,4);
	};
};

//USMC Rilfeman Ammobearer Pack
class USMC_SOR_Rifleman_M240_Pack_M : B_Kitbag_cbr
{
	displayName = "(2021 USMC) Rifleman Pack (M240G)";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51_m62_tracer,2);
	};
};

//USMC SPAR16S Pack
class USMC_SOR_SPAR16S_Pack_M : B_Kitbag_cbr
{
	displayName = "(2021 USMC) SPAR16S Ammo Pack";
	class TransportMagazines
	{
		mag_xx(150Rnd_556x45_Drum_Mag_Tracer_F,3);
	};
};

//USMC M240 Pack
class USMC_SOR_M240_Pack_M : B_Kitbag_cbr
{
	displayName = "(2021 USMC) M240G Ammo Pack";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51_m62_tracer,1);
	};
};

//USMC Repair Pack With Toolkit
class USMC_SOR_Repair_Pack_M : B_Kitbag_cbr
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
class USMC_SOR_GD_Pack_M : B_Kitbag_cbr
{
	displayName = "(2021 USMC) Grednadier Pack";
	class TransportMagazines
	{
		mag_xx(3Rnd_HE_Grenade_shell,2);
		mag_xx(3Rnd_SmokeRed_Grenade_shell,2);
		mag_xx(3Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(3Rnd_Smoke_Grenade_shell,2);
	};
};

//USMC Custom RTO Pack
class USMC_SOR_RTO_Pack_M : tf_rt1523g_rhs
{
	displayName = "(2021 USMC) RTO Radio Pack";
	class TransportMagazines
	{
		mag_xx(3Rnd_SmokeRed_Grenade_shell,3);
		mag_xx(3Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(3Rnd_SmokeYellow_Grenade_shell,2);
	};
};

//USMC Custom Rifleman AT Pack
class USMC_SOR_RFLAT_Pack_M : B_Kitbag_cbr
{
	displayName = "(2021 USMC) Empty Pack";
	class TransportMagazines{};
};

//USMC Custom Sniper Pack
class USMC_SOR_Sniper_Camo : B_Kitbag_cbr
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

//USMC Spotter Pack
class USMC_SOR_Spotter_Radio : tf_rt1523g_rhs
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

//USMC Custom Mech Crew Commander Pack
class USMC_SOR_Mech_Radio_M : tf_rt1523g_rhs
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
class USMC_SOR_Eng_Repair_Pack_M : B_Kitbag_cbr
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
class USMC_SOR_OrdanancePack_M : B_Kitbag_cbr
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
class USMC_SOR_CombatPack_M : B_Kitbag_cbr
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
class USMC_SOR_JTAC_Pack_M : tf_anprc155_coyote
{
	displayName = "(2021 USMC) JTAC Radio Pack";
	class TransportMagazines
	{
		mag_xx(SmokeShellRed,8);
		mag_xx(SmokeShellGreen,2);
		mag_xx(SmokeShellYellow,2);
	};
};