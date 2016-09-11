int __fastcall sub_809FC34(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r4@1
  int v3; // r2@3
  _BYTE *v4; // r0@4
  _BYTE *v5; // r0@4
  _BYTE *v6; // r0@4
  int v7; // r2@4
  unsigned int v8; // r0@4
  const char *v9; // r0@5
  int v10; // r2@13
  char v11; // r0@13
  _BYTE *v12; // r0@13
  _BYTE *v13; // r5@13
  int v14; // r2@13
  _BYTE *v15; // r0@14
  signed int v16; // r1@14
  _BYTE *v17; // r0@16
  _BYTE *v18; // r0@16
  int v19; // r2@16
  unsigned __int16 v20; // r0@16
  int v21; // r2@16
  char *v22; // r5@16
  int v23; // r4@16
  int v24; // r2@16
  int v25; // r4@18
  int v26; // r2@18
  unsigned __int8 v27; // r0@18
  int v28; // r4@18
  int v30; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    sub_80A1918(v2, 1);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 4 );
  MenuZeroFillWindowRect(0xBu, 9u, 0x1Cu, 0xCu);
  if ( GetMonData(v1, 45, v3) )
  {
    v4 = (_BYTE *)sub_80A1E58(&gStringVar1, 13);
    v5 = StringCopy(v4, &gUnknown_0840F7EF);
    v6 = StringCopy(v5, &OtherText_FiveQuestions);
    *v6 = -4;
    v6[1] = 19;
    v6[2] = 78;
    v6[3] = -1;
    MenuPrint((int)&gStringVar1, 11, 4u);
    sub_80A1EF8(&OtherText_FiveQuestions, 13, 193, 32);
    sub_80A198C(9, 120, 48, 0);
    v8 = (unsigned __int16)GetMonData(v1, 32, v7);
    if ( v8 > 5 )
    {
      if ( v8 > 0xA )
      {
        if ( v8 > 0x28 )
        {
          MenuPrint((int)&gUnknown_0840F884, 11, 9u);
          goto _0809FD0A;
        }
        v9 = "—‹’Ë";
      }
      else
      {
        v9 = (const char *)&gUnknown_0840F8EE;
      }
    }
    else
    {
      v9 = "√Ë¥Á";
    }
    MenuPrint((int)v9, 11, 9u);
_0809FD0A:
    sub_80A0708(v1, 11, 14);
    return v30;
  }
  GetMonData(v1, 7, (int)&gStringVar2);
  v11 = GetMonData(v1, 3, v10);
  ConvertInternationalString((int)&gStringVar2, v11);
  v12 = (_BYTE *)sub_80A1E58(&gStringVar1, 13);
  v13 = StringCopy(v12, &gUnknown_0840F7EF);
  if ( GetMonData(v1, 49, v14) )
  {
    v15 = v13;
    v16 = 10;
  }
  else
  {
    v15 = v13;
    v16 = 9;
  }
  v17 = (_BYTE *)sub_80A1E58(v15, v16);
  v18 = StringCopy(v17, &gStringVar2);
  *v18 = -4;
  v18[1] = 19;
  v18[2] = 78;
  v18[3] = -1;
  MenuPrint((int)&gStringVar1, 11, 4u);
  v20 = GetMonData(v1, 1, v19);
  sub_80A1F98(v20, 13, 5, 2);
  v22 = (char *)&gBaseStats + 28 * (unsigned __int16)GetMonData(v1, 11, v21);
  v23 = (unsigned __int8)v22[6];
  sub_80A198C(v23, 120, 48, 0);
  if ( v23 != (unsigned __int8)v22[7] )
    sub_80A198C((unsigned __int8)v22[7], 160, 48, 1);
  v25 = (unsigned __int16)GetMonData(v1, 11, v24);
  v27 = GetMonData(v1, 46, v26);
  v28 = (unsigned __int8)sub_803DB14(v25, v27);
  sub_80A1FF8((char *)&gAbilityNames + 13 * v28, 13, 11, 9);
  MenuPrint((int)*(&gAbilityDescriptions + v28), 11, 0xBu);
  sub_80A0798(v1, 11, 14);
  return v30;
}
