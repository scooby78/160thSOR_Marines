/*
	Name: 160th SOR Mod Marines
	Author: Scooby/Snapage
	Date: 26/02/16
	Description: cfgBoats.hpp
*/

	class B_Boat_Armed_01_minigun_F;
	class I_C_Boat_Transport_02_F;
	class rhsusf_mkvsoc;
	class C_Scooter_Transport_01_F;
	class B_Boat_Transport_01_F;
	class B_SDV_01_F;

class SOR_USMC_B_Boat_Armed_01_minigun_F : B_Boat_Armed_01_minigun_F
	{
		faction = SOR_Faction_M;
		displayName = "Riverine SOC-R";
		vehicleclass = "SOR_Boat";
		class TransportItems {item_xx(ACE_FieldDressing,10);};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_USMC_I_C_Boat_Transport_02_F : I_C_Boat_Transport_02_F
	{
		faction = SOR_Faction_M;
		displayName = "Fast Attack RHIB";
		side = 1
		vehicleclass = "SOR_Boat";
		class TransportItems{item_xx(ACE_FieldDressing,10);};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_USMC_rhsusf_mkvsoc : rhsusf_mkvsoc
	{
		faction = SOR_Faction_M;
		vehicleclass = "SOR_Boat";
		class TransportItems{item_xx(ACE_FieldDressing,15);};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_USMC_C_Scooter_Transport_01_F : C_Scooter_Transport_01_F
	{
		faction = SOR_Faction_M;
		displayName = "Boatercycle";
        maxSpeed = 100; //was 80
	    enginePower = 65; //was 58.5
		side = 1
		vehicleclass = "SOR_Boat";
		class TransportItems{item_xx(ACE_FieldDressing,2);};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
	};

class SOR_USMC_B_Boat_Transport_01_F : B_Boat_Transport_01_F
    {
	    faction = SOR_Faction_M;
	    displayName = "Tactical RHIB";
	    vehicleclass = "SOR_Boat";
	    driverCanEject = 0; //was 1
	    cargoCanEject = 0; //was 1
	    maxSpeed = 70; //was 70
	    enginePower = 40; //was 18.5
	    engineShiftY = 0; //was 0
	    waterResistance = 10; //was 10
	    waterResistanceCoef = 0.01; // was 0.01
	    waterLinearDampingCoefX = 2; //was 2
	    rudderForceCoef = 0.08; //was 0.08
	    rudderForceCoefAtMaxSpeed = 0.001; //was 0.001
	    class TransportItems
	{
		item_xx(G_Diving,3)
		item_xx(U_B_Wetsuit,3)
		item_xx(V_RebreatherB,3)
	};
	    class TransportWeapons{};
	    class TransportMagazines{};
	    class TransportBackpacks{};
    };

    class SOR_USMC_B_SDV_01_F : B_SDV_01_F
    {
	    faction = SOR_Faction_M;
	    vehicleclass = "SOR_Boat";
	    displayName = "SEAL Delivery Vehicle";
	    class TransportItems
	{
		item_xx(G_Diving,4)
		item_xx(U_B_Wetsuit,4)
		item_xx(V_RebreatherB,4)
	};
	    class TransportWeapons{};
	    class TransportMagazines{};
	    class TransportBackpacks{};
    };
