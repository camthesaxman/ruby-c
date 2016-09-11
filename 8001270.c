int __fastcall RequestSpriteFrameImageCopy(unsigned __int16 a1, int a2, int a3)
{
  unsigned int v3; // r1@1
  int v4; // r2@2
  int v6; // [sp+Ch] [bp-4h]@0

  v3 = a2 << 16;
  if ( (unsigned __int8)gSpriteCopyRequestCount <= 0x3Fu )
  {
    v4 = 8 * a1 + a3;
    gSpriteCopyRequests[3 * (unsigned __int8)gSpriteCopyRequestCount] = *(_DWORD *)v4;
    dword_30024E4[3 * (unsigned __int8)gSpriteCopyRequestCount] = 32 * (v3 >> 16) + 100728832;
    LOWORD(gSpriteCopyRequests[3 * (unsigned __int8)gSpriteCopyRequestCount++ + 2]) = *(_WORD *)(v4 + 4);
  }
  return v6;
}
