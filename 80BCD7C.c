int __fastcall unref_sub_80BCD7C(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r1@2
  int v5; // [sp+1Ch] [bp-4h]@0

  v1 = 0;
  v2 = 160 * a1;
  do
  {
    *(_DWORD *)(4 * v1 + 160 * a1 + 0x2027170) = v1 + 1;
    *(_WORD *)(8 * v1 + 160 * a1 + 0x2027188) = v1 + 1;
    v3 = 2 * v1 + v2;
    *(_WORD *)(v3 + 33714616) = 277;
    *(_WORD *)(v3 + 33714628) = v1 + 1;
    *(_BYTE *)(v1 + v2 + 33714640) = v1 + 5;
    *(_BYTE *)(v1 + v2 + 33714646) = 5 * v1;
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( !v1 );
  return v5;
}
