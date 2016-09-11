int DoTVShowPokemonAngler()
{
  int v0; // r4@1
  int v1; // r5@1
  int v2; // r0@4
  int v3; // r0@5
  int v5; // [sp+8h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v20387E8 = *(_BYTE *)(36 * v202E8CC + 0x2027E6E) >= (unsigned int)*(_BYTE *)(36 * v202E8CC + 0x2027E6F);
  v1 = v20387E8;
  if ( v20387E8 )
  {
    if ( v20387E8 == 1 )
    {
      sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E72));
      StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 4)]);
      v3 = sub_80BF088(2u, *(_BYTE *)(v0 + 2));
      TVShowDone(v3);
    }
  }
  else
  {
    sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E72));
    StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 4)]);
    v2 = sub_80BF088(2u, *(_BYTE *)(v0 + 3));
    TVShowDone(v2);
  }
  box_related_two__2((int)*(&gUnknown_083D15EC + v1));
  return v5;
}
