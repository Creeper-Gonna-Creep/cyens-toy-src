#include "simulation/ElementCommon.h"
#include "../CyensTools.h"

static int update(UPDATE_FUNC_ARGS);

void Element::Element_BACT()
{
	Identifier = "DEFAULT_PT_BACT";
	Name = "BACT";
	FullName = "Bacteria";
	Colour = PIXPACK(0xECCE89);
	MenuVisible = 1;
	MenuSection = SC_BIOLOGY;
	Enabled = 1;

	Advection = 0.7f;
	AirDrag = 0.02f * CFDS;
	AirLoss = 0.96f;
	Loss = 0.80f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f * CFDS;
	Falldown = 1;

	Flammable = 1;
	Explosive = 0;
	Meltable = 0;
	Hardness = 30;

	Weight = 80;

	HeatConduct = 70;
	Description = "Bacteria, grows when warm (~40C).";

	Properties = TYPE_PART;

	LowPressure = -10;
	LowPressureTransition = PT_ENSP;
	HighPressure = 100;
	HighPressureTransition = PT_ENSP;
	LowTemperature = 263.15f;
	LowTemperatureTransition = PT_ENSP;
	HighTemperature = 398.15f;
	HighTemperatureTransition = PT_ENSP;

	Update = &update;
}

static int update(UPDATE_FUNC_ARGS)
{
	int r, rx, ry;
	int PT_DYST;
	for (int j = 0; j < 2; j++)
		for (rx = (j ? -1 : -3); rx < (j ? 2 : 4); rx++)
				if (j && TYP(r) == PT_DYST && RNG::Ref().chance(1, 6) && !sim->legacy_enable)

					{ 	sim->create_part(j, x, 1, PT_SUGR && parts[ID(r)].tmp == SUGR_GLUCOSE);
						sim->create_part(j, 1, y, PT_CO2);
						sim->kill_part(PT_DYST);
				
				
					}
	if (parts[i].temp > 303 && parts[i].temp < 313.15) {
		sim->create_part(-1, x + RNG::Ref().between(-1, 1), y + RNG::Ref().between(-1, 1), PT_BACT);
	}
	return 0;
}
