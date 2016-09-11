int __fastcall sub_807D304(int a1, unsigned __int8 a2, __int16 a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  unsigned __int16 v6; // r8@3
  unsigned int v7; // r12@4
  int v8; // r4@5
  int v9; // r1@5
  int v11; // [sp+0h] [bp-30h]@0
  unsigned int v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+2Ch] [bp-4h]@0

  v3 = a2;
  LOWORD(v11) = a3;
  v12 = ((a1 << 24) ^ 0xFF000000) >> 24;
  v4 = 0;
  v5 = 0;
  do
  {
    if ( *(_BYTE *)(dword_30006DC + v5) )
    {
      v7 = 0;
      v6 = v5 + 1;
      do
      {
        v8 = v4;
        v9 = *(_DWORD *)((2
                        * ((((*(_DWORD *)(2 * v4 + 0x202EAC8) << 17 >> 27) & 0x1E) << 7) | 8
                                                                                         * ((*(_DWORD *)(2 * v4 + 0x202EAC8) << 22 >> 27) & 0x1E)) | *(_DWORD *)(2 * v4 + 0x202EAC8) & 0x1E)
                       + ((signed int)(v12 << 24) >> 11)
                       + 0x2000000);
        v4 = (v4 + 1) & 0xFFFF;
        *(_WORD *)(2 * v8 + 0x202EEC8) = ((((unsigned int)(v9 << 17) >> 27)
                                         + (unsigned __int16)((signed int)((((unsigned int)(v11 << 17) >> 27)
                                                                          - ((unsigned int)(v9 << 17) >> 27))
                                                                         * v3) >> 4)) << 10) | 32
                                                                                             * (((unsigned int)(v9 << 22) >> 27)
                                                                                              + ((signed int)((((unsigned int)(v11 << 22) >> 27) - ((unsigned int)(v9 << 22) >> 27)) * v3) >> 4)) & 0x1FFF | ((v9 & 0x1F) + (((v11 & 0x1F) - (v9 & 0x1F)) * v3 >> 4)) & 0xFF;
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 <= 0xF );
    }
    else
    {
      BlendPalette(v4, 0x10u, v3, v11);
      v4 = (v4 + 16) & 0xFFFF;
      v6 = v5 + 1;
    }
    v5 = v6;
  }
  while ( v6 <= 0x1Fu );
  return v13;
}
