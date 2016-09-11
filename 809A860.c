int __fastcall sub_809A860(int a1)
{
  unsigned int v1; // r2@2
  int v2; // r1@3
  unsigned int v3; // r2@5
  int v5; // [sp+8h] [bp-4h]@0

  if ( a1 << 24 )
  {
    v1 = 0;
    do
    {
      v2 = 4 * v1 + 33557760;
      *(_WORD *)(*(_DWORD *)v2 + 46) = 1;
      *(_WORD *)(*(_DWORD *)v2 + 48) = 0;
      *(_WORD *)(*(_DWORD *)v2 + 50) = 0;
      *(_WORD *)(*(_DWORD *)v2 + 54) = 0;
      v1 = (v1 + 1) & 0xFFFF;
    }
    while ( v1 <= 1 );
  }
  else
  {
    v3 = 0;
    do
    {
      *(_WORD *)(*(_DWORD *)(4 * v3 + 0x2000D00) + 46) = 0;
      v3 = (v3 + 1) & 0xFFFF;
    }
    while ( v3 <= 1 );
  }
  return v5;
}
