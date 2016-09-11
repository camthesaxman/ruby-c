signed int sub_809AC00()
{
  signed int result; // r0@2
  int v1; // r0@3
  int v2; // r0@13

  if ( v20011DC )
  {
    v1 = v20011DC - 1;
    --v20011DC;
    if ( v1 << 16 )
    {
      v20011C8 += v20011D0;
      v20011CC += v20011D4;
      *(_WORD *)(v20011C0 + 32) = v20011C8 >> 8;
      *(_WORD *)(v20011C0 + 34) = v20011CC >> 8;
      if ( (signed int)*(_WORD *)(v20011C0 + 32) > 256 )
        *(_WORD *)(v20011C0 + 32) -= 192;
      if ( (signed int)*(_WORD *)(v20011C0 + 32) <= 63 )
        *(_WORD *)(v20011C0 + 32) += 192;
      if ( (signed int)*(_WORD *)(v20011C0 + 34) > 176 )
        *(_WORD *)(v20011C0 + 34) -= 192;
      if ( (signed int)*(_WORD *)(v20011C0 + 34) < -16 )
        *(_WORD *)(v20011C0 + 34) += 192;
      if ( v20011E3 )
      {
        v2 = v20011E3 - 1;
        --v20011E3;
        if ( !(v2 << 24) )
          *(_BYTE *)(v20011C0 + 63) = *(_BYTE *)(v20011C0 + 63) & 0xFD | 2
                                                                       * (((*(_BYTE *)(v20011C0 + 63) >> 1) ^ 1) & 1);
      }
    }
    else
    {
      *(_WORD *)(v20011C0 + 32) = v20011D8;
      *(_WORD *)(v20011C0 + 34) = v20011DA;
      sub_809AFB8();
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
