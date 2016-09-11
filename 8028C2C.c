int atkB2_setperishsong()
{
  int v0; // r6@1
  signed int v1; // r3@1
  _BYTE *v2; // r4@2
  _DWORD *v3; // r2@2
  int v5; // [sp+18h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v2 = (_BYTE *)33705143;
    v3 = (_DWORD *)33705112;
    do
    {
      if ( *v3 & 0x20 || *(_BYTE *)(88 * v1 + 0x2024AA0) == 43 )
      {
        ++v0;
      }
      else
      {
        *v3 |= 0x20u;
        *v2 = 51;
      }
      v2 += 28;
      ++v3;
      ++v1;
    }
    while ( v1 < v2024A68 );
  }
  sub_80153D0(v2024C07);
  if ( v0 == v2024A68 )
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  else
    v2024C10 += 5;
  return v5;
}
