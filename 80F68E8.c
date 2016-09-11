signed int sub_80F68E8()
{
  char v0; // r5@1
  int v1; // r4@1
  signed int v2; // r12@1
  signed int v3; // r0@8
  _BYTE *v4; // r1@9
  signed int v5; // r0@17
  signed int v6; // r1@19
  char v7; // r0@20

  v0 = v200BC90;
  LOBYTE(v1) = v200BC91;
  v2 = 1;
  if ( word_30017A0 & 0x40 && v200BC91 << 24 > 0 )
  {
    do
    {
      if ( (char)v1 <= 0 )
        break;
      v5 = ((char)v1 - 1) << 24;
      v1 = ((char)v1 - 1) & 0xFF;
    }
    while ( !*(_BYTE *)((v5 >> 24) + 0x200BC96) );
    v4 = (_BYTE *)((char)v1 + 33602710);
    if ( *(_BYTE *)((char)v1 + 0x200BC96) )
      goto _080F69EC;
    LOBYTE(v1) = v200BC91;
  }
  if ( !(word_30017A0 & 0x80) || (char)v1 > 2 )
  {
_080F6978:
    if ( word_30017A0 & 0x20 && v200BC90 > 0 )
    {
      v7 = v200BC90 - 1;
    }
    else
    {
      if ( !(word_30017A0 & 0x10) || v200BC90 >= *(_BYTE *)((char)v1 + 0x200BC96) - 1 )
      {
        v2 = 0;
        goto _080F69FC;
      }
      v7 = v200BC90 + 1;
    }
    goto _080F69F8;
  }
  do
  {
    if ( (char)v1 > 2 )
      break;
    v3 = ((char)v1 + 1) << 24;
    v1 = ((char)v1 + 1) & 0xFF;
  }
  while ( !*(_BYTE *)((v3 >> 24) + 0x200BC96) );
  v4 = (_BYTE *)((char)v1 + 33602710);
  if ( !*(_BYTE *)((char)v1 + 0x200BC96) )
  {
    LOBYTE(v1) = v200BC91;
    goto _080F6978;
  }
_080F69EC:
  v6 = *v4;
  if ( v200BC90 < v6 )
    goto _080F69FC;
  v7 = v6 - 1;
_080F69F8:
  v0 = v7;
_080F69FC:
  if ( v2 )
  {
    if ( v0 == v200BC90 && (char)v1 == v200BC91 )
    {
      v2 = 0;
    }
    else
    {
      v200BC90 = v0;
      v200BC91 = v1;
    }
  }
  return v2;
}
