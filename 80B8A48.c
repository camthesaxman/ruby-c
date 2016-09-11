int ContestEffect_37()
{
  signed int v0; // r5@2
  signed int v1; // r6@2
  int v2; // r1@4
  int v3; // r0@4
  int v5; // [sp+10h] [bp-4h]@0

  if ( *(_BYTE *)(v20192E1 + 0x20192D0) )
  {
    v0 = 0;
    v1 = 33657440;
    do
    {
      if ( *(_BYTE *)(v20192E1 + 0x20192D0) - 1 == *(_BYTE *)(v0 + 33657552) )
      {
        v2 = *(_WORD *)(28 * v20192E1 + 0x2019262);
        v3 = *(_WORD *)(v1 + 2);
        if ( v2 <= v3 )
        {
          if ( v2 < v3 )
          {
            *(_WORD *)(28 * v20192E1 + 0x2019262) = 0;
            sub_80B13EC(v20192E1, 34);
          }
        }
        else
        {
          *(_WORD *)(28 * v20192E1 + 0x2019262) = 2 * v2;
          sub_80B13EC(v20192E1, 33);
        }
      }
      v1 += 28;
      ++v0;
    }
    while ( v0 <= 3 );
  }
  return v5;
}
