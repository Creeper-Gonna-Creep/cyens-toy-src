#include "simulation/ElementCommon.h"

void Element::Element_ENSP()
{
	Identifier = "DEFAULT_PT_ENSP";
	Name = "ENSP";
	FullName = "Endospore";
	Colour = PIXPACK(0xBBA571);
	MenuVisible = 0;
	MenuSection = SC_POWDERS;
	Enabled = 1;

	Advection = 0.7f;
	AirDrag = 0.02f * CFDS;
	AirLoss = 0.96f;
	Loss = 0.80f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 1;

	Flammable = 20;
	Explosive = 0;
	Meltable = 0;
	Hardness = 30;

	Weight = 80;

	HeatConduct = 70;
	Description = "A endospore.";

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = 295.15;
	LowTemperatureTransition = PT_BACT;
	HighTemperature = 403.15f;
	HighTemperatureTransition = PT_DBAC;
}
