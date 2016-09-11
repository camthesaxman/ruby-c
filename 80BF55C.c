int __fastcall sub_80BF55C(int a1, unsigned __int8 a2)
{
  int v2; // r2@1
  unsigned int v3; // r1@1
  int v4; // r2@1
  int v6; // [sp+0h] [bp-4h]@0

  v2 = 36 * a2 + a1;
  *(_BYTE *)v2 = 0;
  *(_BYTE *)(v2 + 1) = 0;
  v3 = 0;
  v4 = v2 + 2;
  do
  {
    *(_BYTE *)(v4 + v3) = 0;
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 0x21 );
  return v6;
}
