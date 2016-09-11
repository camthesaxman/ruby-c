int __fastcall sub_813CAF4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int *v4; // r1@16
  int *v5; // r1@18
  int *v6; // r3@19
  int v7; // r2@19
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  ++*((_WORD *)v2 + 19);
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 4 )
  {
    BeginNormalPaletteFade(1, 5, 0, 0x10u, 14327);
    v400000C = 3591;
    v4000000 = 15680;
    *((_WORD *)v2 + 5) = 0;
    *((_WORD *)v2 + 6) = 0;
    *((_WORD *)v2 + 7) = 8;
    *((_WORD *)v2 + 4) = 40;
_0813CC56:
    v6 = &dword_3004B20[10 * v1];
    v400001A = *((_WORD *)v6 + 5);
    v4000018 = *((_WORD *)v6 + 6);
    v7 = *((_WORD *)v6 + 7);
    *((_WORD *)v6 + 5) -= v7;
    *((_WORD *)v6 + 6) += v7;
    if ( !(*((_WORD *)v6 + 19) & 7) && v7 << 16 )
      *((_WORD *)v6 + 7) = v7 - 1;
    return v9;
  }
  if ( v3 > 4 )
  {
    if ( v3 == 30 )
    {
_0813CBEE:
      v5 = &dword_3004B20[10 * v1];
      v400001A = *((_WORD *)v5 + 5);
      v4000018 = *((_WORD *)v5 + 6);
      *((_WORD *)v5 + 5) -= 6;
      *((_WORD *)v5 + 6) += 8;
      return v9;
    }
    if ( v3 > 30 )
    {
      if ( v3 != 40 )
        return v9;
      goto _0813CC56;
    }
    if ( v3 != 20 )
      return v9;
_0813CB8A:
    v4 = &dword_3004B20[10 * v1];
    v400001A = *((_WORD *)v4 + 5);
    v4000018 = *((_WORD *)v4 + 6);
    *((_WORD *)v4 + 5) += 6;
    *((_WORD *)v4 + 6) -= 8;
    return v9;
  }
  if ( v3 == 2 )
  {
    BeginNormalPaletteFade(1, 0, 0x10u, 0, -1);
    v400000C = 3591;
    v4000000 = 15680;
    *((_WORD *)v2 + 5) = 0;
    *((_WORD *)v2 + 6) = 0;
    *((_WORD *)v2 + 4) = 20;
    goto _0813CB8A;
  }
  if ( v3 > 2 )
  {
    BeginNormalPaletteFade(1, 0, 0x10u, 0, -1);
    v400000C = 3591;
    v4000000 = 15680;
    *((_WORD *)v2 + 5) = 0;
    *((_WORD *)v2 + 6) = 0;
    *((_WORD *)v2 + 4) = 30;
    goto _0813CBEE;
  }
  if ( !*((_WORD *)v2 + 4) )
  {
    v4000000 = 14656;
    v400000C = 0;
    *((_WORD *)v2 + 4) = 255;
  }
  return v9;
}
