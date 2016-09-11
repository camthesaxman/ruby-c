int bc_8013B1C()
{
  _BYTE *v0; // r0@2
  signed int i; // r4@4
  unsigned int v2; // r3@5
  int v4; // [sp+Ch] [bp-4h]@0

  if ( !v2024A64 )
  {
    dword_30042D4 = (int)sub_8011E8C;
    v0 = (_BYTE *)33705253;
    do
      *v0-- = 0;
    while ( (signed int)v0 >= 33705246 );
    for ( i = 0; i < v2024A68; ++i )
    {
      v2 = *(_DWORD *)(88 * i + 0x2024AD0) & 0xFFFFFFF7;
      *(_DWORD *)(88 * i + 0x2024AD0) = v2;
      if ( *(_DWORD *)(88 * i + 0x2024ACC) & 7 && v2 & 0x1000 )
        b_cancel_multi_turn_move_maybe((unsigned __int8)i);
    }
    v2016000 = 0;
    v2016001 = 0;
    v2016110 = 0;
    v2016111 = 0;
    v201600E = 0;
    v2024C68 = 0;
  }
  return v4;
}
