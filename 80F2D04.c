int __fastcall sub_80F2D04(unsigned __int8 a1)
{
  unsigned int v1; // r1@2
  unsigned int v2; // r1@5
  int v4; // [sp+0h] [bp-4h]@0

  if ( a1 > 4u )
  {
    v2 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(4 * v2 + 0x2003B90) + 28) = sub_80F2C14;
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 <= 1 );
  }
  else
  {
    v1 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(4 * v1 + 0x2003B88) + 28) = sub_80F2C14;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 1 );
  }
  return v4;
}
