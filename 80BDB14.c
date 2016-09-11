int GabbyAndTyBeforeInterview()
{
  char v0; // r2@3
  char v1; // r2@4
  unsigned int v2; // r1@10
  int v4; // [sp+8h] [bp-4h]@0

  v2028244 = word_30042E6;
  v2028246 = word_3004306;
  v2028248 = word_3004302;
  if ( v202824D != 255 )
    ++v202824D;
  v0 = v202824E & 0xFE | byte_30042E5 & 1;
  v202824E = v202824E & 0xFE | byte_30042E5 & 1;
  if ( byte_30042E0[0] )
    v1 = v0 | 2;
  else
    v1 = v0 & 0xFD;
  v202824E = v1;
  if ( byte_30042E3 )
    v202824E |= 4u;
  else
    v202824E &= 0xFBu;
  if ( byte_30042E5 & 2 || (v2 = 0, byte_3004316[0]) )
  {
_080BDBE4:
    v202824E |= 8u;
  }
  else
  {
    while ( 1 )
    {
      v2 = (v2 + 1) & 0xFF;
      if ( v2 > 0xA )
        break;
      if ( byte_3004316[v2] )
        goto _080BDBE4;
    }
  }
  TakeTVShowInSearchOfTrainersOffTheAir();
  if ( !v2028248 )
    FlagSet(1u);
  return v4;
}
