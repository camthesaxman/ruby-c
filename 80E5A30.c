int __fastcall sub_80E5A30(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  unsigned int v3; // r0@3
  unsigned int v4; // r1@3
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( sub_80E5E70(a1, *((_BYTE *)v2 + 30)) << 24 )
  {
    v3 = sub_80E5D34(v1) << 24;
    v4 = v3 >> 24;
    if ( (v3 - 0x1000000) >> 24 > 0xA )
    {
      sub_8059600(v1);
      v202E85A = 2;
      return v6;
    }
    if ( v4 != 6 )
    {
      if ( v4 != 9 )
      {
        if ( v4 > 4 )
          return v6;
        if ( !(MetatileBehavior_IsBumpySlope(*((_BYTE *)v2 + 30)) << 24) )
        {
          sub_80595DC(v1);
          return v6;
        }
      }
      sub_8059504(v1);
      return v6;
    }
    sub_8059594(v1);
  }
  else
  {
    sub_805951C(*((_BYTE *)v2 + 24) >> 4);
  }
  return v6;
}
