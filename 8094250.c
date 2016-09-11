int __fastcall sub_8094250(int a1, __int16 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r2@1
  int v6; // [sp+0h] [bp-1Ch]@3
  int v7; // [sp+18h] [bp-4h]@3

  v2 = a1;
  v3 = v2024EB2;
  v4 = v2024EB4;
  if ( v2000001 )
  {
    v3 = v2000074;
    v4 = v2000076;
  }
  FormatPlayTime(&v6, v3, v4, a2);
  sub_8072C74(v2, (int)&v6, 0x30u, 1u);
  return v7;
}
