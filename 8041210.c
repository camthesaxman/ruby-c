int __fastcall BlendPalette(unsigned __int16 a1, unsigned __int16 a2, unsigned __int8 a3, __int16 a4)
{
  int v4; // r7@2
  unsigned int i; // r6@1
  int v6; // r3@2
  int v8; // [sp+0h] [bp-24h]@0
  int v9; // [sp+20h] [bp-4h]@0

  LOWORD(v8) = a4;
  for ( i = 0; i < a2; i = (i + 1) & 0xFFFF )
  {
    v6 = *(_DWORD *)((2 * (i + a1) & 0x1FFFF) + 0x202EAC8);
    v4 = a3;
    *(_WORD *)((2 * (i + a1) & 0x1FFFF) + 0x202EEC8) = ((v6 & 0x1F) + (((v8 & 0x1F) - (v6 & 0x1F)) * v4 >> 4)) | 32 * (((unsigned int)(v6 << 22) >> 27) + ((signed int)((((unsigned int)(v8 << 22) >> 27) - ((unsigned int)(v6 << 22) >> 27)) * v4) >> 4)) | ((((unsigned int)(v6 << 17) >> 27) + (unsigned __int16)((signed int)((((unsigned int)(v8 << 17) >> 27) - ((unsigned int)(v6 << 17) >> 27)) * v4) >> 4)) << 10);
  }
  return v9;
}
