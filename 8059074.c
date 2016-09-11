int DoPlayerAvatarTransition()
{
  unsigned int v0; // r4@1
  unsigned int v1; // r5@2
  int v3; // [sp+8h] [bp-4h]@0

  v0 = v202E859;
  if ( v202E859 )
  {
    v1 = 0;
    do
    {
      if ( v0 & 1 )
        call_via_r1(&dword_30048A0[9 * v202E85D], gUnknown_0830FC14[v1]);
      v1 = (v1 + 1) & 0xFF;
      v0 >>= 1;
    }
    while ( v1 <= 7 );
    v202E859 = 0;
  }
  return v3;
}
