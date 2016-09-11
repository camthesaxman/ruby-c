int __fastcall sub_807D1BC(unsigned __int8 a1, unsigned __int8 a2, int a3, unsigned __int8 a4, __int16 a5)
{
  int v5; // r8@1
  int v6; // r6@1
  unsigned int v7; // r10@1
  unsigned int v8; // r2@1
  int v9; // r4@1
  unsigned int v10; // r9@4
  int v11; // r12@4
  int v12; // r5@6
  unsigned int v13; // r7@8
  int v14; // r4@9
  int v15; // r1@9
  int v16; // r3@9
  int v17; // r2@9
  int v18; // r1@9
  int v20; // [sp+0h] [bp-34h]@0
  signed int v21; // [sp+10h] [bp-24h]@2
  int v22; // [sp+30h] [bp-4h]@0

  v5 = a4;
  LOWORD(v20) = a5;
  v6 = 16 * a1;
  v7 = (a2 + a1) & 0xFF;
  v8 = (unsigned int)((a3 << 24) - 0x1000000) >> 24;
  v9 = a1;
  if ( a1 < v7 )
  {
    v21 = (signed int)(v8 << 24) >> 19;
    do
    {
      if ( *(_BYTE *)(dword_30006DC + v9) )
      {
        if ( *(_BYTE *)(dword_30006DC + v9) == 1 )
          v12 = v21 + 33749480;
        else
          v12 = v21 + 33750088;
        v13 = 0;
        v10 = v7 << 16;
        v11 = v9 + 1;
        do
        {
          v14 = v6;
          v15 = *(_DWORD *)(2 * v6 + 0x202EAC8);
          v16 = *(_BYTE *)(v12 + (*(_DWORD *)(2 * v6 + 0x202EAC8) & 0x1F));
          v17 = *(_BYTE *)(v12 + ((unsigned int)(v15 << 22) >> 27));
          v18 = *(_BYTE *)(v12 + ((unsigned int)(v15 << 17) >> 27));
          v6 = (v6 + 1) & 0xFFFF;
          *(_WORD *)(2 * v14 + 0x202EEC8) = (((_WORD)v18
                                            + (unsigned __int16)((signed int)(v5
                                                                            * (((unsigned int)(v20 << 17) >> 27) - v18)) >> 4)) << 10) | 32 * (v17 + ((signed int)(v5 * (((unsigned int)(v20 << 22) >> 27) - v17)) >> 4)) & 0x1FFF | (v16 + (v5 * ((a5 & 0x1F) - v16) >> 4)) & 0xFF;
          v13 = (v13 + 1) & 0xFFFF;
        }
        while ( v13 <= 0xF );
      }
      else
      {
        BlendPalette(v6, 0x10u, v5, a5);
        v6 = (v6 + 16) & 0xFFFF;
        v10 = v7 << 16;
        v11 = v9 + 1;
      }
      v9 = (unsigned __int16)v11;
    }
    while ( v11 << 16 < v10 );
  }
  return v22;
}
