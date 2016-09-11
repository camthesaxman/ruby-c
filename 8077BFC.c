int __fastcall sub_8077BFC(unsigned __int8 a1, unsigned __int16 a2)
{
  int v2; // r4@1
  unsigned int v3; // r5@1
  int v4; // r2@2
  int v5; // r2@4
  int v6; // r2@6
  unsigned int v7; // r0@11
  int v8; // r0@12
  _BYTE *v9; // r1@14
  int v10; // r0@14
  _BYTE *v12; // r0@18
  int v13; // r2@22
  unsigned int v14; // r0@24
  int v15; // r0@25

  v2 = a1;
  v3 = a2;
  if ( battle_side_get_owner(a1) << 24 && !(sub_8076BE0() << 24) )
  {
    if ( v3 == 201 )
    {
      if ( *(_WORD *)(4 * v2 + 0x2017802) )
        v13 = *(_DWORD *)(4 * v2 + 0x2024E70);
      else
        v13 = GetMonData((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A), 0, v4);
      v14 = (((v13 & 0x3000000u) >> 18) | ((v13 & 0x30000u) >> 12) | ((v13 & 0x300u) >> 6) | v13 & 3) % 0x1C & 0xFFFF;
      if ( v14 )
        v15 = (v14 + 412) & 0xFFFF;
      else
        v15 = 201;
      v9 = gMonFrontPicCoords;
      v10 = 4 * v15;
      goto _08077DC8;
    }
    if ( v3 == 385 )
      return gUnknownCastformCoords_0837F598[4 * *(_BYTE *)(v2 + 33705604) + 1];
    if ( v3 > 0x19C )
    {
      v12 = gMonFrontPicCoords;
      return v12[1];
    }
    v9 = gMonFrontPicCoords;
_08077DC6:
    v10 = 4 * v3;
_08077DC8:
    v12 = &v9[v10];
    return v12[1];
  }
  if ( v3 == 201 )
  {
    if ( sub_8076BE0() << 24 )
    {
      if ( v201934C & 1 )
        v6 = v2019358;
      else
        v6 = v2019350;
    }
    else if ( *(_WORD *)(4 * v2 + 0x2017802) )
    {
      v6 = *(_DWORD *)(4 * v2 + 0x2024E70);
    }
    else
    {
      v6 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2 + 0x2024A6A)], 0, v5);
    }
    v7 = (((v6 & 0x3000000u) >> 18) | ((v6 & 0x30000u) >> 12) | ((v6 & 0x300u) >> 6) | v6 & 3) % 0x1C & 0xFFFF;
    if ( v7 )
      v8 = (v7 + 412) & 0xFFFF;
    else
      v8 = 201;
    v9 = gMonBackPicCoords;
    v10 = 4 * v8;
    goto _08077DC8;
  }
  if ( v3 == 385 )
    return gUnknown_0837F5AC[*(_BYTE *)(v2 + 33705604)];
  if ( v3 <= 0x19C )
  {
    v9 = gMonBackPicCoords;
    goto _08077DC6;
  }
  v12 = gMonBackPicCoords;
  return v12[1];
}
