int __fastcall sub_8115928(unsigned __int8 a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@2
  int v5; // [sp+8h] [bp-4h]@0

  v2 = a1;
  if ( a2 << 24 )
  {
    sub_811829C(*(_BYTE *)((v201901A & 0xF) + 0x201901B));
    v3 = 4 * v2;
  }
  else
  {
    v3 = 4 * a1;
    sub_811829C(LOBYTE(dword_3004B20[10 * a1 + 4]));
  }
  sub_81157D0(dword_3004B20[2 * (v3 + v2) + 4]);
  return v5;
}
