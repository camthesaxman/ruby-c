int b_clear_atk_up_if_hit_flag_unless_enraged()
{
  signed int v0; // r3@1
  _WORD *v1; // r4@2
  _DWORD *v2; // r2@2
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v1 = (_WORD *)33705056;
    v2 = (_DWORD *)33704656;
    do
    {
      if ( *v2 & 0x800000 && *v1 != 99 )
        *v2 &= 0xFF7FFFFF;
      ++v1;
      v2 += 22;
      ++v0;
    }
    while ( v0 < v2024A68 );
  }
  return v4;
}
