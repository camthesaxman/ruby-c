int __fastcall sub_8121D74(_BYTE *a1)
{
  _BYTE *v1; // r3@1
  unsigned int v2; // r4@1
  __int16 *v3; // r2@4
  int v4; // r1@6
  _BYTE *v5; // r1@11
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  while ( *v1 != 255 )
    ++v1;
  v3 = &gUnknown_084016BC;
  while ( v2 != 4 )
  {
    v4 = (unsigned __int16)*v3;
    if ( !*v3 )
      ++v2;
    ++v3;
    if ( v4 == *v2039270 )
    {
      if ( v2 > 4 )
        return v7;
      break;
    }
  }
  switch ( v2 )
  {
    case 0u:
      v5 = &gUnknown_084007C8;
      goto _08121DEE;
    case 1u:
      v5 = &gUnknown_084007CA;
      goto _08121DEE;
    case 2u:
      v5 = &gUnknown_084007CC;
      goto _08121DEE;
    case 3u:
      v5 = &gUnknown_084007CE;
_08121DEE:
      StringCopy(v1, v5);
      break;
    case 4u:
      StringCopy(v1, &gUnknown_084007D0);
      break;
    default:
      return v7;
  }
  return v7;
}
