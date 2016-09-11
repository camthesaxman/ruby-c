_BOOL4 __fastcall sub_8056B20(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r2@1
  int v7; // r2@3

  v4 = a1;
  v5 = a3;
  v6 = a4;
  if ( a4 < 0 )
    a4 = 0;
  v7 = v5 + v6;
  if ( v7 < a2 )
    a2 = v7;
  return a4 <= v4 && v4 <= a2;
}
