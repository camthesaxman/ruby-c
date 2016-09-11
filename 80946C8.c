int __fastcall sub_80946C8(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r4@1
  unsigned int v4; // r7@1
  unsigned int v5; // r1@1
  unsigned int v6; // r5@1
  unsigned int v7; // r8@1
  char v8; // r6@1
  int v10; // [sp+14h] [bp-4h]@0

  v2 = a1 << 16;
  v3 = v2 >> 16;
  v4 = v2 >> 16;
  v5 = a2 << 16;
  v6 = v5 >> 16;
  v7 = v5 >> 16;
  v8 = 12;
  if ( sub_809473C() << 24 )
    v8 = 13;
  if ( FlagGet(0x801u) << 24 )
    MenuZeroFillWindowRect(v3, v6, v3 + v8, v6 + 11);
  else
    MenuZeroFillWindowRect(v4, v7, v4 + v8, v7 + 9);
  return v10;
}
