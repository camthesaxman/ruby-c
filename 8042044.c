int __fastcall sub_8042044(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r5@1
  int v5; // r6@1
  __int16 v7; // [sp+10h] [bp-24h]@1
  char v8; // [sp+12h] [bp-22h]@1
  char v9; // [sp+13h] [bp-21h]@1
  char v10; // [sp+14h] [bp-20h]@2
  char v11; // [sp+15h] [bp-1Fh]@3
  int v12; // [sp+30h] [bp-4h]@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  CreateMon(a1, a2, 5u, 0x20u);
  v8 = 0;
  v7 = 4;
  v9 = 1;
  SetMonData(v3, 38, (int)&v7);
  SetMonData(v3, 2, (int)&gUnknown_08209AD4);
  SetMonData(v3, 32, (int)&unk_81FEC29 + 28 * v4);
  SetMonData(v3, 36, (int)&v8);
  SetMonData(v3, 3, (int)&v9);
  if ( v5 )
  {
    v10 = -3;
    SetMonData(v3, 35, (int)&v10);
  }
  v11 = 1;
  SetMonData(v3, 45, (int)&v11);
  return v12;
}
