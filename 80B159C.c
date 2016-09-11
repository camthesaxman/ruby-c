int sub_80B159C()
{
  int v0; // r12@1
  signed int v1; // r4@1
  signed int v2; // r4@3
  int v3; // r2@4
  signed int v4; // r1@4
  int v5; // r2@8
  int v6; // r2@10
  int v7; // r3@17
  signed int v8; // r4@25
  signed int v9; // r3@25
  int v11; // [sp+0h] [bp-24h]@2
  char v12; // [sp+4h] [bp-20h]@2
  int v13; // [sp+20h] [bp-4h]@27

  v0 = 0;
  v1 = 0;
  do
  {
    *((_BYTE *)&v11 + v1) = *(_BYTE *)(v1 + 33785494);
    *(&v12 + v1++) = 0;
  }
  while ( v1 <= 3 );
  v2 = 0;
  do
  {
    v3 = 0;
    v4 = 33657440;
    while ( *(_BYTE *)(v4 + 25) != v2 )
    {
      v4 += 28;
      if ( ++v3 > 3 )
        goto _080B15E8;
    }
    *((_BYTE *)&v11 + v3) = v2;
    *(&v12 + v3) = 1;
_080B15E8:
    if ( v3 == 4 )
    {
      v5 = 0;
      if ( v12 || v2019279 != 255 )
      {
        while ( ++v5 <= 3 )
        {
          if ( !*(&v12 + v5) && *(_BYTE *)(28 * v5 + 0x2019279) == 255 )
          {
            v0 = (unsigned __int8)v5;
            v6 = v5 + 1;
            goto _080B163A;
          }
        }
      }
      else
      {
        v0 = 0;
        v6 = 1;
_080B163A:
        if ( v6 <= 3 )
        {
          v7 = 28 * v6;
          do
          {
            if ( !*(&v12 + v6)
              && *(_BYTE *)(v7 + 33657465) == 255
              && *(_BYTE *)(v0 + 33785494) > (unsigned int)*(_BYTE *)(v6 + 33785494) )
            {
              v0 = (unsigned __int8)v6;
            }
            v7 += 28;
            ++v6;
          }
          while ( v6 <= 3 );
        }
      }
      *((_BYTE *)&v11 + v0) = v2;
      *(&v12 + v0) = 1;
    }
    ++v2;
  }
  while ( v2 <= 3 );
  v8 = 0;
  v9 = 33657456;
  do
  {
    *(_BYTE *)(v8 + 33657552) = *((_BYTE *)&v11 + v8);
    *(_BYTE *)(v9 + 9);
    *(_BYTE *)(v9 + 9) = -1;
    *(_BYTE *)v9 &= 0x3Fu;
    *(_BYTE *)(v8 + 33785494) = *((_BYTE *)&v11 + v8);
    v9 += 28;
    ++v8;
  }
  while ( v8 <= 3 );
  return v13;
}
