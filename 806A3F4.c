int __fastcall sub_806A3F4(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  int v3; // r1@3
  char v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+14h] [bp-4h]@4

  v1 = a1;
  CalcTimeDifference((int)&v5, 33705796, a1);
  v2 = 1440 * *(signed __int16 *)&v5 + 60 * *(&v5 + 2) + *(&v5 + 3);
  if ( v2 && v2 >= 0 )
  {
    BerryTreeTimeUpdate();
    v3 = *(_DWORD *)(v1 + 4);
    v2024F44 = *(_DWORD *)v1;
    v2024F48 = v3;
  }
  return v6;
}
