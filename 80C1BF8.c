int DoTVShowPokemonNewsMassOutbreak()
{
  int v0; // r4@1
  _BYTE *v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  sub_80FBFB4(&gStringVar1, *(_BYTE *)(36 * v202E8CC + 0x2027E7C), 0);
  v1 = StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 12)]);
  TVShowDone(v1);
  StartMassOutbreak();
  box_related_two__2((int)*(&gUnknown_083D14BC + v20387E8));
  return v3;
}
