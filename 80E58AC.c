int __fastcall sub_80E58AC(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r5@1
  unsigned int v3; // r1@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( sub_80E5E70(a1, *((_BYTE *)v2 + 30)) << 24 )
  {
    v3 = (unsigned __int8)sub_80E5D34(v1);
    if ( v3 && v3 != 9 )
    {
      if ( v3 == 6 )
      {
        sub_8059594(v1);
        return v5;
      }
      if ( ((v3 - 5) & 0xFF) <= 3 )
        return v5;
      if ( v3 <= 0xB )
      {
        sub_80E5870(v1);
        return v5;
      }
    }
    sub_8059570(v1);
    return v5;
  }
  sub_80E5870(*((_BYTE *)v2 + 24) >> 4);
  return v5;
}
