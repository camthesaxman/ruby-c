signed int sub_809971C()
{
  signed int result; // r0@2
  int v1; // r1@8

  if ( v2001170 == 16 )
  {
    result = 0;
  }
  else
  {
    if ( ++v2001170 & 1 )
    {
      --*(_WORD *)(*v20010C8 + 34);
      ++*(_WORD *)(v2001034 + 34);
    }
    *(_WORD *)(*v20010C8 + 36) = gSineTable[8 * v2001170] / 16;
    *(_WORD *)(v2001034 + 36) = gSineTable[8 * v2001170] / -16;
    if ( v2001170 == 8 )
    {
      *(_BYTE *)(v2001034 + 5) = *(_BYTE *)(v2001034 + 5) & 0xF3 | *(_BYTE *)(*v20010C8 + 5) & 0xC;
      *(_BYTE *)(v2001034 + 67) = *(_BYTE *)(*v20010C8 + 67);
      *(_BYTE *)(*v20010C8 + 5) = *(_BYTE *)(*v20010C8 + 5) & 0xF3 | 4;
      *(_BYTE *)(*v20010C8 + 67) = 7;
    }
    if ( v2001170 == 16 )
    {
      v1 = v2001034;
      v2001034 = *v20010C8;
      *v20010C8 = v1;
      *(_DWORD *)(v2001034 + 28) = sub_80999C4;
      *(_DWORD *)(*v20010C8 + 28) = SpriteCallbackDummy;
    }
    result = 1;
  }
  return result;
}
