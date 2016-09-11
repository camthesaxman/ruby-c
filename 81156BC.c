int __fastcall sub_81156BC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(unsigned __int8)UpdatePaletteFade() )
  {
    v4000050 |= 0x2400u;
    v4000052 = 2056;
    LOWORD(dword_3004B20[10 * v1 + 5]) = 0;
    v2 = sub_8116CAC(v1);
    v3 = sub_8116CF8(v2);
    sub_81185E8(v3);
    sub_8117158(0);
    sub_81182F8(6);
    sub_8116C34(v1, sub_81159BC, 0xFFFF, 3);
  }
  return v5;
}
