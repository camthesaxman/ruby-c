int __fastcall sub_8081398(int a1, int a2, int a3, int a4)
{
  int v4; // r10@1
  int v5; // r9@1
  int v6; // r6@1
  int v7; // r8@1
  int v8; // r7@1
  int v10; // [sp+0h] [bp-24h]@1
  int v11; // [sp+20h] [bp-4h]@0

  v10 = a1;
  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = a4;
  v8 = 0;
  while ( v6 >= v8 )
  {
    sub_808136C(v10, v5 - v8, v4 - v6, v4 + v6);
    sub_808136C(v10, v5 + v8, v4 - v6, v4 + v6);
    sub_808136C(v10, v5 - v6, v4 - v8, v4 + v8);
    sub_808136C(v10, v5 + v6, v4 - v8, v4 + v8);
    v7 = v7 + 1 - 2 * v8++;
    if ( v7 < 0 )
      v7 += 2 * (v6-- - 1);
  }
  return v11;
}
