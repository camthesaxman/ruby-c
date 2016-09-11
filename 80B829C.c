int ContestEffect_25()
{
  signed int v0; // r4@1
  signed int v1; // r5@2
  unsigned __int8 v2; // r0@5
  char v3; // r1@5
  int v5; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( *(_BYTE *)(v20192E1 + 0x20192D0) != 3 )
  {
    v1 = 0;
    do
    {
      if ( *(_BYTE *)(v20192E1 + 0x20192D0) + 1 == *(_BYTE *)(v1 + 33657552) )
      {
        if ( sub_80B90C0((unsigned __int8)v1) << 24 )
        {
          sub_80B157C(v1);
          v2 = v1;
          v3 = 10;
        }
        else
        {
          v2 = v1;
          v3 = 60;
        }
        sub_80B13EC(v2, v3);
        v0 = 1;
      }
      ++v1;
    }
    while ( v1 <= 3 );
  }
  sub_80B13EC(v20192E1, 9);
  if ( !v0 )
    sub_80B1404(v20192E1, 54);
  return v5;
}
