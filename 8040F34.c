int __fastcall sub_8040F34(int a1, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7, __int16 a8)
{
  int v8; // r8@1
  char v10; // [sp+10h] [bp-28h]@1
  int v11; // [sp+34h] [bp-4h]@1

  v8 = a1;
  sub_8040F08((int)&v10, a2, a3, a4, a5, a6, a7, a8);
  BgAffineSet(&v10, v8, 1);
  return v11;
}
