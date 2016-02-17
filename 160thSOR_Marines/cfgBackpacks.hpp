/*
	Name: 160th SOR Mod Marines
	Author: Scooby
	Date: 28/12/15
	cfgBackpacks.hpp
*/


	class B_Kitbag_Base;
	class B_Carryall_Base;
	class tf_rt1523g_big_rhs;
	class B_AssaultPack_mcamo;
	class B_AssaultPack_rgr;
	class tf_rt1523g_black; 
	class B_Kitbag_rgr;

/////////////////////////
//Custom Packs Woodland//
/////////////////////////
//Custom Medic Pack	
	class SOR_Medic_Pack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland Medic";
		class TransportMagazines
		{
			mag_xx(rhs_mag_an_m8hc,8);
			mag_xx(rhs_mag_m18_green,4);
			mag_xx(ACE_HandFlare_Green,1);
		};		
		class TransportItems
		{
			item_xx(ACE_FieldDressing,30);
			item_xx(ACE_morphine,10);
			item_xx(ACE_epinephrine,10);
		};
	};

//Custom Parajumper Pack		
	class SOR_PJMedicPack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland Paramedic";
		class TransportMagazines
		{
			mag_xx(rhs_mag_an_m8hc,5);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(ACE_HandFlare_Green,1);
		};
		class TransportItems
		{
			item_xx(ACE_bloodIV_500,6);
			item_xx(ACE_FieldDressing,30);
			item_xx(ACE_morphine,20);
			item_xx(ACE_epinephrine,20);
			item_xx(rhsusf_acc_ACOG,1)			
		};		
	};	
		
//Custom m249 Pack		
	class SOR_M249_Pack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland M249";
		class TransportMagazines
		{
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,2);
		};
	};
	
// Custom m240 Pack
	class SOR_M240_Pack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland M240";
		class TransportMagazines
		{
			mag_xx(rhsusf_100Rnd_762x51,3);
		};
	};
	
//Repair Pack With Toolkit	
	class SOR_Repair_Pack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland Repair";
		class TransportItems
		{
			item_xx(Toolkit,1);
		};	
	};
	
//Custom Grenadier Pack	
	class SOR_GD_Pack_AusCam : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland GD";
		class TransportMagazines
		{
			mag_xx(rhs_mag_M433_HEDP,15);
			mag_xx(rhs_mag_m713_Red,5);
			mag_xx(rhs_mag_m715_Green,2);
			mag_xx(rhs_mag_m67,2);
			mag_xx(rhs_mag_m714_Mhite,5);
		};	
	};	
	
//Custom RTO Pack
class RTO_Pack_M : tf_rt1523g_black 
		{		
			scope = 1;
			displayName = "Pack Woodland RTO";
			class TransportMagazines
			{	mag_xx(rhs_mag_m716_yellow,4)
				mag_xx(rhs_mag_m713_Red,10)
				mag_xx(rhs_mag_m715_Green,4)
				mag_xx(rhs_mag_m714_Mhite,4)
			};	
		};
		
//Custom Rifleman AT Pack	
	class SOR_RFLAT_Pack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland RFLAT";
		class TransportMagazines
		{
			mag_xx(MAAWS_HEAT,1)
			mag_xx(MAAWS_HEDP,1)
		};
	};
		
//Custom Rifleman Pack
	class SOR_Rifleman_Pack_M : B_AssaultPack_rgr
	{
		displayName = "Pack Woodland Rifleman";
		class TransportMagazines
		{
			mag_xx(rhsusf_200Rnd_556x45_soft_pouch,1);
			mag_xx(MAAWS_HEAT,1)
		};
	};




	











