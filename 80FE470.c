int __fastcall sub_80FE470(unsigned __int8 a1, char a2, unsigned __int8 a3, char a4)
{
  int v4; // r4@1
  char v5; // r8@1
  unsigned __int8 v6; // r9@1
  char v7; // r5@1
  char v8; // r6@1
  _BYTE *v9; // r7@1
  unsigned __int8 v10; // r0@1
  _BYTE *v11; // r0@1
  int v12; // r0@1
  int v14; // [sp+1Ch] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = sub_8072CBC();
  gStringVar4[0] = -4;
  byte_20234CD = 5;
  byte_20234CE = v7;
  v9 = StringCopy(&unk_20234CF, *(&gUnknown_083EC5E4 + v4));
  v10 = sub_8134194(v4);
  v11 = (_BYTE *)sub_8072C14((int)v9, v10, 0x56u, 1u);
  *v11 = -70;
  v12 = sub_8072C14((int)(v11 + 1), gUnknown_08402E40[8 * v4 + 4], 0x68u, 1u);
  *(_BYTE *)v12 = -4;
  *(_BYTE *)(v12 + 1) = 5;
  *(_BYTE *)(v12 + 2) = v8;
  *(_BYTE *)(v12 + 3) = -1;
  MenuPrint((int)gStringVar4, v5, v6);
  return v14;
}
