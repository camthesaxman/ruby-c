int sub_8056670()
{
  _WORD *v0; // r5@1
  int v1; // r8@2
  int v2; // r6@2
  int v3; // r0@2
  int v4; // r12@3
  int v5; // r4@4
  _WORD *v6; // r2@6
  signed int v7; // r1@6
  int v9; // [sp+18h] [bp-4h]@0

  v0 = (_WORD *)33707880;
  if ( !sub_8056618() )
  {
    v1 = dword_3004870;
    v2 = v2025734;
    v3 = v2025736;
    if ( v2025736 < v2025736 + 14 )
    {
      v4 = v2025736 + 14;
      do
      {
        v5 = v3 + 1;
        if ( __OFSUB__(v2, v2 + 15) ^ 1 )
        {
          v6 = (_WORD *)(2 * v2 + 2 * v1 * v3 + 33724456);
          v7 = 15;
          do
          {
            *v6 = *v0;
            ++v0;
            ++v6;
            --v7;
          }
          while ( v7 );
        }
        ++v3;
      }
      while ( v5 < v4 );
    }
    sav2_mapdata_clear();
  }
  return v9;
}
