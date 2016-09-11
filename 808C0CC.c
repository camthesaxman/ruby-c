int __fastcall sub_808C0CC(int a1)
{
  unsigned int v1; // r3@1
  int v2; // r1@2
  unsigned int v3; // r3@3
  unsigned int v4; // r3@5
  unsigned int v5; // r3@7
  unsigned int v6; // r3@9
  int v8; // [sp+10h] [bp-4h]@0

  v1 = 0;
  do
  {
    v2 = a1 + 4 * v1;
    *(_WORD *)v2;
    *(_WORD *)v2 = -1;
    *(_BYTE *)(v2 + 2) &= 0xFCu;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 0x181 );
  *(_WORD *)(a1 + 1544) = 0;
  *(_BYTE *)(a1 + 1546) &= 0xFCu;
  *(_WORD *)(a1 + 1548) = 0;
  *(_WORD *)(a1 + 1550) = 0;
  *(_WORD *)(a1 + 1552) = 0;
  *(_WORD *)(a1 + 1554) = 0;
  *(_WORD *)(a1 + 1556) = 0;
  *(_WORD *)(a1 + 1558) = 0;
  *(_WORD *)(a1 + 1560) = 0;
  *(_WORD *)(a1 + 1562) = 0;
  *(_WORD *)(a1 + 1564) = 0;
  v3 = 0;
  do
  {
    *(_WORD *)(a1 + 1566 + 2 * v3);
    *(_WORD *)(a1 + 1566 + 2 * v3) = -1;
    v3 = (v3 + 1) & 0xFFFF;
  }
  while ( v3 <= 3 );
  *(_WORD *)(a1 + 1576) = 0;
  *(_WORD *)(a1 + 1578) = 0;
  *(_BYTE *)(a1 + 1580) = 0;
  *(_BYTE *)(a1 + 1581) = 0;
  *(_BYTE *)(a1 + 1582) = 0;
  *(_BYTE *)(a1 + 1583) = 0;
  *(_WORD *)(a1 + 1584) = 0;
  *(_WORD *)(a1 + 1586) = 0;
  *(_WORD *)(a1 + 1588) = 0;
  *(_WORD *)(a1 + 1590) = 0;
  *(_WORD *)(a1 + 1592) = 0;
  v4 = 0;
  do
  {
    *(_WORD *)(a1 + 1594 + 2 * v4) = 0;
    v4 = (v4 + 1) & 0xFFFF;
  }
  while ( v4 <= 3 );
  *(_BYTE *)(a1 + 1610) = 0;
  *(_BYTE *)(a1 + 1611) = 0;
  *(_BYTE *)(a1 + 1612) &= 0xFEu;
  *(_BYTE *)(a1 + 1613) = 0;
  *(_BYTE *)(a1 + 1615) = 0;
  *(_BYTE *)(a1 + 1616) = 0;
  *(_WORD *)(a1 + 1618) = 0;
  *(_WORD *)(a1 + 1620) = 0;
  v5 = 0;
  do
  {
    *(_BYTE *)(a1 + 1622 + v5) = 0;
    v5 = (v5 + 1) & 0xFFFF;
  }
  while ( v5 <= 7 );
  v6 = 0;
  do
  {
    *(_BYTE *)(a1 + 1630 + v6) = 0;
    v6 = (v6 + 1) & 0xFFFF;
  }
  while ( v6 <= 7 );
  return v8;
}
