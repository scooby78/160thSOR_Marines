/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Scooby/Snapage
	Date: 28/12/15 
	Description: Only Armour units that are proven not "buggy" should be put in here.  Custom loadouts used.
*/

	class rhsusf_m1a1fep_wd;


//M2A3 (BUSK III)	
	class SOR_rhsusf_m1a1fep_wd : rhsusf_m1a1fep_wd
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Vehicles";
		class UserActions{};
		class TransportItems
		{
		pack_xx(SOR_Repair_Pack_D,1) 
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



	
	
	
	