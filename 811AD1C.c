int __fastcall sub_811AD1C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3

  v1 = a1;
  v2 = *(_WORD *)(a1 + 10);
  if ( *(_WORD *)(v1 + 10) )
  {
    *(_WORD *)(v1 + 10) = v2 - 1;
  }
  else
  {
    *(_WORD *)(v1 + 10) = 4;
    v3 = *(_WORD *)(v1 + 12) + 1;
    *(_WORD *)(v1 + 12) = v3;
    if ( v3 == 10 )
      BeginNormalPaletteFade(-1, -1, 0, 0x10u, 0);
    v400004C = 17 * (*(_WORD *)(v1 + 12) & 0xF);
    if ( (signed int)*(_WORD *)(v1 + 12) > 14 )
      ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
