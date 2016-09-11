int __fastcall sub_8121D1C(_BYTE *a1)
{
  signed int v1; // r2@1
  __int16 *v2; // r3@1
  int v3; // r1@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = 0;
  v2 = &gUnknown_084016BC;
  do
  {
    if ( v1 == 4 )
      break;
    v3 = (unsigned __int16)*v2;
    if ( !*v2 )
      ++v1;
    ++v2;
  }
  while ( v3 != *v2039270 );
  if ( v1 >= 0 )
  {
    if ( v1 > 2 )
    {
      if ( v1 <= 4 )
        StringCopy(a1, &gUnknown_08400E62);
    }
    else
    {
      StringCopy(a1, &gUnknown_08400E5E);
    }
  }
  return v5;
}
