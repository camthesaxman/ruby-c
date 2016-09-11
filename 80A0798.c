int __fastcall sub_80A0798(int a1, char a2, unsigned __int8 a3)
{
  int v3; // r7@1
  char v4; // r9@1
  unsigned __int8 v5; // r8@1
  unsigned __int8 v6; // r0@1
  int v7; // r4@1
  _BYTE *v8; // r0@1
  _BYTE *v9; // r5@1
  _BYTE *v10; // r5@4
  int v11; // r2@4
  unsigned int v12; // r6@5
  int v13; // r2@5
  int v14; // r2@5
  _BYTE *v15; // r0@6
  int v16; // r5@6
  _BYTE *v17; // r0@6
  unsigned __int8 v18; // r0@8
  _BYTE *v19; // r0@8
  int v20; // r5@8
  _BYTE *v21; // r0@8
  int v22; // r2@9
  int v23; // r2@10
  unsigned int v24; // r6@10
  unsigned __int8 v25; // r0@11
  _BYTE *v26; // r0@11
  _BYTE *v27; // r5@11
  const char *v28; // r1@11
  unsigned __int8 v29; // r0@15
  _BYTE *v30; // r0@15
  int v31; // r5@15
  _BYTE *v32; // r0@15
  int v34; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = GetNature(a1);
  v7 = v6;
  v8 = (_BYTE *)sub_80A1E9C(&gStringVar4, *(&gNatureNames + v6), 14);
  v9 = v8;
  if ( v7 != 5 && v7 != 21 )
    v9 = StringCopy(v8, &gUnknown_0842D0E6);
  v10 = StringCopy(v9, &gUnknown_0842D0E7);
  if ( (unsigned __int8)sub_80A0664(v3) != 1 )
  {
    if ( (unsigned int)((GetMonData(v3, 37, v11) << 24) - 0x1000000) >> 24 <= 2 )
    {
      v24 = (unsigned __int8)GetMonData(v3, 35, v22);
      if ( v24 == 255 )
      {
        v25 = GetMonData(v3, 36, v23);
        v26 = (_BYTE *)sub_80A203C(v10, v25);
        *v26 = -2;
        v27 = v26 + 1;
        v28 = "ÚÕèÙÚéà";
_080A08F0:
        StringCopy(v27, v28);
        goto _080A0934;
      }
      if ( v24 <= 0x57 )
      {
        v29 = GetMonData(v3, 36, v23);
        v30 = (_BYTE *)sub_80A203C(v10, v29);
        *v30 = -2;
        v31 = (int)(v30 + 1);
        sub_80FC02C(&gStringVar1, v24);
        v32 = (_BYTE *)sub_80A1E9C(v31, &gStringVar1, 14);
        StringCopy(v32, &gUnknown_0842D12B);
        goto _080A0934;
      }
    }
_080A08E8:
    *v10 = -2;
    v27 = v10 + 1;
    v28 = "ãÖèÕÝâÙØ";
    goto _080A08F0;
  }
  v12 = (unsigned __int8)GetMonData(v3, 35, v11);
  if ( GetMonData(v3, 36, v13) )
  {
    if ( v12 <= 0x57 )
    {
      v18 = GetMonData(v3, 36, v14);
      v19 = (_BYTE *)sub_80A203C(v10, v18);
      *v19 = -2;
      v20 = (int)(v19 + 1);
      sub_80FC02C(&gStringVar1, v12);
      v21 = (_BYTE *)sub_80A1E9C(v20, &gStringVar1, 14);
      StringCopy(v21, &gUnknown_0842D0F3);
      goto _080A0934;
    }
    goto _080A08E8;
  }
  v15 = (_BYTE *)sub_80A203C(v10, 5);
  *v15 = -2;
  v16 = (int)(v15 + 1);
  sub_80FC02C(&gStringVar1, v12);
  v17 = (_BYTE *)sub_80A1E9C(v16, &gStringVar1, 14);
  StringCopy(v17, &gUnknown_0842D0FB);
_080A0934:
  MenuPrint((int)&gStringVar4, v4, v5);
  return v34;
}
