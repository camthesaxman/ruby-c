int __fastcall sub_8119898(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r0@1
  char *v6; // r0@4
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = _floatsisf(++*(_WORD *)(a1 + 48));
  v3 = v2;
  v4 = _mulsf3(v2, 1025490551);
  v5 = _mulsf3(v4, v3);
  *(_WORD *)(v1 + 38) = _fixsfsi(v5);
  v2019034 = gUnknown_083FA61E[(v2019001 - 1) / 2];
  if ( v2019001 <= 0x12u )
    ++v2019001;
  if ( (signed int)*(_WORD *)(v1 + 48) > 60 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_DWORD *)(v1 + 28) = sub_8119780;
    dword_2020020[17 * *(_WORD *)(v1 + 58)] = (int)sub_8119780;
    *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 58) + 48] = -2;
    v6 = &gSprites[68 * *(_WORD *)(v1 + 56) + 62];
    *v6 &= 0xFBu;
    dword_2020020[17 * *(_WORD *)(v1 + 56)] = (int)sub_81197D8;
    m4aSongNumStart(214);
  }
  return v8;
}
