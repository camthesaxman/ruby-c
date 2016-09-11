int sub_807EA18()
{
  unsigned int i; // r4@2
  int v2; // [sp+14h] [bp-4h]@0

  sub_807E9C8();
  while ( !v202FEBA )
  {
    snowflakes_progress2();
    for ( i = 0; i < v202FECC; i = (i + 1) & 0xFFFF )
      sub_807ED48(*(_DWORD *)(4 * i + 0x202F848));
  }
  return v2;
}
