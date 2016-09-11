signed int sub_80F6250()
{
  int v0; // r2@1
  unsigned int v2; // r6@5
  unsigned int v3; // r0@7
  unsigned int i; // r6@12
  char *v5; // r1@17
  char v6; // r0@17

  v0 = 0x2000000;
  if ( v2008FE8 != -1 )
    return 0;
  if ( v2008FE6 == 7 )
  {
    v2008FE8 = 0;
    for ( i = 0; i <= 5; i = (i + 1) & 0xFFFF )
    {
      if ( GetMonData((int)&dword_3004360[25 * i], 81, v0) )
      {
        v2008FE8 = 1;
        break;
      }
    }
    v5 = (char *)33591270;
    v6 = v2008FE6 + 1;
_080F6372:
    *v5 = v6;
    return 0;
  }
  if ( v2008FE6 == 8 )
    return 0;
  v2 = 0;
  do
  {
    if ( GetBoxMonData((unsigned int *)(2400 * v2008FE6 + 80 * v2008FE7 + 33751204), 81, (_BYTE *)v2008FE7)
      || (v3 = GetBoxMonData((unsigned int *)(2400 * v2008FE6 + 80 * v2008FE7 + 33768004), 81, (_BYTE *)v2008FE7)) != 0 )
    {
      v5 = (char *)33591272;
      v6 = 1;
      goto _080F6372;
    }
    ++v2008FE7;
    if ( v2008FE7 > 0x1Du )
    {
      v2008FE7 = v3;
      ++v2008FE6;
      if ( v2008FE6 > 6u )
        break;
    }
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 9 );
  return 1;
}
