#include "simulation/ElementCommon.h"

void Element::Element_DBAC()
{
	Identifier = "DEFAULT_PT_DBAC";
	Name = "DBAC";
	FullName = "Dead Bacteria";
	Colour = PIXPACK(0xBBB0A0);
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
	Description = "Dead Bacteria.";

	Properties = TYPE_PART;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITL;
	HighTemperatureTransition = NT;
}

static int update(UPDATE_FUNC_ARGS) {
	if (parts[i].temp > 303 && parts[i].temp < 313.15)
		sim->create_part(-1, x + RNG::Ref().between(-1, 1), y + RNG::Ref().between(-1, 1), PT_GAS);{
	}
	return 0;
}
