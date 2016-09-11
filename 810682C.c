int sub_810682C()
{
  __int16 *v0; // r1@10
  __int16 v1; // r0@11
  int v3; // [sp+4h] [bp-4h]@0

  if ( byte_3000750 == 1 )
  {
    if ( word_300179E & 1 || word_300179E & 2 )
    {
      byte_3000750 = 2;
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    }
    if ( byte_3000756 )
    {
      v0 = &word_3000754;
      v1 = 0;
      goto _081068E4;
    }
  }
  else if ( (signed int)(unsigned __int8)byte_3000750 > 1 )
  {
    if ( byte_3000750 == 2 )
    {
      if ( !(v202F38F & 0x80) )
        SetMainCallback2((int)sub_8106818);
      if ( byte_3000756 )
      {
        v0 = &word_3000754;
        if ( (unsigned __int16)word_3000754 <= 0x1Du )
        {
          v1 = word_3000754 + 1;
          goto _081068E4;
        }
      }
    }
  }
  else if ( !byte_3000750 )
  {
    if ( !(v202F38F & 0x80) )
      byte_3000750 = 1;
    if ( byte_3000756 )
    {
      v0 = &word_3000754;
      if ( word_3000754 )
      {
        v1 = word_3000754 - 1;
_081068E4:
        *v0 = v1;
        return v3;
      }
    }
  }
  return v3;
}
