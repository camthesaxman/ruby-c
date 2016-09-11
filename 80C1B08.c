int DoTVShowPokemonFanClubOpinions()
{
  int v0; // r4@1
  int v1; // r5@1
  int v2; // r0@9
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( (signed int)v20387E8 > 3 )
  {
    if ( v20387E8 == 4 )
    {
      sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717873), *(_BYTE *)(36 * v202E8CC + 0x2027E79));
      v2 = sub_80EB3FC(&gStringVar3, *(_WORD *)(v0 + 30));
      TVShowDone(v2);
    }
  }
  else if ( (signed int)v20387E8 >= 1 )
  {
    sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717873), *(_BYTE *)(36 * v202E8CC + 0x2027E79));
    StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 2)]);
    sub_80EB3FC(&gStringVar3, *(_WORD *)(v0 + 28));
    v20387E8 = 4;
  }
  else if ( !v20387E8 )
  {
    sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717873), *(_BYTE *)(36 * v202E8CC + 0x2027E79));
    StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 2)]);
    sub_80C08FC(&gStringVar3, (_BYTE *)(v0 + 16), *(_BYTE *)(v0 + 14));
    v20387E8 = (*(_BYTE *)(v0 + 4) >> 4) + 1;
  }
  box_related_two__2((int)*(&gUnknown_083D14A8 + v1));
  return v4;
}
