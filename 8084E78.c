int __fastcall sub_8084E78(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int16 v2; // r4@1
  unsigned __int8 v3; // r5@1
  unsigned __int8 v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  ZeroEnemyPartyMons();
  v4 = sub_8084DC4();
  CreateMonWithNature((int)&unk_30045C0, v2, v3, 0x20u, v4);
  return v6;
}
