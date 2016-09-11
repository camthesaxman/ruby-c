int __fastcall sub_809FF64(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r4@1
  int v3; // r2@2
  unsigned __int16 v4; // r0@3
  int v5; // r2@3
  int v6; // r0@3
  int v7; // r2@3
  int v8; // r0@3
  int v9; // r2@3
  int v10; // r0@3
  int v11; // r2@3
  int v12; // r0@3
  int v13; // r2@3
  int v14; // r0@3
  int v15; // r2@3
  int v16; // r0@3
  int v17; // r2@3
  int v18; // r0@3
  _BYTE *v19; // r0@3
  int v20; // r4@3
  int v21; // r2@3
  int v22; // r0@3
  int v24; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  do
  {
    sub_80A1918(v2, 1);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 4 );
  v4 = GetMonData(v1, 12, v3);
  sub_80A0BF4(v4, 11, 4);
  sub_80A0B88(v1);
  v6 = GetMonData(v1, 25, v5);
  ConvertIntToDecimalString(&gStringVar1, v6);
  sub_8072B4C(&gStringVar1, 29, 0xEu);
  sub_80A0C80(v1, 23, 16);
  v8 = GetMonData(v1, 59, v7);
  ConvertIntToDecimalString(&gStringVar1, v8);
  sub_8072BD8(&gStringVar1, 16, 9u, 0x32u);
  v10 = GetMonData(v1, 60, v9);
  ConvertIntToDecimalString(&gStringVar1, v10);
  sub_8072BD8(&gStringVar1, 16, 0xBu, 0x32u);
  v12 = GetMonData(v1, 62, v11);
  ConvertIntToDecimalString(&gStringVar1, v12);
  sub_8072BD8(&gStringVar1, 27, 7u, 0x12u);
  v14 = GetMonData(v1, 63, v13);
  ConvertIntToDecimalString(&gStringVar1, v14);
  sub_8072BD8(&gStringVar1, 27, 9u, 0x12u);
  v16 = GetMonData(v1, 61, v15);
  ConvertIntToDecimalString(&gStringVar1, v16);
  sub_8072BD8(&gStringVar1, 27, 0xBu, 0x12u);
  v18 = GetMonData(v1, 57, v17);
  v19 = (_BYTE *)sub_8072C14((int)&gStringVar1, v18, 0x18u, 1u);
  *v19 = -70;
  v20 = (int)(v19 + 1);
  v22 = GetMonData(v1, 58, v21);
  sub_8072C14(v20, v22, 0x30u, 1u);
  sub_80729D8((int)&gStringVar1, 126, 56, 1u);
  return v24;
}
