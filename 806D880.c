int __fastcall sub_806D880(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r5@1
  _BYTE *v7; // r1@1
  int v8; // r9@1
  int v9; // r10@1
  int v10; // r4@1
  int v11; // r2@1
  int v12; // r2@1
  int v14; // [sp+20h] [bp-4h]@0

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = &gUnknown_08376678[24 * a3] + 4 * a2;
  v8 = *v7;
  v9 = v7[1];
  v10 = (unsigned __int16)GetMonData(a4, 65, a3);
  GetMonData(v4, 0, v11);
  LOBYTE(v10) = sub_809D2FC(v10, sub_809D62C, v8, v9);
  sub_806DE50(v5, v6, (unsigned __int8)v10);
  sub_806D84C(v10, v4, v12);
  return v14;
}
