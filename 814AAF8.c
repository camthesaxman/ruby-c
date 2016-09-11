int __fastcall sub_814AAF8(unsigned __int16 a1)
{
  char *v1; // r4@2
  int v2; // r2@3
  char v3; // r3@3
  unsigned int v4; // r1@3
  int v6; // [sp+14h] [bp-4h]@0

  if ( v203A3D0 != 64 )
  {
    v1 = &gSprites[68 * v203A3D0];
    if ( *(_WORD *)(*((_DWORD *)v1 + 5) + 2) == 0xFFFF )
    {
      LOBYTE(v2) = 0;
      v3 = 15;
      v4 = 0;
      do
      {
        if ( *(_WORD *)(2 * v4 + 0x202EAC8) == a1 )
        {
          v2 = (v4 >> 4) & 0xFF;
          v3 = v4 & 0xF;
        }
        v4 = (v4 + 1) & 0xFFFF;
      }
      while ( v4 <= 0xFF );
      v1[5] = v1[5] & 0xF | 16 * v2;
      RequestSpriteSheetCopy((int)(&gUnknown_0842F140 + 2 * (v3 & 0xF)));
    }
  }
  return v6;
}
