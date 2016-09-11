int __fastcall sub_8055980(unsigned __int8 a1, __int16 a2, __int16 a3, char a4)
{
  int v4; // r7@1
  __int16 v5; // r9@1
  __int16 v6; // r10@1
  char v7; // r8@1
  unsigned __int8 v8; // r0@1
  unsigned __int8 v9; // r6@1
  int *v10; // r5@1
  int v12; // [sp+1Ch] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = sub_805AB54();
  v9 = v8;
  v10 = &dword_30048A0[9 * v8];
  sub_8055954((_DWORD *)(4 * v4 + 33724440));
  sub_8055970((int)v10);
  *(_BYTE *)(4 * v4 + 0x2029818) = 1;
  *(_BYTE *)(4 * v4 + 0x2029819) = v4;
  *(_BYTE *)(4 * v4 + 0x202981A) = v9;
  *(_BYTE *)(4 * v4 + 0x202981B) = 0;
  *(_BYTE *)v10 = (*(_BYTE *)v10 | 1) & 0xFD | 2 * (v7 & 1);
  *((_BYTE *)v10 + 25) = 2;
  *((_BYTE *)v10 + 4) = 64;
  sub_8055A2C(v10, v5, v6);
  return v12;
}
