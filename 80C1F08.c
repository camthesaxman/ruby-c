int DoTVShowTheWorldOfMasters()
{
  int v0; // r4@1
  int v1; // r5@1
  _BYTE *v2; // r0@9
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 == 1 )
  {
    StringCopy(&gStringVar1, &gSpeciesNames[11 * *(_WORD *)(36 * v202E8CC + 0x2027E74)]);
    v20387E8 = 2;
  }
  else if ( (signed int)v20387E8 > 1 )
  {
    if ( v20387E8 == 2 )
    {
      sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E77));
      sub_80FBFB4(&gStringVar2, *(_BYTE *)(v0 + 10), 0);
      v2 = StringCopy(&gStringVar3, &gSpeciesNames[11 * *(_WORD *)(v0 + 4)]);
      TVShowDone(v2);
    }
  }
  else if ( !v20387E8 )
  {
    sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E77));
    sub_80BF088(1u, *(_WORD *)(v0 + 6));
    sub_80BF088(2u, *(_WORD *)(v0 + 2));
    v20387E8 = 1;
  }
  box_related_two__2((int)*(&gUnknown_083D15F4 + v1));
  return v4;
}
