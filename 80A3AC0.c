int __fastcall sub_80A3AC0(int a1, unsigned __int8 a2)
{
  unsigned int v2; // r2@1
  int v4; // [sp+Ch] [bp-4h]@0

  v2 = 0;
  do
  {
    if ( v2 == a2 )
      *(_WORD *)(2 * v2 + a1 + 586) = 4221;
    else
      *(_WORD *)(2 * v2 + a1 + 586) = 4220;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 4 );
  return v4;
}
