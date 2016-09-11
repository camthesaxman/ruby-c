int __fastcall sub_80C54D0(unsigned __int16 a1, unsigned __int8 a2, int a3)
{
  unsigned __int16 v3; // r4@1
  unsigned __int8 v4; // r5@1
  int v5; // r7@1
  int v6; // r6@1
  char v8; // [sp+10h] [bp-1Ch]@2
  char v9; // [sp+11h] [bp-1Bh]@2
  int v10; // [sp+28h] [bp-4h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3 << 16;
  v6 = (unsigned __int16)a3;
  ZeroEnemyPartyMons();
  CreateMon((int)&unk_30045C0, v3, v4, 0x20u);
  if ( v6 )
  {
    v8 = v6;
    v9 = BYTE3(v5);
    SetMonData((int)&unk_30045C0, 12, (int)&v8);
  }
  return v10;
}
