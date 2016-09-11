int __fastcall sub_806A1E8(unsigned __int8 a1)
{
  char *v1; // r4@1
  int v2; // r7@1
  int v3; // r1@1
  unsigned __int8 v4; // r0@8
  signed int v5; // r6@9
  int v6; // r1@9
  __int16 v7; // r0@14
  __int16 v8; // r1@14
  __int16 v9; // r8@16
  __int16 v10; // r7@16
  signed __int16 *v11; // r5@16
  int v12; // r4@16
  signed int v13; // r6@16
  __int16 v15; // [sp+0h] [bp-1Ch]@1
  int v16; // [sp+2h] [bp-1Ah]@1
  int v17; // [sp+18h] [bp-4h]@20

  v1 = (char *)&unk_3004B28 + 40 * a1;
  PlayerGetDestCoords(&v15, &v16);
  v2 = (v2025739 | (v2025738 << 8)) & 0xFFFF;
  v3 = *((_WORD *)v1 + 1);
  if ( *((_WORD *)v1 + 1) )
  {
    if ( v3 == 1 && (*((_WORD *)v1 + 2) != v15 || *((_WORD *)v1 + 3) != (signed __int16)v16) )
    {
      *((_WORD *)v1 + 2) = v15;
      *((_WORD *)v1 + 3) = v16;
      v4 = MapGridGetMetatileBehaviorAt(v15, (signed __int16)v16);
      if ( MetatileBehavior_IsMuddySlope(v4) << 24 )
      {
        v5 = 4;
        v6 = (int)(v1 + 8);
        while ( *(_WORD *)v6 )
        {
          v6 += 6;
          v5 += 3;
          if ( v5 > 13 )
            goto _0806A2B8;
        }
        *(_WORD *)v6 = 32;
        *(_WORD *)(v6 + 2) = v15;
        *(_WORD *)(v6 + 4) = v16;
      }
    }
  }
  else
  {
    *(_WORD *)v1 = v2025739 | (unsigned __int16)(v2025738 << 8);
    *((_WORD *)v1 + 2) = v15;
    *((_WORD *)v1 + 3) = v16;
    *((_WORD *)v1 + 1) = 1;
    *((_WORD *)v1 + 4) = v3;
    *((_WORD *)v1 + 7) = v3;
    *((_WORD *)v1 + 10) = v3;
    *((_WORD *)v1 + 13) = v3;
  }
_0806A2B8:
  if ( v202E844 & 1 && v2 != *(_WORD *)v1 )
  {
    *(_WORD *)v1 = v2;
    v7 = v202E848;
    v8 = v202E84C;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  v9 = v7;
  v10 = v8;
  v11 = (signed __int16 *)(v1 + 8);
  v12 = (int)(v1 + 8);
  v13 = 9;
  do
  {
    if ( *(_WORD *)v12 )
    {
      *(_WORD *)(v12 + 2) -= v9;
      *(_WORD *)(v12 + 4) -= v10;
      sub_806A18C(v11, *(_WORD *)(v12 + 2), *(_WORD *)(v12 + 4));
    }
    v12 += 6;
    v11 += 3;
    v13 -= 3;
  }
  while ( v13 >= 0 );
  return v17;
}
