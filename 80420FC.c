int __fastcall sub_80420FC(int a1, unsigned __int16 a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  unsigned int v5; // ST04_4@1
  __int16 v7; // [sp+10h] [bp-1Ch]@1
  char v8; // [sp+12h] [bp-1Ah]@1
  char v9; // [sp+13h] [bp-19h]@1
  int v10; // [sp+28h] [bp-4h]@1

  v3 = a1;
  v4 = a2;
  v5 = *(_WORD *)(a3 + 280) | (Random() << 16);
  CreateMon(v3, v4, 5u, 0x20u);
  v8 = 0;
  v7 = 4;
  v9 = 1;
  SetMonData(v3, 38, (int)&v7);
  SetMonData(v3, 2, (int)&gUnknown_08209AD4);
  SetMonData(v3, 32, (int)&unk_81FEC29 + 28 * v4);
  SetMonData(v3, 36, (int)&v8);
  SetMonData(v3, 3, (int)&v9);
  return v10;
}
