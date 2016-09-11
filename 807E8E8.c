signed int sub_807E8E8()
{
  signed int result; // r0@2
  int v1; // r1@4
  _BYTE *v2; // r1@6

  if ( v202FEC0 == v202FEC1 )
  {
    result = 0;
  }
  else
  {
    ++v202FEBE;
    if ( v202FEBE > (unsigned int)v202FEC3 )
    {
      v202FEBE = 0;
      v1 = v202FEC0;
      if ( v202FEC0 >= (unsigned int)v202FEC1 )
      {
        --v202FEC0;
        *(_WORD *)(*(_DWORD *)(4 * v202FEC0 + 0x202F7E8) + 56) = 0;
        v2 = (_BYTE *)(*(_DWORD *)(4 * v202FEC0 + 0x202F7E8) + 62);
        *v2 |= 4u;
      }
      else
      {
        ++v202FEC0;
        *(_WORD *)(*(_DWORD *)(4 * v1 + 0x202F7E8) + 56) = 1;
      }
    }
    result = 1;
  }
  return result;
}
