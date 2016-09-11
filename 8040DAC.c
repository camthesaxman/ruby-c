signed int __fastcall unref_sub_8040DAC(int a1)
{
  int v1; // r6@1
  unsigned __int16 v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-1Ch]@1

  v1 = a1;
  v2 = GetMonData(a1, 11, 0);
  v3 = (unsigned __int8)GetMonData(v1, 3, 0);
  GetMonData(v1, 2, (int)&v5);
  return sub_8040D3C(v2, (int)&v5, v3);
}
