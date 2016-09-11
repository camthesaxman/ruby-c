int __fastcall sub_809C04C(unsigned int *a1, int a2)
{
  unsigned int *v2; // r7@1
  int v3; // r0@2
  int v4; // r2@3
  int v5; // r2@3
  __int16 v6; // r0@3
  unsigned int v7; // r0@5
  unsigned int v8; // r9@6
  _BYTE *v9; // r2@6
  _BYTE *v10; // r2@6
  _BYTE *v11; // r0@16
  int v12; // r0@16
  int v13; // r7@16
  char v14; // r0@19
  _BYTE *v15; // r7@22
  _BYTE *v16; // r0@23
  _BYTE *v17; // r0@23
  signed int v19; // [sp+0h] [bp-24h]@1
  int v20; // [sp+20h] [bp-4h]@0

  v2 = a1;
  a2 = (unsigned __int8)a2;
  v19 = 0;
  v20011F2 = 0;
  if ( !(_BYTE)a2 )
  {
    v3 = GetMonData((int)a1, 65, 33559026);
    v20011F0 = v3;
    if ( v3 << 16 )
    {
      v20011F9 = GetMonData((int)v2, 45, 4592);
      GetMonData((int)v2, 2, 33559034);
      StringGetEnd10(33559034);
      v20011F8 = GetMonData((int)v2, 56, v4);
      v20011F7 = GetMonData((int)v2, 8, 4600);
      v20011EC = GetMonData((int)v2, 0, 4599);
      v20011E8 = pokemon_get_pal((int)v2);
      v19 = (unsigned __int8)GetMonGender();
      v6 = GetMonData((int)v2, 12, v5);
_0809C1B2:
      v20011F2 = v6;
      goto _0809C1DE;
    }
    goto _0809C1EC;
  }
  if ( a2 == 1 )
  {
    v7 = GetBoxMonData(a1, 65, (_BYTE *)0x20011F2);
    v20011F0 = v7;
    if ( v7 << 16 )
    {
      v8 = GetBoxMonData(v2, 1, (_BYTE *)0x11F0);
      v20011F9 = GetBoxMonData(v2, 45, v9);
      GetBoxMonData(v2, 2, (_BYTE *)0x20011FA);
      StringGetEnd10(33559034);
      v20011F8 = GetLevelFromBoxMonExp((int)v2);
      v20011F7 = GetBoxMonData(v2, 8, (_BYTE *)0x11F8);
      v20011EC = GetBoxMonData(v2, 0, (_BYTE *)0x11F7);
      v20011E8 = species_and_otid_get_pal(v20011F0, v8, v20011EC);
      v19 = (unsigned __int8)GetGenderFromSpeciesAndPersonality(v20011F0, v20011EC);
      v6 = GetBoxMonData(v2, 12, v10);
      goto _0809C1B2;
    }
_0809C1EC:
    v20011FA = -1;
    v200120F = -1;
    v2001234 = -1;
    v2001259 = -1;
    v200127A = -1;
    return v20;
  }
  v20011F0 = 0;
_0809C1DE:
  if ( !v20011F0 )
    goto _0809C1EC;
  if ( v20011F9 )
  {
    v200120F = -4;
    v2001210 = 4;
    v2001211 = 15;
    v2001212 = 0;
    v2001213 = 1;
    StringCopy((_BYTE *)0x2001214, (_BYTE *)0x20011FA);
    v2001234 = -1;
    v2001259 = -1;
    v200127A = -1;
    return v20;
  }
  if ( v20011F0 == 32 || v20011F0 == 29 )
    v19 = 255;
  v200120F = -4;
  v2001210 = 4;
  v2001211 = 15;
  v2001212 = 0;
  v2001213 = 1;
  StringCopy((_BYTE *)0x2001214, (_BYTE *)0x20011FA);
  v2001234 = -4;
  v2001235 = 4;
  v2001236 = 15;
  v2001237 = 0;
  v2001238 = 1;
  v2001239 = -4;
  v200123A = 19;
  v200123B = 7;
  v200123C = -70;
  v11 = StringCopy((_BYTE *)0x200123D, &gSpeciesNames[11 * v20011F0]);
  *v11 = -4;
  v11[1] = 19;
  v11[2] = 80;
  v11[3] = -1;
  v2001259 = -4;
  v200125A = 4;
  v200125B = 15;
  v200125C = 0;
  v200125D = 1;
  v200125E = -4;
  v200125F = 19;
  v2001260 = 8;
  v2001261 = 52;
  v12 = sub_8072C14(33559138, v20011F8, 0x22u, 1u);
  *(_BYTE *)v12 = -4;
  *(_BYTE *)(v12 + 1) = 17;
  *(_BYTE *)(v12 + 2) = 8;
  v13 = v12 + 3;
  if ( v19 )
  {
    if ( v19 != 254 )
      goto _0809C3EA;
    *(_BYTE *)v13 = -4;
    *(_BYTE *)(v12 + 4) = 4;
    *(_BYTE *)(v12 + 5) = 6;
    *(_BYTE *)(v12 + 6) = 0;
    *(_BYTE *)(v12 + 7) = 7;
    v14 = -74;
  }
  else
  {
    *(_BYTE *)v13 = -4;
    *(_BYTE *)(v12 + 4) = 4;
    *(_BYTE *)(v12 + 5) = 4;
    *(_BYTE *)(v12 + 6) = 0;
    *(_BYTE *)(v12 + 7) = 5;
    v14 = -75;
  }
  *(_BYTE *)(v13 + 5) = v14;
  v13 += 6;
_0809C3EA:
  *(_BYTE *)v13 = -1;
  v15 = (_BYTE *)33559162;
  if ( v20011F2 )
  {
    v200127A = -4;
    v200127B = 4;
    v200127C = 15;
    v200127D = 0;
    v200127E = 1;
    v200127F = -4;
    v2001280 = 6;
    v2001281 = 4;
    v16 = (_BYTE *)itemid_get_item(v20011F2);
    v17 = StringCopy((_BYTE *)0x2001282, v16);
    *v17 = -4;
    v17[1] = 7;
    v15 = v17 + 2;
  }
  *v15 = -1;
  return v20;
}
