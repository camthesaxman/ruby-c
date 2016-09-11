int __fastcall sub_809F814(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  _BYTE *v3; // r4@1
  int v4; // r2@1
  char v5; // r1@14
  unsigned __int8 v6; // r0@14
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  v3 = &byte_3004B28[v2 * 4];
  v4 = 28;
  if ( (signed int)*(_WORD *)&byte_3004B28[v2 * 4 + 28] <= 3 )
  {
    *((_WORD *)v3 + 14) = *(_WORD *)&byte_3004B28[v2 * 4 + 28] + 1;
    return v8;
  }
  if ( word_300179E & 0x40 )
  {
    dword_3004B20[v2] = (int)sub_809E260;
    *(_WORD *)v3 = 4;
    *((_WORD *)v3 + 13) = 1;
    v2018079 = *((_WORD *)v3 + 15);
    sub_809E8F0(a1, -1, (_BYTE *)0x2018079);
    return v8;
  }
  if ( word_300179E & 0x80 )
  {
    dword_3004B20[v2] = (int)sub_809E260;
    *(_WORD *)v3 = 4;
    *((_WORD *)v3 + 13) = 1;
    v2018079 = *((_WORD *)v3 + 15);
    sub_809E8F0(a1, 1, (_BYTE *)0x2018079);
    return v8;
  }
  if ( word_300179E & 0x20 || (sub_80F9284() & 0xFF) == 1 )
  {
    if ( v201800B == 2 )
      return v8;
    if ( v201800B == 3 && (v2018079 != 4 || v201807C) )
      MenuZeroFillWindowRect(0, 0xEu, 9u, 0x12u);
    dword_3004B20[10 * v1] = (int)sub_809E260;
    v5 = -1;
    v6 = v1;
_0809F972:
    sub_809F134(v6, v5, v4);
    sub_80A1488(1, v3[30]);
    sub_80A1654(1, v3[30]);
    return v8;
  }
  if ( word_300179E & 0x10 || (sub_80F9284() & 0xFF) == 2 )
  {
    v4 = v2018076;
    if ( v201800B == v2018076 )
      return v8;
    if ( v201800B == 2 && (v2018079 != 4 || v201807C) )
      MenuZeroFillWindowRect(0, 0xEu, 9u, 0x12u);
    dword_3004B20[10 * v1] = (int)sub_809E260;
    v6 = v1;
    v5 = 1;
    goto _0809F972;
  }
  if ( word_300179E & 1 || word_300179E & 2 )
  {
    sub_80A1488(2, v3[30]);
    sub_80A1654(2, v3[30]);
    dword_3004B20[v2] = (int)sub_809E260;
  }
  return v8;
}
