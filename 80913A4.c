int __fastcall unref_sub_80913A4(unsigned __int16 a1, char a2, int a3)
{
  unsigned int v3; // r4@1
  int v4; // r2@1
  signed int v5; // r5@1
  unsigned int v6; // r0@1
  unsigned int v7; // r0@4
  unsigned int v8; // r0@8
  char v10; // [sp+0h] [bp-1Ch]@2
  char v11; // [sp+1h] [bp-1Bh]@6
  char v12; // [sp+2h] [bp-1Ah]@8
  char v13; // [sp+3h] [bp-19h]@8
  char v14; // [sp+4h] [bp-18h]@8
  char v15; // [sp+5h] [bp-17h]@8
  int v16; // [sp+18h] [bp-4h]@8

  v3 = a1;
  v4 = a3 << 24;
  v5 = 0;
  v6 = a1 / 0x3E8u & 0xFF;
  if ( v6 )
  {
    v10 = v6 - 95;
    v5 = 1;
  }
  else
  {
    v10 = 0;
  }
  v7 = (v3 % 0x3E8 & 0xFFFF) / 0x64 & 0xFF;
  if ( v7 || v5 )
    v11 = (v3 % 0x3E8 & 0xFFFF) / 0x64 - 95;
  else
    v11 = 0;
  v8 = (v3 % 0x3E8 & 0xFFFF) % 0x64;
  v12 = (unsigned __int16)v8 / 0xAu - 95;
  v13 = -83;
  v14 = (unsigned __int16)v8 % 0xAu - 95;
  v15 = -1;
  MenuPrint((int)&v10, a2, BYTE3(v4));
  return v16;
}
