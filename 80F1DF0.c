int sub_80F1DF0()
{
  int v0; // r2@1
  unsigned int v1; // r1@2
  unsigned __int16 v2; // r3@2
  int v3; // r2@2
  int v4; // r0@3
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  if ( v200030E > 0 )
  {
    do
    {
      v1 = 0;
      v2 = v0 + 1;
      v3 = 16 * v0;
      do
      {
        v4 = *(_DWORD *)(4 * v1 + v3 + 33555232);
        if ( v4 )
          *(_DWORD *)(v4 + 28) = sub_80F2218;
        v1 = (v1 + 1) & 0xFFFF;
      }
      while ( v1 <= 3 );
      v0 = v2;
    }
    while ( v2 < (signed int)v200030E );
  }
  audio_play(6u);
  return v6;
}
