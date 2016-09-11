int ContestEffect_45()
{
  int v0; // r7@1
  signed int v1; // r5@1
  int v2; // r6@1
  signed __int16 v3; // r0@4
  int v5; // [sp+10h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) > (unsigned int)*(_BYTE *)(v1 + 33657552) )
    {
      if ( (signed int)*(_WORD *)(v2 + 33657442) <= 0 )
      {
        v3 = 10;
      }
      else
      {
        v20192D4 = *(_WORD *)(v2 + 33657442) / 2;
        v3 = sub_80B9268(v20192D4);
      }
      v20192D4 = v3;
      v20192D8 = v1;
      v20192D9 = -1;
      if ( sub_80B9120() << 24 )
        v0 = (v0 + 1) & 0xFF;
    }
    v2 += 28;
    ++v1;
  }
  while ( v1 <= 3 );
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  sub_80B13EC(v20192E1, 48);
  return v5;
}
