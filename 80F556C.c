int __fastcall sub_80F556C(int a1)
{
  unsigned int v1; // r2@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = 0;
  do
  {
    *(_DWORD *)(4 * v1 + 0x200911C) = *(_DWORD *)(4 * v1 + a1);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 4 );
  v2009344 = 1;
  return v3;
}
