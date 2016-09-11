int __fastcall sub_811D584(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  __int16 v3; // r0@3

  v1 = a1;
  v2 = *(_WORD *)(a1 + 20);
  if ( !*(_WORD *)(a1 + 20) || (*(_WORD *)(a1 + 20) = v2 - 1, !((v2 - 1) << 16)) )
  {
    *(_WORD *)(a1 + 20) = *(_WORD *)(a1 + 10);
    v3 = *(_WORD *)(a1 + 16) + *(_WORD *)(a1 + 22);
    *(_WORD *)(v1 + 22) = v3;
    if ( v3 > 16 )
      *(_WORD *)(v1 + 22) = 16;
    BlendPalettes(0xFFFFFFFF, *(_BYTE *)(v1 + 22), 11627);
  }
  if ( (signed int)*(_WORD *)(v1 + 22) > 15 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 20) = *(_WORD *)(v1 + 12);
  }
  return 0;
}
