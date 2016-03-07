/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby/Snapage
	Date: 28/12/15 
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

class rhsusf_m1a1fep_wd;

//M1A1	
class SOR_rhsusf_m1a1fep_wd : rhsusf_m1a1fep_wd
{
	faction = SOR_Faction_M;
	vehicleclass = "SOR_Vehicles";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,2)
		weap_xx(rhs_weap_m4a1_carryhandle_grip,2)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
		mag_xx(rhs_200rnd_556x45_M_SAW,4)
		mag_xx(rhsusf_100Rnd_762x51,4)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_D,1)			
	};
};



	
	
	
	