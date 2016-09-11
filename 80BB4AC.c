int __fastcall sub_80BB4AC(int a1)
{
  unsigned int v1; // r2@1
  unsigned int v2; // r2@3
  unsigned int v3; // r2@5
  int v4; // r2@7
  unsigned int v5; // r1@8
  unsigned __int16 v6; // r7@8
  int v7; // r6@8
  int v9; // [sp+24h] [bp-4h]@0

  *(_BYTE *)a1 = 0;
  v1 = 0;
  do
  {
    *(_BYTE *)(a1 + 2 + v1);
    *(_BYTE *)(a1 + 2 + v1) = -1;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 6 );
  v2 = 0;
  do
  {
    *(_BYTE *)(a1 + 9 + v2) = 0;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 3 );
  *(_WORD *)(a1 + 14) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  v3 = 0;
  do
  {
    *(_BYTE *)(a1 + 18 + v3) = 0;
    *(_BYTE *)(a1 + 34 + v3) = 0;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 0xF );
  v4 = 0;
  do
  {
    v5 = 0;
    v6 = v4 + 1;
    v7 = 2 * v4;
    do
    {
      *(_WORD *)(2 * (4 * v4 + v5) + a1 + 76) = 0;
      v5 = (v5 + 1) & 0xFFFF;
    }
    while ( v5 <= 3 );
    *(_DWORD *)(a1 + 52 + 4 * v4) = 0;
    *(_BYTE *)(a1 + 154 + v4) = 0;
    *(_WORD *)(a1 + 124 + v7) = 0;
    *(_WORD *)(a1 + 136 + v7) = 0;
    *(_BYTE *)(a1 + 148 + v4) = 0;
    v4 = (unsigned __int16)(v4 + 1);
  }
  while ( v6 <= 5u );
  return v9;
}
