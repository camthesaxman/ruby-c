int __fastcall sub_8105F9C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@4
  int v4; // r0@6
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = *(_WORD *)(v1 + 48) - (*(_WORD *)(v1 + 50) << 16 >> 24);
      *(_WORD *)(v1 + 48) = v4;
      if ( v4 & 0x8000 )
        *(_WORD *)(v1 + 48) = 0;
      v400004C = ((unsigned __int16)(16 * *(_WORD *)(v1 + 48)) | *(_WORD *)(v1 + 48)) << 8;
      *(_WORD *)(v1 + 50) = (*(_WORD *)(v1 + 50) & 0xFF) + 128;
      if ( !*(_WORD *)(v1 + 48) )
      {
        ++*(_WORD *)(v1 + 46);
        *(_WORD *)(v1 + 60) = 0;
        *(_BYTE *)(v1 + 1) &= 0xEFu;
        StartSpriteAnim(v1, 0);
      }
    }
  }
  else
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 32 )
    {
      ++*(_WORD *)(v1 + 46);
      *(_WORD *)(v1 + 48) = 5;
      *(_BYTE *)(v1 + 1) |= 0x10u;
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      StartSpriteAnim(v1, 1);
      v400004C = ((unsigned __int16)(16 * *(_WORD *)(v1 + 48)) | *(_WORD *)(v1 + 48)) << 8;
    }
  }
  return v6;
}
