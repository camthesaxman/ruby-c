int __fastcall sub_8091458(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r8@1
  unsigned int v4; // r7@1
  unsigned int v5; // r6@3
  unsigned int v6; // r7@3
  signed int v7; // r5@4
  int v8; // r2@6
  int v9; // r6@6
  int v10; // r5@6
  char v12[4]; // [sp+0h] [bp-2Ch]@3
  char v13; // [sp+1h] [bp-2Bh]@3
  char v14; // [sp+2h] [bp-2Ah]@4
  char v15; // [sp+3h] [bp-29h]@4
  char v16; // [sp+4h] [bp-28h]@5
  int v17; // [sp+28h] [bp-4h]@6

  v3 = a3;
  v4 = 10000 * a1 / 254;
  if ( v4 % 0xA > 4 )
    v4 += 10;
  v5 = v4 / 0x78;
  v6 = v4 % 0x78 / 0xA;
  v12[0] = -4;
  v13 = 19;
  if ( v5 / 0xA )
  {
    v14 = 12;
    v15 = v5 / 0xA - 95;
    v7 = 5;
    v16 = v5 % 0xA - 95;
  }
  else
  {
    v14 = 18;
    v7 = 4;
    v15 = v5 - 95;
  }
  v8 = (v7 + 1) & 0xFF;
  v12[v7] = -76;
  v9 = (v8 + 1) & 0xFF;
  v12[v8] = v6 / 0xA - 95;
  v10 = (v9 + 1) & 0xFF;
  v12[v9] = v6 % 0xA - 95;
  v12[v10] = -78;
  v12[(v10 + 1) & 0xFF] = -1;
  MenuPrint((int)v12, a2, v3);
  return v17;
}
