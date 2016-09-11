int __fastcall sub_8072B80(int a1, char a2, unsigned __int8 a3, _BYTE *a4)
{
  int v4; // r8@1
  char v5; // r6@1
  unsigned __int8 v6; // r5@1
  unsigned __int8 v7; // r0@1
  char v9; // [sp+4h] [bp-54h]@1
  int v10; // [sp+54h] [bp-4h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = GetStringWidth(v202E9C8, a4);
  AlignString(v202E9C8, (int)&v9, v4, v7, 1u);
  sub_8003460(v202E9C8, (int)&v9, v202E9CE, v5, v6);
  return v10;
}
