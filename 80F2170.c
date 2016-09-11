int sub_80F2170()
{
  unsigned int v0; // r3@2
  int v1; // r2@3
  int v3; // [sp+10h] [bp-4h]@0

  if ( !v2000311 )
  {
    sub_80F20F4();
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(4 * v0 + 16 * v2006DAD + 0x2000320);
      *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xF3 | 4;
      v0 = (v0 + 1) & 0xFFFF;
    }
    while ( v0 <= 3 );
    v2000311 = 2;
    v2000312 = 0;
    v4000050 = 16192;
    v4000052 = 16;
  }
  return v3;
}
