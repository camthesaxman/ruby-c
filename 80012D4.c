int __fastcall RequestSpriteCopy(int a1, int a2, __int16 a3)
{
  int v4; // [sp+Ch] [bp-4h]@0

  if ( (unsigned __int8)gSpriteCopyRequestCount <= 0x3Fu )
  {
    gSpriteCopyRequests[3 * (unsigned __int8)gSpriteCopyRequestCount] = a1;
    dword_30024E4[3 * (unsigned __int8)gSpriteCopyRequestCount] = a2;
    LOWORD(gSpriteCopyRequests[3 * (unsigned __int8)gSpriteCopyRequestCount++ + 2]) = a3;
  }
  return v4;
}
