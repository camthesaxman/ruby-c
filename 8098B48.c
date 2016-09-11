int __fastcall sub_8098B48(int a1)
{
  unsigned int v1; // r2@1
  unsigned int v2; // r2@3
  unsigned int v3; // r2@5
  unsigned int v4; // r2@7
  int v6; // [sp+8h] [bp-4h]@0

  sub_809D51C(a1);
  v1 = 0;
  do
  {
    *(_WORD *)(2 * v1 + 0x20010D0) = 0;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0x27 );
  v2 = 0;
  do
  {
    *(_WORD *)(2 * v2 + 0x2001120) = 0;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x27 );
  v3 = 0;
  do
  {
    *(_DWORD *)(4 * v3 + 0x2001038) = 0;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 5 );
  v4 = 0;
  do
  {
    *(_DWORD *)(4 * v4 + 0x2001050) = 0;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 0x1D );
  v2001034 = 0;
  v2000D5C = 0;
  return v6;
}
