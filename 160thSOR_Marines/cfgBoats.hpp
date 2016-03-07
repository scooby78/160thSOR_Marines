/*
	Name: 160th SOR Mod Marines
	Author: Scooby/Snapage
	Date: 26/02/16
	Description: cfgBoats.hpp
*/

	class B_Boat_Armed_01_minigun_F;
	class B_Boat_Transport_01_F;

class SOR_B_Boat_Armed_01_minigun_F : B_Boat_Armed_01_minigun_F
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Boat";
		class TransportItems {};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};
	
class SOR_B_Boat_Transport_01_F : B_Boat_Transport_01_F
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Boat";
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};
	

