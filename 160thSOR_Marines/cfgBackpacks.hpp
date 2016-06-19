/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 07/03/16
	Description: cfgBackpacks.hpp
*/

//Call base backpacks
class tf_rt1523g_rhs;
class rhsusf_assault_eagleaiii_coy;
class B_Kitbag_cbr;

//Custom Medic Pack
class SOR_Medic_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Medic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,8);
		mag_xx(rhs_mag_m18_green,4);
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//Custom Parajumper Pack
class SOR_PJMedicPack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Paramedic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,5);
		mag_xx(rhs_mag_m18_green,2);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
	};
};

//Custom Rifleman Pack
class SOR_Rifleman_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Rifleman (M249)";
	class TransportMagazines
	{
		mag_xx(rhs_200rnd_556x45_M_SAW,1);
	};
};

//Custom Rilfeman Ammobearer Pack
class SOR_Rifleman_Ammo_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Rifleman (M240)";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51,2);
	};
};

//Custom m249 Pack
class SOR_M249_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert M249";
	class TransportMagazines
	{
		mag_xx(rhs_200rnd_556x45_M_SAW,1);
	};
};

// Custom m240 Pack
class SOR_M240_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert M240";
	class TransportMagazines
	{
		mag_xx(rhsusf_100Rnd_762x51,3);
	};
};

//Repair Pack With Toolkit
class SOR_Repair_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Repair";
	class TransportItems
	{
		item_xx(Toolkit,1);

	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Custom Grenadier Pack
class SOR_GD_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert GD";
	class TransportMagazines
	{
		mag_xx(rhs_mag_M433_HEDP,10);
		mag_xx(rhs_mag_M441_HE,5);
		mag_xx(rhs_mag_m713_Red,5);
		mag_xx(rhs_mag_m715_Green,2);
		mag_xx(rhs_mag_m67,2);
		mag_xx(rhs_mag_m714_White,5);
	};
};

//Custom RTO Pack
class SOR_RTO_Pack_M : tf_rt1523g_rhs
{
	displayName = "(RHS USMC) Pack Desert Radio";
	class TransportMagazines
	{
		mag_xx(rhs_mag_m713_Red,8);
		mag_xx(rhs_mag_m715_Green,2);
		mag_xx(rhs_mag_m716_yellow,2);
	};
};

//Custom Rifleman AT Pack
class SOR_RFLAT_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert RFLAT";
	class TransportMagazines
	{
		mag_xx(MAAWS_HEAT,1)
		mag_xx(MAAWS_HEDP,1)
	};
};

//Custom Sniper Pack
class SOR_Sniper_Camo : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Camo Sniper";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,4);
		item_xx(ACE_bloodIV_500,1);
	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_red,2);
		mag_xx(rhs_mag_m18_green,1);
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Custom Spotter Pack
class SOR_Spotter_Radio : tf_rt1523g_rhs
{
	displayName = "(RHS USMC) Pack Radio Spotter";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_green,1);
		mag_xx(rhs_mag_an_m8hc,1);
		mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,4);
	};
};

//Custom Mech Crew Commander Pack
class SOR_Mech_Radio_M : tf_rt1523g_rhs
{
	displayName = "(RHS USMC) Pack Radio Commander";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_red,1);
		mag_xx(rhs_mag_m18_green,2);
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Custom Engineer Repair Pack
class SOR_Eng_Repair_Pack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Eng Repair";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(ACE_wirecutter,1);
		item_xx(Toolkit,1);
	};
};

//Custom Engineer Ordanance Pack
class SOR_OrdanancePack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Ordanance";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_Clacker,1);
		item_xx(rhsusf_m112_mag,4);
	};
};

//Custom Engineer Combat Pack
class SOR_CombatPack_M : rhsusf_assault_eagleaiii_coy
{
	displayName = "(RHS USMC) Pack Desert Combat";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,2);
		mag_xx(rhs_mag_m18_green,2);
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6);
		mag_xx(rhs_mag_m67,2);
	};
	class TransportItems
	{
		item_xx(rhsusf_acc_ACOG,1)
	};
};





















//Vanilla Medic Pack
class Vanilla_SOR_Medic_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Medic Pack";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,8);
		mag_xx(rhs_mag_m18_green,4);
	};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//Vanilla Parajumper Pack
class Vanilla_SOR_PJMedicPack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Parajumper Pack";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,5);
		mag_xx(rhs_mag_m18_green,2);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
	};
};

//Vanilla Rifleman Pack
class Vanilla_SOR_Rifleman_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Rifleman Pack (MXSW)";
	class TransportMagazines
	{
		mag_xx(100Rnd_65x39_caseless_mag,4);
	};
};

//Vanilla Rilfeman Ammobearer Pack
class Vanilla_SOR_Rifleman_Ammo_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Rifleman Pack (SPMG)";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,2);
	};
};

//Vanilla MXSW Pack
class Vanilla_SOR_MXSW_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) MXSW Ammo Pack";
	class TransportMagazines
	{
		mag_xx(100Rnd_65x39_caseless_mag,4);
	};
};

//Vanilla SPMG Pack
class Vanilla_SOR_SPMG_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) SPMG Ammo Pack";
	class TransportMagazines
	{
		mag_xx(130Rnd_338_Mag,3);
	};
};

//Vanilla Repair Pack With Toolkit
class Vanilla_SOR_Repair_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Repair Pack";
	class TransportItems
	{
		item_xx(Toolkit,1);

	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Vanilla Custom Grenadier Pack
class Vanilla_SOR_GD_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Grednadier Pack";
	class TransportMagazines
	{
		mag_xx(rhs_mag_M433_HEDP,10);
		mag_xx(rhs_mag_M441_HE,5);
		mag_xx(rhs_mag_m713_Red,5);
		mag_xx(rhs_mag_m715_Green,2);
		mag_xx(rhs_mag_m67,2);
		mag_xx(rhs_mag_m714_White,5);
	};
};

//Vanilla Custom RTO Pack
class Vanilla_SOR_RTO_Pack_M : tf_rt1523g_rhs
{
	displayName = "(V USMC) RTO Radio Pack";
	class TransportMagazines
	{
		mag_xx(rhs_mag_m713_Red,8);
		mag_xx(rhs_mag_m715_Green,2);
		mag_xx(rhs_mag_m716_yellow,2);
	};
};

//Vanilla Custom Rifleman AT Pack
class Vanilla_SOR_RFLAT_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Empty Pack";
	class TransportMagazines
	{
		mag_xx(MAAWS_HEAT,1)
		mag_xx(MAAWS_HEDP,1)
	};
};

//Vanilla Custom Sniper Pack
class Vanilla_SOR_Sniper_Camo : B_Kitbag_cbr
{
	displayName = "(V USMC) Sniper Pack";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,4);
		item_xx(ACE_bloodIV_500,1);
	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_red,2);
		mag_xx(rhs_mag_m18_green,1);
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Vanilla Spotter Pack
class Vanilla_SOR_Spotter_Radio : tf_rt1523g_rhs
{
	displayName = "(V USMC) Spotter Radio Pack";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_green,1);
		mag_xx(rhs_mag_an_m8hc,1);
		mag_xx(30Rnd_65x39_caseless_mag,4);
	};
};

//Vanilla Custom Mech Crew Commander Pack
class Vanilla_SOR_Mech_Radio_M : tf_rt1523g_rhs
{
	displayName = "(V USMC) Commander Radio Pack";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_red,1);
		mag_xx(rhs_mag_m18_green,2);
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Vanilla Custom Engineer Repair Pack
class Vanilla_SOR_Eng_Repair_Pack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Engi Repair Pack";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(ACE_wirecutter,1);
		item_xx(Toolkit,1);
	};
};

//Vanilla Custom Engineer Ordanance Pack
class Vanilla_SOR_OrdanancePack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Engi Ordanance Pack";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_Clacker,1);
		item_xx(rhsusf_m112_mag,4);
	};
};

//Vanilla Custom Engineer Combat Pack
class Vanilla_SOR_CombatPack_M : B_Kitbag_cbr
{
	displayName = "(V USMC) Combat Pack";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,2);
		mag_xx(rhs_mag_m18_green,2);
		mag_xx(30Rnd_65x39_caseless_mag,6);
		mag_xx(rhs_mag_m67,2);
	};
	class TransportItems
	{
		item_xx(rhsusf_acc_ACOG,1)
	};
};