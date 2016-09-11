signed int sub_80F22F8()
{
  int v0; // r3@1
  unsigned int v1; // r1@2
  int v2; // r0@3
  int v3; // r0@4

  v0 = 0;
  if ( v2006DAE > 0 )
  {
_080F231A:
    v1 = 0;
    while ( 1 )
    {
      v2 = *(_DWORD *)(4 * v1 + 16 * v0 + 0x2000320);
      if ( !v2 )
        break;
      v3 = *(_WORD *)(v2 + 36);
      if ( v3 && v3 != -16 )
        return 0;
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 > 3 )
      {
        v0 = (v0 + 1) & 0xFFFF;
        if ( v0 < v2006DAE )
          goto _080F231A;
        return 1;
      }
    }
  }
  return 1;
}
