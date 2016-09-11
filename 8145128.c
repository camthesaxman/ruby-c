int __fastcall sub_8145128(unsigned __int16 a1, unsigned __int16 a2, int a3)
{
  int v3; // r7@1
  unsigned int v4; // r4@1
  int v5; // r5@1
  int v6; // r4@1
  unsigned int v7; // r2@1
  unsigned int v8; // r2@3
  __int16 v9; // r0@3
  __int16 v10; // r6@3
  __int16 v11; // r12@3
  __int16 v12; // r4@3
  unsigned int v13; // r2@5
  unsigned int v14; // r2@7
  unsigned int v15; // r2@9
  int v17; // [sp+10h] [bp-4h]@0

  v3 = a2;
  v4 = a3 << 16;
  v5 = (unsigned __int16)a3;
  LZ77UnCompVram(&gCreditsCopyrightEnd_Gfx, a1 + 100663296);
  LoadPalette((int)&gIntroCopyright_Pal, v5, 32);
  v6 = (v4 >> 20 << 12) & 0xFFFF;
  v7 = 0;
  do
  {
    *(_WORD *)(2 * v7 + v3 + 100663296) = v6 + 1;
    v7 = (v7 + 1) & 0xFFFF;
  }
  while ( v7 <= 0x3FF );
  v8 = 0;
  v9 = v6 + 2;
  v10 = v6 + 23;
  v11 = v6 + 43;
  v12 = v6 + 66;
  do
  {
    *(_WORD *)(2 * v8 + v3 + 100663752) = v8 + v9;
    v8 = (v8 + 1) & 0xFFFF;
  }
  while ( v8 <= 0x14 );
  v13 = 0;
  do
  {
    *(_WORD *)(2 * v13 + v3 + 100663880) = v13 + v10;
    v13 = (v13 + 1) & 0xFFFF;
  }
  while ( v13 <= 0x13 );
  v14 = 0;
  do
  {
    *(_WORD *)(2 * v14 + v3 + 100664008) = v14 + v11;
    v14 = (v14 + 1) & 0xFFFF;
  }
  while ( v14 <= 0x16 );
  v15 = 0;
  do
  {
    *(_WORD *)(2 * v15 + v3 + 100664136) = v15 + v12;
    v15 = (v15 + 1) & 0xFFFF;
  }
  while ( v15 <= 0xB );
  return v17;
}
