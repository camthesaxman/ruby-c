int sub_80EB040()
{
  int v0; // r3@1
  unsigned __int16 v1; // r6@2
  int *v2; // r1@6
  _BYTE *v3; // r2@6
  int i; // r4@6
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = v0 + 1;
    if ( v0 )
    {
      if ( v0 != 21 && v0 != 18 && v0 != 19 )
      {
        v2 = &gEasyChatGroupWords[v0];
        v3 = (_BYTE *)*v2;
        for ( i = 0; *v3 != 255; i = (unsigned __int16)(i + 1) )
        {
          for ( *(_DWORD *)(4 * i + (v0 << 10) + 0x20051A4) = v3; *v3 != 255; ++v3 )
            ;
          ++v3;
        }
      }
    }
    v0 = (unsigned __int16)(v0 + 1);
  }
  while ( v1 <= 0x15u );
  return v6;
}
