int __fastcall sub_811B3EC(int a1)
{
  int v1; // r4@1
  int v2; // r0@4
  unsigned __int8 v3; // r0@7
  __int16 v4; // r1@8

  v1 = a1;
  v200C000 = 0;
  if ( (signed int)*(_WORD *)(a1 + 12) <= 1023 )
    *(_WORD *)(a1 + 12) += 128;
  if ( *(_WORD *)(a1 + 10) )
  {
    v2 = *(_WORD *)(a1 + 10) - (*(_WORD *)(a1 + 12) << 16 >> 24);
    *(_WORD *)(v1 + 10) = v2;
    if ( v2 & 0x8000 )
      *(_WORD *)(v1 + 10) = 0;
  }
  sub_811D764(word_3004DE0, 120, 80, *(_WORD *)(v1 + 10));
  if ( !*(_WORD *)(v1 + 10) )
  {
    v40000BA &= 0xC5FFu;
    v40000BA &= 0x7FFFu;
    sub_811D6D4(v40000BA);
    v3 = FindTaskIdByFunc((int)sub_811B0F0);
    DestroyTask(v3);
  }
  v4 = *(_WORD *)(v1 + 14);
  if ( !*(_WORD *)(v1 + 14) )
  {
    *(_WORD *)(v1 + 14) = 1;
    SetVBlankCallback((int)sub_811B54C);
  }
  ++v200C000;
  return 0;
}
