int ContestEffect_17()
{
  int v0; // r9@1
  int v1; // r8@1
  signed int v2; // r5@2
  int v3; // r7@2
  signed __int16 v4; // r0@5
  int v6; // [sp+18h] [bp-4h]@0

  v0 = 0;
  v1 = v20192E1;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      if ( *(_BYTE *)(v1 + 33657552) > (unsigned int)*(_BYTE *)(v2 + 33657552) )
      {
        v4 = *(_BYTE *)(v3 + 33657461) & 0x10 ? 50 : 10;
        v20192D4 = v4;
        v20192D8 = v2;
        v20192D9 = -1;
        if ( sub_80B9120() << 24 )
          v0 = (v0 + 1) & 0xFF;
      }
      v3 += 28;
      ++v2;
    }
    while ( v2 <= 3 );
  }
  sub_80B13EC(v20192E1, 48);
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  return v6;
}
