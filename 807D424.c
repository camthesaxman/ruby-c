int __fastcall sub_807D424(unsigned __int8 a1, __int16 a2)
{
  int v2; // r7@1
  signed int v3; // r4@1
  unsigned int v4; // r12@3
  unsigned int v5; // r6@3
  unsigned __int16 i; // r9@3
  int v7; // r2@4
  int v8; // r4@4
  int v9; // r3@4
  int v10; // r2@4
  int v12; // [sp+0h] [bp-2Ch]@0
  int v13; // [sp+28h] [bp-4h]@0

  v2 = a1;
  LOWORD(v12) = a2;
  BlendPalette(0, 0x100u, a1, a2);
  v3 = 16;
  do
  {
    if ( sub_807D574((unsigned __int8)v3) << 24 )
    {
      v4 = 16 * (v3 + 1) & 0xFFFF;
      v5 = 16 * v3 & 0xFFFF;
      for ( i = v3 + 1; v5 < v4; v5 = (v5 + 1) & 0xFFFF )
      {
        v7 = *(_DWORD *)(2 * v5 + 0x202EAC8);
        v8 = ((*(_DWORD *)(2 * v5 + 0x202EAC8) & 0x1F) + (3 * (28 - (*(_DWORD *)(2 * v5 + 0x202EAC8) & 0x1F)) >> 2)) & 0xFF;
        v9 = (((unsigned int)(v7 << 22) >> 27) + ((signed int)(3 * (31 - ((unsigned int)(v7 << 22) >> 27))) >> 2)) & 0xFF;
        v10 = (((unsigned int)(v7 << 17) >> 27) + ((signed int)(3 * (28 - ((unsigned int)(v7 << 17) >> 27))) >> 2)) & 0xFF;
        *(_WORD *)(2 * v5 + 0x202EEC8) = (((_WORD)v10
                                         + (unsigned __int16)((signed int)((((unsigned int)(v12 << 17) >> 27) - v10) * v2) >> 4)) << 10) | 32 * (v9 + ((signed int)((((unsigned int)(v12 << 22) >> 27) - v9) * v2) >> 4)) & 0x1FFF | (v8 + (((v12 & 0x1F) - v8) * v2 >> 4)) & 0xFF;
      }
    }
    else
    {
      BlendPalette(16 * v3, 0x10u, v2, v12);
      i = v3 + 1;
    }
    v3 = i;
  }
  while ( i <= 0x1Fu );
  return v13;
}
