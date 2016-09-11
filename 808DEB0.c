int __fastcall sub_808DEB0(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int16 a4)
{
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r10@1
  unsigned int v7; // r7@1
  int v8; // r2@3
  char v10; // [sp+0h] [bp-28h]@3
  char v11; // [sp+1h] [bp-27h]@3
  char v12; // [sp+2h] [bp-26h]@3
  char v13; // [sp+3h] [bp-25h]@3
  __int16 v14; // [sp+4h] [bp-24h]@3
  signed __int16 v15; // [sp+6h] [bp-22h]@3
  int v16; // [sp+24h] [bp-4h]@3

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_WORD *)(v202FFB4 + (4 * a1 & 0x3FFFF));
  if ( !*(_WORD *)(v202FFB4 + 1554) )
    v7 = NationalToHoennOrder(v7) & 0xFFFF;
  v14 = 1020;
  v15 = 1021;
  v10 = v7 / 0x64 - 95;
  v11 = (v7 % 0x64 & 0xFFFF) / 0xA - 95;
  v12 = (v7 % 0x64 & 0xFFFF) % 0xA - 95;
  v13 = -1;
  v8 = 2 * v4 + (v6 << 11) + (v5 << 6);
  *(_WORD *)(v8 + 100663296) = 1020;
  *(_WORD *)(v8 + 100663360) = v15;
  MenuPrint((int)&v10, v4 - 15, v5);
  return v16;
}
