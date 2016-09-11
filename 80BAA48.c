int __fastcall sub_80BAA48(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r2@4
  int v3; // r0@13
  signed int v4; // r0@15
  int v5; // r0@22
  int v6; // r1@24
  int v7; // r0@24
  int v8; // r0@32
  char *v9; // r1@32
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 2 )
  {
    v4000000 = 28992;
    v4000040 = 4575;
    v4000044 = 287;
    MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
    dword_3004B20[10 * v1] = (int)sub_80BA258;
    return v11;
  }
  if ( word_30017A0 & 0x40 )
  {
    v2 = v20387B3;
    if ( --v20387B3 & 0x80 )
      v20387B3 = 8;
_080BAAEA:
    sub_80BAE10(v2, v20387B3);
    return v11;
  }
  if ( word_30017A0 & 0x80 )
  {
    v2 = v20387B3;
    ++v20387B3;
    if ( v20387B3 > 8 )
      v20387B3 = 0;
    goto _080BAAEA;
  }
  if ( word_300179E & 8 )
  {
    v20387D8 ^= 1u;
    sub_80BAD5C(33785816);
    return v11;
  }
  if ( word_300179E & 4 )
  {
    v3 = v20387D9 ^ 1;
    v20387D9 ^= 1u;
    sub_80BAD5C(v3);
    sub_81DF5D8(v20387D9);
    return v11;
  }
  if ( word_30017A0 & 0x100 )
  {
    v4 = 10;
_080BAB6E:
    v5 = sub_80BACDC(v4);
    sub_80BAD5C(v5);
    return v11;
  }
  if ( word_30017A0 & 0x200 )
  {
    v4 = -10;
    goto _080BAB6E;
  }
  if ( word_30017A0 & 0x20 )
  {
    v4 = -1;
    goto _080BAB6E;
  }
  if ( word_30017A0 & 0x10 )
  {
    v4 = 1;
    goto _080BAB6E;
  }
  if ( word_300179E & 1 )
  {
    sub_81DF50C(v20387B8);
    sub_81DF520(v20387BC);
    sub_81DF538(v20387C0);
    sub_81DF570(v20387C4);
    sub_81DF588(v20387CC);
    sub_81DF57C(v20387C8);
    sub_81DF5AC(v20387D0);
    sub_81DF618(v20387D4);
    v6 = v20387B4 % 128 & 0xFF;
    v7 = v20387B4 / 128 & 0xFF;
    if ( v7 == 1 )
    {
      if ( v20387D8 )
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_8453DC0;
      }
      else
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_8452B90;
      }
      goto _080BAC98;
    }
    if ( v7 <= 1 )
    {
      if ( v7 )
        goto _080BACA2;
      if ( v20387D8 )
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_84537C0;
      }
      else
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_8452590;
      }
_080BAC98:
      dword_3005D30 = sub_81DF43C(&v9[v8]);
      goto _080BACA2;
    }
    if ( v7 == 2 )
    {
      if ( v20387D8 )
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_84543C0;
      }
      else
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_8453190;
      }
      goto _080BAC98;
    }
    if ( v7 == 3 )
    {
      if ( v20387D8 )
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_84549C0;
      }
      else
      {
        v8 = 12 * v6;
        v9 = (char *)&voicegroup_8453790;
      }
      goto _080BAC98;
    }
  }
_080BACA2:
  if ( dword_3005D30 )
  {
    v20387B1 = sub_81DF594(dword_3005D30);
    if ( v20387B1 != v20387B2 )
      ((void (*)(void))sub_80BAD5C)();
    v20387B2 = v20387B1;
  }
  return v11;
}
