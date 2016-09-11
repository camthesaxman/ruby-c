int __fastcall unref_sub_80AAEE8(signed int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  signed int v4; // r4@1
  unsigned __int8 v5; // r7@1
  unsigned __int8 v6; // r6@1
  unsigned __int8 v7; // r5@1
  signed int v8; // r0@1
  char *v9; // r0@3
  signed int v10; // r1@3
  char v12; // [sp+0h] [bp-20h]@2
  int v13; // [sp+1Ch] [bp-4h]@5

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = 0;
  if ( v4 < 0 )
  {
    v12 = -82;
    v8 = 1;
  }
  v9 = &v12 + v8;
  v10 = v4;
  if ( v4 < 0 )
    v10 = -v4;
  ConvertIntToDecimalStringN(v9, v10, 0, 8);
  sub_80AAD84(&v12, v5, v6, v7);
  return v13;
}
